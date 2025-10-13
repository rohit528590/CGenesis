#include <stdio.h>
/*
Direct Recursion-:
When a function calls itself directly, it is known as direct recursion.
*/
void directRec(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        directRec(n - 1); // Direct recursive call
    }
}
int main()
{
    directRec(5);
    return 0;
}
/*
🧠 What Happens:
    •	directRec(5) → directRec(4) → directRec(3) … until n == 0.

    •	Direct Recursion: A function calls itself directly.
➤ Simpler and commonly used in problems like factorial, sum of numbers, etc.
*/