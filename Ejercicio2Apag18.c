#include <stdio.h>
#include <omp.h>  //librerias //pag 18
int main(int argc,	char*	argv[])
{
#pragma omp parallel
  {
   int ID;
   ID	=	omp_get_thread_num();
   printf("Hola	soy	el	Thread %d.	\n",	ID);
  }
  return 0;
}
