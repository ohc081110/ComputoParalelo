#include <stdio.h>
#include <omp.h>

#define MAX 5 //tamaño de array
int main()
{
   int count =	0;
   double res[MAX];
   int i;
   double prom;
   int A[MAX]; //declara arreglo tipo int

    #pragma omp parallel for reduction (+:prom)
      for (i=0;i<	MAX;	i++)
        {
         prom +=	A[i];
        }
prom =	prom/MAX;
}

//La	variable	tiene	una	copia	local	en	cada	thread,	al	finalizar	dicho	valor	es	reducido	en	una
//variable	global	compartida.
