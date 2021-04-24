#include <iostream>
#include <stdlib.h>
#include <time.h>

int i , j, k;  //Indices para los ciclos For
int m, n;     //Indices para fila y columna de la Matriz A (m = filas, n = columna)
int x, y;    //Indices para fila y columna de la Matriz B
int z, t;   //Indices para fila y columna de la Matriz C

int main(){
printf("\n\n");
    											// Ingresando dado de la Matriz A
	printf( " \n Ingrese el tamaño de la Matriz A (Filas X Columnas):  ");
   	scanf("%d",&m);
   	printf("\n");
     n=m;  //mismas filas mismas columnas
	int A[m][n];  //Se declara la matriz A y su tamaño

	srand(clock()); // semilla para generar Numero alatorios (ver Pag. 138 de Programacion c y java deitel & deitel 4ta edicion)

    for (i = 0; i < m ; i++){  //m = filas, n = columna
		for (j = 0; j < n; j++){

			A[i][j]= rand() %10;    // Funcion que asigna numeros aleatorios a cada elemento de la matriz
			printf(" A[%d][%d] = %d  ", i+1, j+1, A[i][j]);
    	}
  	printf("\n");

	}
    printf("\n -------------------------------------------------");
												// Llenado de la Matriz B
   	printf( " \n Ingrese el tamaño de la Matriz B (Filas X Columnas): ");
   	scanf("%d",&x);

   	printf("\n");
    y=x;   //x = filas, y = columna
	int B[x][y]; //Se declara la matriz B y su tamaño

    for (i = 0; i < x ; i++) //x = filas, y = columna
        {
		for (j = 0; j < y; j++){

			B[i][j]= rand() %20;
			printf(" B[%d][%d] = %d  ", i+1, j+1, B[i][j]);
    	}
  	printf("\n");
	}
     printf("\n -------------------------------------------------");

												// Multiplicar la Matrices A y B y asignar en la matriz C


	printf("\n Multiplicacion\n");
	int C[z = m][t = y];     // Asignamos el orden de la matriz C.

	#pragma omp parallel
	{


		    #pragma omp for
            for (i = 0; i < z ; i++)
             {
			   for (j = 0; j < t; j++)
			     {
                   C[i][j]=0;
        		    for(k=0;k<n;k++)
            		C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
		   	     }
    	     }

                     /*   for (i = 0; i < z ; i++)  // Imprimimos las Matriz C resultante
                        {
			              for (j = 0; j < t; j++)

                          printf(" printf("C[%d][%d] = %d ", C[i][j]););
                          printf("\n");

                        }*/


	}


              for(i = 0; i < z; i++)
                {
		          for(j = 0; j < t; j++)
		           {
                    // printf("C[%d][%d] = %d ", C[i][j]);
                    //printf(printf("C[%d][%d] = %d ", C[i][j]));
                   // printf("%d ", C[i][j]);
                    printf(" C[%d][%d] = %d  ", i+1, j+1, C[i][j]);
		           }
                    printf("\n");
	               }



printf("\n\n");
system("pause");
return 0;
}; //llave del main
