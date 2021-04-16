#include <stdio.h>
#include <omp.h>

#define MAX 5
int main()
{
   int count =	0;
   #pragma omp parallel num_threads(MAX)
     {
        #pragma omp atomic
        count++;
           #pragma omp barrier
           printf("Numero	de	Threads:	%d\n",	count);
     }
}

//Se	espera	a	que	todos	los	thread hayan	llegado	a	ese	lugar.
/*Sincroniza todos los hilos de un equipo; todos los hilos se detienen en la barrera, hasta que todos los hilos ejecutan la barrera.*/
