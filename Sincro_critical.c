/*
#include <omp.h>
int main()
{

 int iam =0, np = 1, i=0;
  #pragma omp parallel private(iam, np,i)
   {
     #pragma omp critical
      {
        printf("Soy el thread %d, al inicio de la seccion critica\n",iam);
        sleep(1);
        printf("\t\tSoy el thread %d, al final de la seccion critica\n",iam);
      }
    }//parallel
}
*/

// omp_critical.cpp
// compile with: /openmp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 //tamaño de array

int main()
{
    int i;
    int max;
    int a[SIZE]; //declara arreglo tipo int

    for (i = 0; i < SIZE; i++)
    {
        a[i] = rand(); //obtiene numeros aleatorios
        printf_s("%d\n", a[i]); //imprime cada elemento del arreglo
    }

    max = a[0];//supone q el elmento mayor esta en la [0] del array
    #pragma omp parallel for num_threads(4)
        for (i = 1; i < SIZE; i++) //con este ciclo se analiza cada elemento en buca del mayor iniciando desde la [1]
        {
            if (a[i] > max)
            {
                #pragma omp critical
                {

                    if (a[i] > max)
                        max = a[i];
                }
            }
        }

    printf_s("max = %d\n", max);
}

/**/
 /*Especifica que el código solo se ejecutará en un hilo a la vez.
 Asegura exclusión mutua en la ejecución del bloque.
•El nombre se puede usar para identificar secciones críticas distintas.*/
