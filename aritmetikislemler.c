#include <stdio.h>
#include <math.h>

int main (){
	
	float sayi1,sayi2,sayi3,enb,enk,toplam=0,ort=0,carpim=0;
	
	printf ("uc tane sayi giriniz:\n");
	scanf ("%f%f%f", &sayi1, &sayi2, &sayi3);
	
	toplam = sayi1+sayi2+sayi3;
	ort = toplam/3;
    carpim= sayi1*sayi2*sayi3;
	
	enk=sayi1;
		
		if (sayi2<enk){
			enk=sayi2;
		}
		if (sayi3<enk){
			enk=sayi3;
		}    
    
	enb=sayi1;
		
		if (sayi2>enb){
			enb=sayi2;
		}
		if (sayi3>enb){
			enb=sayi3;
		}
	
	
	printf ("toplam: %f\nortalama: %f\ncarpim: %f\n", toplam, ort, carpim);
	printf ("kucuk sayi: %f\nbuyuk sayi: %f", enk, enb);	
	
	return 0;
}
