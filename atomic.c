// omp_atomic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define MAX 5

int main() {
   int count = 0;
   #pragma omp parallel num_threads(MAX)  /*Permite al programador especificar el número de subprocesos que deben
ejecutar el siguiente bloque.*/
   {
      #pragma omp atomic
      count++;
   }
   printf_s("Number of threads: %d\n", count);
}

//Solo	un	thread puede	escribir	en	dicha	sección	por	vez.
//Es usando cuando una ubicación de memoria desea proteger contra más de una escritura.
