omp_set_num_threads(4);
#pragma omp parallel
{
   int ID;
   ID	=	omp_get_thread_num();
   printf("Hola	soy	el	Thread %d.	\n",	ID);
}
