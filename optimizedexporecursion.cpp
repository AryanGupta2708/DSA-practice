#include <iostream>
using namespace std;
// optimized version of exponential function using recursion
int rec(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        return rec(x * x, y / 2);
    }
    else
    {
        return x * rec(x * x, (y - 1) / 2);
    }
}

int main()
{
    int p = rec(2, 7);
    printf("%d", p);
    return 0;
}