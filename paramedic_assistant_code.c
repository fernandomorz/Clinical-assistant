#include <stdio.h>
#include <string.h>

void funcion_TA ()

int main (){
	
char ansyn;

printf ("Asistente en Urgencias medicas. By Fernando Moreno  \n");
// printf recibe parametros uno es la propia cadena de formato 
//la cajita de las letras; las letras (texto) y valores de variables (marcas) que 
//se agregan a las 

do{
printf ("¿Cuento con ASC? Y/N  \n");
ansyn=getch();
//scanf ("%c",&ansyn);
/* (strcmp(ans_y, ansyn)==0){
	//printf ("Continuando protocolo");
	}
	else if (strcmp(ans_n, ansyn)==0){
	printf ("¿Cuento con ASC? Y/N");
	}
*/
		} while (toupper (ansyn)=='N');

printf ("...  \n");

do {
printf ("Escena segura? Y/N  \n");
ansyn=getch();
	if (toupper(ansyn)=='N'){
		printf ("Active sus 8  \n");
    } else {
    	if (toupper(ansyn)=='Y'){
		printf ("Seguridad publica activada: Escena segura  \n");
		}}
	} while (toupper (ansyn)=='N');


printf ("Me reportan # numero de pacientes. No se descartan más  \n");
printf ("Inmovilización de cervicales hasta abordar al paciente  \n");
printf ("Naturaleza de la enfermedad o mecanismo de lesion hasta abordar al Px  \n");

printf ("Comenzando AVDI  \n");



return 0;

}







