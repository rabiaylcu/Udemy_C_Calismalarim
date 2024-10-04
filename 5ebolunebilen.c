#include <stdio.h>

int main (){
	
	int sayi,i;
	
	printf ("girilen sayiya kadar 5e bolunen sayilari bul..\n");	
	printf ("bir sayi giriniz:");
	scanf ("%d", &sayi);
	
	if (sayi>=0){
		for (i=0; i<=sayi; i++){
			if (i%5==0){
				printf ("%d\n", i);
			}
		}		
	}
	
	else {
		for (i=0;i>sayi;i-=5){
			printf ("%d\n",i);
		}
	}
	
	return 0;
}
