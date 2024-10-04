#include <stdio.h>

int main (){
	
	char karakter;
	
	printf ("karakter giriniz: ");
	scanf ("%c", &karakter);
	
	if (65<=karakter&&karakter<=90){
		printf ("%c harfi ve degeri %d olan karakter buyuk bir harftir.", karakter, karakter);	
	}
	
	else if (97<=karakter&&karakter<=122){
		printf ("%c harfi ve degeri %d olan karakter kucuk bir harftir.", karakter, karakter);	
	}
	
	else {
		printf ("lutfen a-z veya A-Z araliginda harf giriniz.");
	}
	
	return 0;
}
