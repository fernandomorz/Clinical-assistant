#include <STDIO.H>
#include <TIME.H>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void AVDI (){
	int i;
	char respuesta;
	printf ("Evaluando AVDI... (Estimulo de Alerta, Verbal, Dolor-->Inconsciencia)  \n");
	
	printf ("El Px me percibe a la llegada? Y/N \n");
	respuesta= getch (); //scanf("%c", &respuesta);
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=0;}
	
	printf ("El Px Responde si le hablo?  \n");
	respuesta= getch (); //scanf("%c", &respuesta);
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=1;}
	
	printf ("El Px Responde al estimulo doloroso?  \n");
	respuesta= getch (); //scanf("%c", &respuesta);
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=2;}	
		
	if (i==2){printf ("Px Inconsciente \n");}
}

int main(){
 AVDI(); 
return 0;
}
