#include <stdio.h>
#include <time.h>
 
void ABC (){
  clock_t t,ts;
  int segundos=0; 	
  char respuesta;
  unsigned int sleep(unsigned int segundos); //Aun no entiendo como funciona
  ts=clock()+CLOCKS_PER_SEC;
  
printf ("El Paciente habla, respira o llora sin dificultad? Y/N  \n");
respuesta= getch (); 
if (toupper(respuesta)=='Y'){printf ("Conducto Aereo Permeable \n"); return;}
else if(toupper(respuesta)=='N'){
	
   do {
   	REINICIO:
   printf ("El Paciente tiene difiultad para respirar o presenta ruidos anormales? Y/N \n");			
   respuesta= getch (); 
	if (toupper(respuesta)=='Y'){
		do  { //Si paciente tiene via comprometida
    	if((t=clock())>=ts) {++segundos; ts=t+CLOCKS_PER_SEC;
    	if (segundos==1){ system("cls");
		printf ("Realice control cervical manual y verifique obstrucción de conducto aereo \n"); 
		printf ("Signos de ObstrucciOn:--Trauma/sangre-- \n");}		
		if (segundos==3){ system("cls");
		printf ("Realice control cervical manual y verifique obstrucción de conducto aereo \n"); 
		printf ("Signos de ObstrucciOn:--Ruidos respiratorios anormales-- \n");}
		if (segundos==5){ system("cls");
		printf ("Realice control cervical manual y verifique obstrucción de conducto aereo \n"); 
		printf ("Signos de ObstrucciOn:--Apnea-- \n");}
		}
    	}while (segundos<=6);
    	goto REINICIO;
    } else if(toupper(respuesta)=='N'){ printf ("Inmovilizacion cervical descartada \n");system("pause");}
} while ((toupper(respuesta)!='N'));
}
}
int main(){
 
 ABC();
return 0;
}
