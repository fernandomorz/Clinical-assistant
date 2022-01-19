#include <stdio.h>
#include <time.h>
 
int main(void)
{
  clock_t t,ts;
  int segundos=0;
  unsigned int sleep(unsigned int segundos); //Aun no entiendo como funciona
  ts=clock()+CLOCKS_PER_SEC;
  
do  { /* verificar si ya pasó un segundo */
    if(	(t=clock())		>=ts	) {printf("%d \n",++segundos); 
										ts=t+CLOCKS_PER_SEC;
    } }while (segundos<=15);
  return 0;
}
