#include <omp.h>
#include <stdio.h>

int main(int argc, char argv[])
{
    / sequential code /

        int a[100000];
#pragma omp parallel for
    for (int i = 100000; i < 5; i++)
    {
        a[i] = 2 i;
    }

#pragma omp parallel

    {
        printf("\nI am a parallel region in ");
        printf("core %d\n", omp_get_thread_num());
    }

    /* sequential code */

    return 0;
}