// 시간초과
#include <stdio.h>

int add(int a[], int i, int j)
{
    if (i == j)
        return a[i];
    else
        return a[j] + add(a, i, j - 1);
}
int multi(int a[], int i, int j)
{
    if (i == j)
        return a[i];
    else
        return a[j] * multi(a, i, j - 1);
}
int main()
{
    int cnt = 0;
    int N, num[300001];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (add(num, i, j) == multi(num, i, j))
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}