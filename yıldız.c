#include <stdio.h>

int main (){
	
	int sayi,satir,sutun;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	for (satir=1;satir<=sayi;satir++){
		for (sutun=1;sutun<=satir;sutun++){
			printf ("*");	
		}
		printf ("\n");
	} 
	
	for (satir=1;satir<=sayi;satir++){
		for (sutun=sayi-satir;sutun>=0;sutun--){
			printf ("*");
		}
		printf ("\n");
	}
	
	return 0;
}
