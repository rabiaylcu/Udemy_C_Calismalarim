#include <stdio.h>
#include <math.h>

int main (){
	
	int sayi,i=1,fakt=1;
	
	baslangic:
	printf ("faktoriyelini istediginiz sayi: ");
	scanf ("%d", &sayi);
	
	if (sayi==0){
		fakt=0;
		goto cikis;
	}
	
	else if (sayi<0){
		printf ("0 veya pozitif sayi giriniz...\n\n");
		goto baslangic;
	}
	
	else {
	while (i<=sayi){
			fakt*=i;
			i++;
		}		
	}
	
	cikis:
	printf ("%d!= %d", sayi, fakt);
	
	return 0;
}
