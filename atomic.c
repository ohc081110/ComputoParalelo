// omp_atomic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define MAX 5

int main() {
   int count = 0;
   #pragma omp parallel num_threads(MAX)  /*Permite al programador especificar el n�mero de subprocesos que deben
ejecutar el siguiente bloque.*/
   {
      #pragma omp atomic
      count++;
   }
   printf_s("Number of threads: %d\n", count);
}

//Solo	un	thread puede	escribir	en	dicha	secci�n	por	vez.
//Es usando cuando una ubicaci�n de memoria desea proteger contra m�s de una escritura.
