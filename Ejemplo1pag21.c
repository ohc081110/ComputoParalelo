/*Obtenemos	 la	versi�n	que	est�	instalada	de	OpenMP */
#include <omp.h>
#include <stdio.h>
int main(){
printf("Este	 es	nuestro	primer	 ejemplo	 en	openMP\n");
#pragma omp parallel
{	//inicia	regi�n paralelizable
printf("Hola	 mundo	 \n");
}
printf("La	 versi�n	instalada	de	OpenMP es:	%d",_OPENMP);
return 0;
}
