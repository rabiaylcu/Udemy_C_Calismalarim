#include <stdio.h>

int main (){
	
	int sayi;
	
	menu:
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	int i=1;
	while (i<=10){
		
		printf ("%d*%d=%d\n", sayi,i,sayi*i);
		i++;
		
	}
	
	printf ("\n");	
	goto menu;

	return 0;
}
