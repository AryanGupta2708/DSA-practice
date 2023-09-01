#include <iostream>
using namespace std;

int rec(int x)
{
    if (x > 0)
    {
        return (rec(x - 1) + x);
    }
    return 0;
}

int main()
{
    int p = rec(5);
    printf("%d", p);
    return 0;
}