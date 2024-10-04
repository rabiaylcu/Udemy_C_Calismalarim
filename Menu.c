#include <stdio.h>

int main (){
	
	int sipkod;
	float toplam, porsiyon;
	
	printf ("MENU\t  Siparis Kodu\tFiyati\n");
	printf ("Baslangic\t1\t5.5TL\n");
	printf ("Ara sicaklar\t2\t7.5TL\n");
	printf ("Salatalar\t3\t12TL\n");
	printf ("Ana yemekler\t4\t17.75TL\n");
	printf ("Tatlilar\t5\t11.25TL\n");
	printf ("Icecekler\t6\t2.25TL\n");
	printf ("cikis icin -1 giriniz...\n");
	
	menu: printf ("Lutfen yemek istediginiz siparis kodunu giriniz: ");
	      scanf ("%d", &sipkod);
	
	if (sipkod==-1){
		goto cikis;
	}
	
	if (sipkod>0&&sipkod<7){
		printf ("kac porsiyon istersin: ");
		scanf ("%f", &porsiyon);
	}
	
	switch (sipkod){
		
		case 1: 
			toplam+=porsiyon*5.5;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
			
		case 2: 
			toplam+=porsiyon*7.5;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
		
		case 3: 
			toplam+=porsiyon*12;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
		
		case 4: 
			toplam+=porsiyon*17.75;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
		
		case 5: 
			toplam+=porsiyon*11.25;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
		
		case 6: 
			toplam+=porsiyon*2.25;
			printf ("toplam tutar: %f\n\n", toplam);
			break;
		
		default:
			printf ("lutfen 1-6 arasi secim yapiniz!\n\n");
			goto menu;
			
	}

	goto menu;
	cikis:
		printf ("\nsiparisiniz tamamlandi\n");
		printf ("toplam tutar: %f\n", toplam);
	
	return 0;
}
