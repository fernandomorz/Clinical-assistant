#include <stdio.h>
#include <string.h>

int main (){
	
char ansyn;

do{
	printf ("¿Cuento con ASC? Y/N  \n");
	ansyn=getch();
	} while (toupper (ansyn)=='N');
do{
printf ("Escena segura? Y/N  \n");
	ansyn=getch();
	} while (toupper (ansyn)=='N');
	
return 0;
}
