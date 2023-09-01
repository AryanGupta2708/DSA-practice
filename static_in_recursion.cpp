// Here, we show that if we use static in recursion
// the value of x keeps increasing and gives linear output over time
// same shit with global variable

#include <stdio.h>
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r);
    r = fun(5);
    printf("%d\n", r);
    return 0;
}