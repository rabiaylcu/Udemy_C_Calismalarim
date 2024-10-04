#include <stdio.h>

int main(){
	int sayi, sayi2;
	
	printf ("sirasiyla buyuk ve kucuk sayilari giriniz:\n");
	scanf ("%d %d", &sayi, &sayi2);
	
	if (sayi%sayi2==0){
		printf ("sayi, sayi2nin %d katidir", sayi/sayi2);
	}
	
	else if (sayi%sayi2!=0){
		printf ("sayi, sayi2ye tam bolunmuyor...\n");
	}
	
	if (sayi<sayi2){
		printf ("once buyuk sayiyi giriniz!");
		return 0;
	}
	
	return 0;
}


