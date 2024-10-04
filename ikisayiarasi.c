#include <stdio.h>
#include <math.h>

int main (){
	
	int sayi1, sayi2, i, toplam=0;
	int buyuk, kucuk;
	
	printf ("iki sayi giriniz:\n");
	scanf ("%d%d", &sayi1, &sayi2);
	printf ("\n");
	
	int ts=abs(sayi1-sayi2)+1;
	
	if (sayi1<=sayi2){
		
		buyuk=sayi2;
		kucuk=sayi1;
		
		while (ts>0){
			printf ("%d\n", sayi1);
			toplam+=sayi1;
			sayi1++;
			ts--;
			
		}
	}
	
	else if (sayi1>=sayi2){
		
		buyuk=sayi1;
		kucuk=sayi2;
		
		while (ts>0){
			printf ("%d\n", sayi2);
			toplam+=sayi2;
			sayi2++;
			ts--;
			
		}
	}
	
	
	printf ("\n%d den %d ye olan toplaminiz: %d", kucuk, buyuk, toplam);
	
	
	
	
	
	return 0;
}
