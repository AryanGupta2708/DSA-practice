#include <iostream>
using namespace std;

void headrec(int x)
{
    if (x > 0)
    {
        printf("%d ", x);
        headrec(x - 1);
    }
}

int main()
{
    headrec(5);
    return 0;
}