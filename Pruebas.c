#include <stdio.h>
#include <string.h>

void BlodPressure_Function (Systolic_BP, Diastolic_BP ){
	//Norma Oficial Mexicana NOM-030-SSA2-2009, Para la prevención, detección, 
	//diagnóstico, tratamiento y control de la hipertensión arterial sistémica.
	
		if( Systolic_BP < 120 && Diastolic_BP <80){
			printf("BP Optima \n");     					
		return ;}
		
		if( (Systolic_BP >=120 || Systolic_BP <130) && (Diastolic_BP >=80 || Diastolic_BP <85)){
			printf("BP Normal \n");
		return ;}
		
		if( (Systolic_BP >= 130 || Systolic_BP <140) && (Diastolic_BP >=85 || Diastolic_BP <90)){
		
			printf("BP Normal alta \n");
		return ;}
		
		if( (Systolic_BP >=140 || Systolic_BP <160) && (Diastolic_BP >=90 || Diastolic_BP <100)){
			printf("Hipertension grado 1 \n");
		return ;}
		
		if( (Systolic_BP >=160 || Systolic_BP <180) && (Diastolic_BP >=100 || Diastolic_BP <110)){
			printf("Hipertension grado 2 \n");
		return ;}
		
		if ((Systolic_BP >=180 ) && (Diastolic_BP >= 110)){
			printf("Hipertension grado 3 \n");
		return ;}
		
		if ((Systolic_BP >=140 ) && (Diastolic_BP <90)){
			printf("Hipertension sistolica aislada \n"); 
		return ;}
	}

int main (){
int SBP_Actual;
int DBP_Actual;

printf ("Ingrese la Presion Sistólica \n");
scanf ("%d", &SBP_Actual);
printf ("Ingrese la Presion Diastólica \n");
scanf ("%d", &DBP_Actual);

BlodPressure_Function (SBP_Actual, DBP_Actual );

return 0;
}
