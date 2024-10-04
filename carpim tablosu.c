#include <stdio.h>

int main (){
	
	int sayi,i,j;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	for (i=1;i<=10;i++){
		
		for (j=1;j<=sayi;j++){
			printf ("%d*%d=%d\t", i,j,i*j);	
		}
		printf ("\n");
	}

	return 0;
}
