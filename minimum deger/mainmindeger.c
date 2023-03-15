#include <stdio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int minEleman(int dizi[],int eleman){
	int i;
	int tut = dizi[0];
	
	for(i = 0; i< eleman; i++){
		if(tut > dizi[i]){
			tut = dizi[i];
		}
		
	}
	return tut;
	
}



int main(int argc, char *argv[]) {
	
	int eleman,i;
	
	 printf("eleman sayisini giriniz:");
	   scanf("%d",&eleman);
	   
	if(eleman>0){
		
	 int dizi[eleman];
	 
	for(i=0; i<eleman; i++){
		printf("%d. Elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	
	printf("Minimum deger = %d", minEleman(dizi,eleman));

	  
	}else{
		printf("lutfen gecerli bir deger giriniz!!!");
	}

	
	return 0;
}
