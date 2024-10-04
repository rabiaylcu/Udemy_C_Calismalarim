#include <stdio.h>

int main (){
	
	int adet; 
	float fiyat=0;
	
	printf ("urun adedini giriniz: ");
	scanf ("%d", &adet);
	
	if (adet>0 && adet<100){
		fiyat=adet*3;
	}
	
	else if (adet>=100 && adet<200){
		fiyat= adet*2.5;
	}
	
	else if (adet>=200 && adet<300){
		fiyat=adet*2;
	}
	
	else if (adet>=300 && adet<400){
		fiyat=adet*1.25;
	}
	
	else if (adet>=400){
		fiyat=adet*.75;
	}
	
	else {
		printf ("lutfen 1 veya 1 den buyuk adet sayisi giriniz...\n");
		return 0;
	}
	
	int yfiyat;
	yfiyat=fiyat;
	
	printf ("toplam fiyat: %.2f\nodenecek fiyat: %d\n", fiyat, yfiyat);
		
	float indirim;
	indirim=fiyat-yfiyat;
	
	printf ("yapilan indirim: %f", indirim);
	
	return 0;
	
}
