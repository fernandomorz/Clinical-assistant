#include <stdio.h>
#include <time.h>
 
void ABC (){
  clock_t t,ts;
  int segundos=0; int i;	
  char respuesta;
  unsigned int sleep(unsigned int segundos); //Aun no entiendo como funciona
  ts=clock()+CLOCKS_PER_SEC;
//A
printf ("El Paciente habla, respira o llora sin dificultad? Y/N  \n");
respuesta= getch (); 
if (toupper(respuesta)=='Y'){printf ("Conducto Aereo Permeable \n"); return;}
else if(toupper(respuesta)=='N'){

REVALORAR:
system("cls");	
printf ("El Paciente tiene difiultad para respirar o presenta ruidos anormales? Y/N \n");			
respuesta= getch (); 
	if (toupper(respuesta)=='Y'){ goto CONTROL_CERVICAL;}
	else{printf ("AQUI NO SE QUE VA :( \n"); goto CIRCULACION;}	
} //fineseif
//B
CONTROL_CERVICAL:
do  { //Si paciente tiene via comprometida
    	if((t=clock())>=ts) {++segundos; ts=t+CLOCKS_PER_SEC;
    	if (segundos==1){ system("cls");
		printf ("Realice control cervical manual y verifique obstruccion de conducto aereo \n"); 
		printf ("\n");
		printf ("Signos de Obstruccion:--Trauma/sangre-- \n");}	
			
		if (segundos==3){ system("cls");
		printf ("Realice control cervical manual y verifique obstruccion de conducto aereo \n"); 
		printf ("\n");
		printf ("Signos de Obstruccion:--Ruidos respiratorios anormales-- \n");}
		
		if (segundos==5){ system("cls");
		printf ("Realice control cervical manual y verifique obstruccion de conducto aereo \n"); 
		printf ("\n");
		printf ("Signos de Obstruccion:--Apnea-- \n");}
		}
    	}while (segundos<=6); segundos=0; goto REVALORAR;
//C
CIRCULACION:	
	for (i=0;i<2;i++){
do  { 
    	if((t=clock())>=ts) {++segundos; ts=t+CLOCKS_PER_SEC;
    	if (segundos==1){ system("cls");
		printf ("Detectando Ritmo Frecuencia y Calidad de los Pulsos \n"); 
		printf ("\n");}		
		if (segundos==3){ system("cls");
		printf ("Determinando Pulso Central y Periferico \n"); 
		printf ("\n");}
		if (segundos==5){ system("cls");
		printf ("Evaluando Condicion Temperatura y Coloracion de la piel \n"); 
		printf ("\n");}
		if (segundos==7){ system("cls");
		printf ("Explorando Focos Cardiacos \n"); 
		printf ("\n");}
		if (segundos==9){ system("cls");
		printf ("Evaluando llenado capilar \n"); 
		printf ("\n");}
		}
    	}while (segundos<=10); segundos=0; 
    }
}


int main(){
 
 ABC();
 system("pause");
return 0;
}
