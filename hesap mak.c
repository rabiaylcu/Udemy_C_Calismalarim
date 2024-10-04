#include <stdio.h>
#include <math.h>

int main (){
	
	int secim;
	float x,y;
	
	menu:	printf ("yapmak istediginiz islemi seciniz: ");
			printf ("1-topla\n2-cikar\n3-carp\n4-bol\n5-karekok\n6-kuvvet\n");
			printf ("cikmak icin -1 giriniz: ");
			scanf ("%d", &secim);
			
	if (secim==-1){
		goto cikis;
	}
	
	if (secim>0&&secim<7){
	printf ("lutfen iki sayi giriniz:\n");
	scanf ("%f%f",&x,&y);		
	}
	
	switch (secim){
		
		case 1: 
			printf ("toplaminiz: %f", x+y);
			break;
		
		case 2:
			printf ("cikarma sonucu: %f", x-y);
			break;
			
		case 3: 
			printf ("carpma sonucu: %f", x*y);
			break;
			
		case 4:
			printf ("bolme sonucu: %f", x/y);
			break;
			
		case 5: 
			printf ("%f\'in karekoku: %f\n", x,sqrt(x));
			printf ("%f\'in karekoku: %f", y,sqrt(y));
			break;
			
		case 6: 
			printf ("%f uzeri %f: %f", x,y,pow(x,y));
			break;
			
		default:
			printf ("lutfen 1-6 arasi sayi giriniz!");
			break;
		
	}
	
	printf ("\n\n");
	goto menu;	
	cikis: 
	return 0;
}
