#include <stdio.h>
/*
 Indirect Recursion-:
 When a function calls another function, and that function eventually calls the first one again,
 it is indirect recursion.
 
*/

void funcB(int); // Forward declaration

void funcA(int n)
{
    if (n > 0)
    {
        printf("A: %d\n", n);
        funcB(n - 1); // Calls funcB
    }
}

void funcB(int n)
{
    if (n > 0)
    {
        printf("B: %d\n", n);
        funcA(n - 1); // Calls funcA
    }
}

int main()
{
    funcA(5);
    return 0;
}
/*
🧠 What Happens:
    •	funcA(5) → funcB(4) → funcA(3) → funcB(2) … alternates until n == 0.

    •	Indirect Recursion: A function calls another function, which in turn calls the first one again.
➤ More complex and used in modular or mutual function designs.
*/