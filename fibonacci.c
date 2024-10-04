#include <stdio.h>

int main (){
	
	int sayi;
	printf ("kac fibonacci istiyon: ");
	scanf ("%d", &sayi);
	
	int a=1,b=1,c;
	printf ("%d\t%d\t", a,b);
	
	int i;
	
	for (i=3;i<=sayi;i++){
		
		c=a+b;
		a=b;
		b=c;
		
	printf ("%d\t", c);	
	
	}
	
	return 0;
}
