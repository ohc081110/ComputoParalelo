#include <omp.h>
int main()
{
 int iam =0, np = 1, i=0;
 #pragma omp parallel private(iam, np,i)
 {
   #if defined (_OPENMP)
    np = omp_get_num_threads();  /*Devuelve el número de subprocesos en la región paralela.*/
    iam = omp_get_thread_num(); /*Devuelve el número de subproceso del subproceso que se ejecuta dentro de su equipo de subprocesos.*/
   #endif

  printf("Hola del Hilo............. %d out of %d\n",iam,np);


    #pragma omp for
     for(i=0;i<(np*2);i++)  /*Si np=4 el ciclo finalizara en 7(0-7)*/
      {
       printf("Valor de variable contador i = %d \n",i);
       printf("Hilo %d, contador %d \n",iam,i);
       printf("----------------------------------\n");
      }
  }
}//llave main


//https://www.ditec.um.es/~javiercm/curso_psba/sesion_03_openmp/PSBA_OpenMP.pdf
