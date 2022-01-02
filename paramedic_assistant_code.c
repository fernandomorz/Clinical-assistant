#include <stdio.h>
#include <string.h>

void BP_Function (BP_sist, BP_dias, sex ){
	//Norma Oficial Mexicana NOM-030-SSA2-2009, Para la prevención, detección, 
	//diagnóstico, tratamiento y control de la hipertensión arterial sistémica.
	switch (BP_sist) {
	Optima     						< 120  		<80
	Normal 							120-129		80-84
	Normal alta 					130-139		85-89
	Hipertension grado 1 			140-159		90-99
	Hipertension grado 2 			160-179		100-109
	Hipertension grado 3 			> =180		>= 110
	Hipertension sistolica aislada  > =140		<90
	}
}

void Glu_Function(){
// Basado en NOM-015-SSA2-2010:PARA LA PREVENCION, 
//TRATAMIENTO Y CONTROL DE LA DIABETES MELLITUS


}

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







