#include <stdio.h>

int main (){
	
	char karakter;
	
	printf ("karakter giriniz: ");
	scanf ("%c", &karakter);
	
	switch (karakter){
		
		case 'a': 
			printf ("ali");
			break;
			
		case 'b':
			printf ("beyza");
			break;
			
		case 'c':
			printf ("cafer");
			break;
			
		default: 
			printf ("tanimiyom!");
			break;
							
	}
	
	return 0;
}
