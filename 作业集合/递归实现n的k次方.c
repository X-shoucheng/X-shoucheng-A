#include <stdio.h>
double Pow(int a, int b)
{
    if (b < 0)
    {
        return (1.0 / (Pow(a, -b)));
    }
    else if (b >= 1)
    {
        return a * Pow(a, b - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    double ret = Pow(n, k);
    printf("%lf\n", ret);
    return 0;
}