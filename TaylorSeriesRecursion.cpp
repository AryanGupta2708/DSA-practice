#include <iostream>
using namespace std;

// Taylor series is represented by e^x

float recf(float x)
{
    if (x > 1)
    {
        return (recf(x - 1) * x);
    }
    return 1;
}

float recx(float x, float y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * recx(x, y - 1);
}

float mainrec(float x, float n)
{
    if (n > 1)
    {
        return (recx(x, n - 1) / recf(n - 1) + mainrec(x, n - 1));
    }
    else
        return 1;
}

int main()
{
    float u, n;
    printf("INPUT: ");
    scanf("%f%f", &u, &n);
    float temp = mainrec(u, n);

    printf("%0.2f", temp);
    return 0;
}