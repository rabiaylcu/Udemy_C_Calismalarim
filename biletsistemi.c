 #include <stdio.h>
 
 int main(){
 	
	int biletsayisi=100;
 	char biletal;
 	
 	for (;biletsayisi>0;){
 		printf ("bilet almak ister misiniz? [E/e]: ");
 		scanf (" %c", &biletal);
 		
 		if (biletal=='e'||biletal=='E'){
 			
			int alinanbilet; 
			printf ("kac tane bilet istersin: ");
 			scanf ("%d", &alinanbilet);
 			
 			if (alinanbilet<=biletsayisi){
 				biletsayisi-=alinanbilet;
			 }
			 else {
			 	printf ("alinabilecek bilet sayisina gore bilet aliniz..\n\n");
			 }
			 
			 printf ("alinabilecek toplam bilet sayisi: %d\n\n", biletsayisi);
		 }
		 
		 else {
		 	break;
		 }
	 }
	 
	 if (biletsayisi==0){
	 	printf ("alinan bilet sayisi: %d\n", 100-biletsayisi);
	 	printf ("biletler tukendi..\n");
	 }
	 else {
	 	printf ("alinan bilet sayisi: %d \nkalan bilet sayisi: %d", 100-biletsayisi, biletsayisi);
	 }
 	
 	return 0;
 }
