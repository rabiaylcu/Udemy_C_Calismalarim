#include <math.h>

int main (){
	
	int sayi;
	int bassay=0,sayidegtop=0;
	
	baslangic:	
	printf ("sayi degerlerinin toplamini ogrenmek istediginiz sayi: ");
	scanf ("%d", &sayi);
	
	if (sayi<0){
		printf ("0 veya pozitif sayi giriniz...\n\n");
		goto baslangic;
	}
	
	do {
		
		sayidegtop+=sayi%10;
		bassay++;
		sayi/=10;	
		
	}while (sayi>0);
	
	printf ("%d basamakli ve sayi degerleri toplami %d dir\n",bassay, sayidegtop);
	bassay=0;
	sayidegtop=0;
	
	char karakter;
	printf ("devam etmek istiyor musunuz? [e/h]: ");
	scanf (" %c", &karakter);
	
	if (karakter=='e'|| karakter=='E'){
		goto baslangic;
	}
	
	return 0;
	
}
