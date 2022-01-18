#include <STDIO.H>
#include <TIME.H>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ABC (){
	char respuesta;
	
//****A***	
printf ("A---Airway \n");
printf ("El Paciente habla, respira o llora sin dificultad? Y/N  \n");
respuesta= getch (); 
	if (toupper(respuesta)=='Y'){
		printf ("Conducto Aereo Permeable \n"); return;}
		else if (toupper(respuesta)=='N');{
			printf ("El Paciente tiene difiultad para respirar o presenta ruidos anormales Y/N  \n");}
			respuesta= getch (); 
				if (toupper(respuesta)=='Y'){
				system("cls");
				do{
				printf ("Realice control cervical manual y verifique obstrucción de conducto aereo \n"); 
				printf ("Signos de Obstrucción: Trauma/sangre. Ruidos respiratorios anormales. Apnea \n"); 
				printf ("--->Conducto Aereo Permeable? \n"); 
				respuesta=getch();
				} while (toupper (respuesta)=='N');
				}else if (toupper(respuesta)=='N');{ 
							printf ("Conducto Aereo Permeable \nContinuando protocolo ABC \n ");}
//****B***	
printf ("B---Breathing \n");

printf ("Inspeccion de Ventilaciones por VOS: Ver Oir Sentir   \n");
printf ("Aqui falta mas trabajo :(   \n");

printf ("Inspeccion de Campos Pulmonares   \n");


}

int main(){
 ABC(); 
system("pause");
system("cls");
return 0;
}
