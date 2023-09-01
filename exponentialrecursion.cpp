#include <iostream>
using namespace std;

int rec(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * rec(x, y - 1);
}

int main()
{
    int p = rec(2, 9);
    printf("%d", p);
    return 0;
}