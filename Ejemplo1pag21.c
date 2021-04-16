/*Obtenemos	 la	versión	que	está	instalada	de	OpenMP */
#include <omp.h>
#include <stdio.h>
int main(){
printf("Este	 es	nuestro	primer	 ejemplo	 en	openMP\n");
#pragma omp parallel
{	//inicia	regiÚn paralelizable
printf("Hola	 mundo	 \n");
}
printf("La	 versión	instalada	de	OpenMP es:	%d",_OPENMP);
return 0;
}
