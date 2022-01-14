#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void BlodPressure_Function (Systolic_BP, Diastolic_BP ){
	//Norma Oficial Mexicana NOM-030-SSA2-2009, Para la prevención, detección, 
	//diagnóstico, tratamiento y control de la hipertensión arterial sistémica.
		
		printf("Su Presion arterial Sistemica es = %d \n",(Systolic_BP + 2*Diastolic_BP)/3);     					

		if( Systolic_BP < 120 && Diastolic_BP <80){
			printf("En un rango Optimo \n");     					
		return ;}
		
		if( (Systolic_BP >=120 || Systolic_BP <130) && (Diastolic_BP >=80 || Diastolic_BP <85)){
			printf("En un rango Normal \n");
		return ;}
		
		if( (Systolic_BP >= 130 || Systolic_BP <140) && (Diastolic_BP >=85 || Diastolic_BP <90)){
		
			printf("En un rango Normal alto \n");
		return ;}
		
		if( (Systolic_BP >=140 || Systolic_BP <160) && (Diastolic_BP >=90 || Diastolic_BP <100)){
			printf("Atencion!---Hipertension grado 1 \n");
		return ;}
		
		if( (Systolic_BP >=160 || Systolic_BP <180) && (Diastolic_BP >=100 || Diastolic_BP <110)){
			printf("Atencion!---Hipertension grado 2 \n");
		return ;}
		
		if ((Systolic_BP >=180 ) && (Diastolic_BP >= 110)){
			printf("Atencion!---Hipertension grado 3 \n");
		return ;}
		
		if ((Systolic_BP >=140 ) && (Diastolic_BP <90)){
			printf("Hipertension sistolica aislada. Verifique nuevamente \n"); 
		return ;}
	}

void Glu_Function(){

}

void DCAP_BLS(){
printf ("D	-Deformacion \n");
printf ("C	-Contusion \n");
printf ("A	-Abrasion \n");
printf ("P	-Penetracion \n");
printf ("L	-Laceracion \n");
printf ("Q	-Quemadura \n");
printf ("E	-Edema \n");
printf ("S	-Sensibilidad \n");
printf ("I	-Inestabilidad \n");
printf ("C	-Crepitacion \n");
}

void SAMPLE(){
printf ("S	-Sintomas:    		Que signos y sintomas se produjeron al inicio? \n");
printf ("A	-Alergias: 	 		Es alergico a algun medicamento o agente \n");
printf ("M	-Medicamento:  		Toma algun medicamento? \n");
printf ("P	-Padecimiento: 		El Px tiene historial medico? \n");
printf ("L	-Lunch:   	 		Cuando fue su ultima comida?	 \n");
printf ("E	-Acontecimientos: 	Que causo este incidente? \n");
}

void OPQRST(){
printf ("O	-Origen:        Cuando inicio? \n");
printf ("P	-Provocado: 	A que se lo atribuye? \n");
printf ("Q	-Calidad:  		Que caracteristicas tiene? \n");
printf ("R	-Irradiacion: 	Hacia donde se irradia la molestia? \n");
printf ("S	-Severidad:   	Que intensidad tiene?	 \n");
printf ("T	-Tiempo: 		Cuanto tiempo dura la molestia? \n");
}

void AVDI (){
	int i;
	char respuesta;
	printf ("Evaluando AVDI... (Estimulo de Alerta, Verbal, Dolor-->Inconsciencia)  \n");
	
	printf ("El Px me percibe a la llegada? Y/N \n");
	respuesta= getch (); 
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=0;}
	
	printf ("El Px Responde si le hablo?  \n");
	respuesta= getch (); 
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=1;}
	
	printf ("El Px Responde al estimulo doloroso?  \n");
	respuesta= getch (); 
	if (toupper(respuesta)=='Y'){
		printf ("Px Consciente\n");
				return;
		} else if (toupper(respuesta)=='N') { i=2;}	
		
	if (i==2){printf ("Px Inconsciente \n");}	
}

int main (){
	
//*************___VARIABLES___*************	
char ansyn;	
int Px_numero;	
int SBP_Actual; //BlodPressure_Function
int DBP_Actual; //BlodPressure_Function

printf ("Asistente en Urgencias medicas. By Fernando Moreno  \n");
// printf recibe parametros uno es la propia cadena de formato 
//la cajita de las letras; las letras (texto) y valores de variables (marcas) que 
//se agregan a las 

//*************___¿ASC y EPP?___*************	
do{
printf ("¿Cuento con ASC y EPP? Y/N  \n");
ansyn=getch();
		} while (toupper (ansyn)=='N');
printf ("...  \n");
system("cls");

//*************___¿ESCENA SEGURA?___*************	
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
printf (" PARAMEDICO EN ACCION!!!!  \n");
system("pause");
system("cls");

//*************___¿NUMERO DE PX?___*************
printf ("Numero de pacientes (Px)?  \n");	
scanf("%d", &Px_numero);
printf ("Numero de Px reportados: %d . [No descarte más] \n",Px_numero);
system("pause");
system("cls");

//*************___INMOVILIZACION DE CERVICALES, NATURALEZA DE ENFERMEDAD O MECANISMO DE LESION___*************
printf ("Inmovilización de cervicales hasta abordar al Px  \n");
printf ("Naturaleza de la enfermedad o mecanismo de lesion hasta abordar al Px  \n");
printf ("...  \n");
system("pause");
system("cls");

//*************___AVDI___*************
printf ("Evaluando AVDI \n");
AVDI(); 
system("pause");
system("cls");

//*************___SV_BP___*************
printf ("Ingrese la Presion Sistólica \n");
scanf ("%d", &SBP_Actual);
printf ("Ingrese la Presion Diastólica \n");
scanf ("%d", &DBP_Actual);
BlodPressure_Function (SBP_Actual, DBP_Actual );
system("pause");

return 0;

}







