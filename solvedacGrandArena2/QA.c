#include <stdio.h>

int square(int n)
{
    return n * n;
}
int threesquare(int n)
{
    return n * n * n;
}
int main()
{
    int N, sum = 0, thirdsum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum += i;
        thirdsum += threesquare(i);
    }
    printf("%d\n%d\n%d", sum, square(sum), thirdsum);
    return 0;
}