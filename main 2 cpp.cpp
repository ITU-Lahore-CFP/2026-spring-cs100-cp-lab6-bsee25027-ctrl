#include "functions.h"


int main() {
   
}
{int sumOfSquares(int n) 
{
    if (n == 1)
        return 1;
    
    return (n * n) + sumOfSquares(n - 1);
}}
{long int findFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * findFactorial(n - 1);
}}
{int sumOfSquares(int n) 
{
    if (n <= 0)
        return 0;

    return (n * n) + sumOfSquares(n - 1);
}

long int findFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * findFactorial(n - 1);
}}
{#include "catch.hpp"
#include "functions.h"

TEST_CASE("TASK A - Find sum using Recursive functions") {
    REQUIRE(sumOfSquares(5) == 55);
}

TEST_CASE("Task B - Calculate Factorial of a Number") {
    REQUIRE(findFactorial(5) == 120);
}}