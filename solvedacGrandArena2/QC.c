#include <stdio.h>
void quickSort(int arr[], int L, int R)
{
    int left = L, right = R;
    int pivot = arr[(L + R) / 2];
    int temp;
    do
    {
        while (arr[left] < pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left <= right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    } while (left <= right);
    if (L < right)
        quickSort(arr, L, right);
    if (left < R)
        quickSort(arr, left, R);
}
int min(int a, int b)
{
    int ans = a;
    if (a > b)
        ans = b;
    else
        ans = a;
    return ans;
}
int main()
{
    int N, num[200001];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    // int max = num[0];
    // int min = num[0];
    // for (int i = 1; i < N; i++)
    // {
    //     if(max<num[i])
    //         max = num[i];
    //     if(min>num[i])
    //         min = num[i];
    // }
    quickSort(num, 0, N - 1);
    int max = num[N - 1];
    for (int i = 0; i < N; i++)
        while (2 * num[i] <= max)
            num[i] *= 2;
    quickSort(num, 0, N - 1);
    int ans = num[N - 1] - num[0];
    for (int i = 1; i < N; i++)
        ans = min(ans, 2 * num[i - 1] - num[i]);
    printf("%d", ans);
    return 0;
}