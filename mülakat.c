#include <stdio.h>

int main(){
	char cinsiyet;
	float boy;
	
	printf ("cinsiyetinizi giriniz E/K: ");
	scanf ("%c", &cinsiyet);
	
	printf ("boyunuzu giriniz: ");
	scanf ("%f", &boy);
	
	if ((cinsiyet == 'e'|| cinsiyet == 'E') && boy>160){
		printf ("mulakati gectiniz");
	}
	
	else if ((cinsiyet == 'k'|| cinsiyet == 'K') && boy>150){
		printf ("mulakati gectiniz");
	}
	
	else {
		printf ("mulakati gecemediniz...");
	}
	
	
	return 0;
}
