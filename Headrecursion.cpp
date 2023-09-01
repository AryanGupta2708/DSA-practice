#include <iostream>
using namespace std;

void headrec(int x)
{
    if (x > 0)
    {
        headrec(x - 1);
        printf("%d ", x);
    }
}

int main()
{
    headrec(5);
    return 0;
}