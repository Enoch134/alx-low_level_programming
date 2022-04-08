#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -Checks last digit
*
[A[[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[C/**
* main - Checks last digit
[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[C[C[C/**
* main - Checks last digit
* Return: zero
*/

[Aint main(void)
{
     int n;
     int 1;

     srand(time(0));
     n= rand() - RAND_MAX / 2
     l = n % 10;
     
     if(l == 0)
     {
     printf("%[A[A[> 5[C[C[BLast digit of %d is %d  and is greater than 5\n", n, l[C)
     }
     [A}else if (l == 0)

[A     {
     printf(
[A[C[C[C[C[C[C[C[C[C[C[C[C"Last digit of %d is %d and is 0\n", n,l);[A[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[;[B[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D
     }
      [Aelse if (l < 6 && l !=0)
     {
      [A[A[A[D p[B[B[B[D[Dprintf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
     }
     return (0);
}
