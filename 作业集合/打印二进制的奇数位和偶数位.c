#include <stdio.h>
void print(int m)
{
    int i = 0;
    printf("����λ\n");
    for (i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    printf("\n\n");
    printf("ż��λ\n");
    for (i = 31; i >= 1; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    printf("\n\n");
}
int main()
{
    int m = 0;
    scanf("%d", &m);
    printf("\n");
    print(m);
    return 0;
}