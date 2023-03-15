#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct bilgi{
	char ad[25];
	char soyad[20];
	int numara;
	char adres[50];
};


int main() {
	struct bilgi ogr[5];
	int i;
	
	for(i = 1; i<=5 ; i++) {
		
		printf("%d)\n ogrencinin adini giriniz:\n",i);
		scanf("%s",&ogr[i].ad);
		
		printf("ogrencinin soyadini giriniz: \n");
		scanf("%s",&ogr[i].soyad);
		
		printf("ogrencinin numarasini giriniz: \n");
		scanf("%d",&ogr[i].numara);
		
	
		printf("ogrencinin adresini giriniz:\n");
		scanf("%s",&ogr[i].adres);
	}
	
	printf("*****OGRENCILERIN BILGILERI*****\n");
	for(i = 1;i <= 5; i++){
		printf("AD: %s\n",ogr[i].ad);
		printf("SOYAD: %s\n",ogr[i].soyad);
		printf("NUMARA: %d\n",ogr[i].numara);
		printf("ADRES: %s\n",ogr[i].adres);
		
	}
	
	
	
	return 0;
}
