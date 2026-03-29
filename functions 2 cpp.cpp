#include "functions.h"


int sumOfSquares(int n) 
{int sumOfSquares(int n) 
{
    if (n == 1)
        return 1;
    
    return (n * n) + sumOfSquares(n - 1);
}
}

int findFactorial(int n)
{long int findFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * findFactorial(n - 1);
}
}




