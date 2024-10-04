#include <stdio.h>

int main (){
	
	int sayi,i=1,toplam=0;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	while (i<=sayi){
		toplam+=i;
		printf ("%d\n", i);
		i++;
	}
	
	printf ("toplaminiz: %d", toplam);
	
	return 0;
}
