#include <stdio.h>

int main (){
	
	int sayi;
	
	
	printf ("1-12 arasinda sayi giriniz: ");
	scanf ("%d", &sayi);
	
	char mevsim;
	
	switch (sayi){
		
		case 1: 
			printf ("ocak\n", sayi);
			mevsim = 'k';
			break;
			
		case 2: 
			printf ("subat\n", sayi);
			mevsim = 'k';
			break;
			
		case 3: 
			printf ("mart\n", sayi);
			mevsim = 'I';
			break;
			
		case 4: 
			printf ("nisan\n", sayi);
			mevsim = 'I';
			break;
			
		case 5: 
			printf ("mayis\n", sayi);
			mevsim = 'I';
			break;
			
		case 6: 
			printf ("haziran\n", sayi);
			mevsim = 'y';
			break;
			
		case 7: 
			printf ("temmuz\n", sayi);
			mevsim = 'y';
			break;
			
		case 8: 
			printf ("agustos\n", sayi);
			mevsim = 'y';
			break;
			
		case 9: 
			printf ("eylul\n", sayi);
			mevsim = 's';
			break;
			
		case 10: 
			printf ("ekim\n", sayi);
			mevsim = 's';
			break;
			
		case 11: 
			printf ("kasim\n", sayi);
			mevsim = 's';
			break;
			
		case 12: 
			printf ("aralik\n", sayi);
			mevsim = 'k';
			break;
			
		default: 
			printf ("yanlis sayi!\n");
			return 0;
			
	}
	
	if (mevsim = 'I'){
		printf ("mevsim ilkbahar.");
	
	
	if (mevsim = 'y'){
		printf ("mevsim yaz.");
	}
	
	else if (mevsim = 's'){
		printf ("mevsim sonbahar.");
	}
	
	else
		printf ("mevsim kýs.");
		
}
	
	
	return 0;
	
}
