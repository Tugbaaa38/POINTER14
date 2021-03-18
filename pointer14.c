
#include <stdio.h>
#include <stdlib.h>

//DIZILERIN FONKSIYONLARA GOSTERICILER YOLUYLA GECIRILMESI

void display_array(const int *ptr ,int size)
{
	int i;
	for(i=0;i<size;i++)
   {
   	printf("%d ",*(ptr+i));
   }
}

int main() {
     //BILGI: const belirteci: Programcinin derleyiciye belirli bir degiskenin degerinin degistirilmemesi gerektiginin bildirilmesini saglar.
     int boyut;
	 int dizi[20],i;
     printf("Boyut:");
     scanf("%d",&boyut);
	 printf("Diziyi doldurun\n");
	 for(i=0;i<boyut;i++)
	 {
	 	printf("dizi[%d]=",i);
	 	scanf("%d",&dizi[i]);
	 }
	 system("cls");
	 display_array(dizi,boyut);

	return 0;
}
/*
while(size--)
	{
		printf("%d ",*(ptr++));          yukaridaki for kismi yerine bu kodu da yazsak ayni ciktiyi elde edebiliriz.
	}
	*(ptr++)  index arttirma islemidir..
*/
