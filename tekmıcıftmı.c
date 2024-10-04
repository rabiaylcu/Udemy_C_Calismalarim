#include <stdio.h>

int main (){
	int sayi;
	
	printf ("sayi giriniz: ");
	scanf ("%d", &sayi);
	
	if (sayi%2==0){
		printf ("girdiginiz sayi cifttir.");
	}
	
	else {
		printf ("sayi tektir.");
	}
	
	return 0;
}
