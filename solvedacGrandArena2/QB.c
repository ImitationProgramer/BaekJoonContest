#include <stdio.h>
#include <string.h>
int tensquare(int n)
{
    if (n < 1)
        return 1;
    else
        return 10 * tensquare(n - 1);
}
int main()
{
    int num;
    int flag = 0;
    char word[9];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", word);
        if (strcmp(word, "Fizz") != 0 && strcmp(word, "Buzz") != 0 && strcmp(word, "FizzBuzz") != 0)
        {
            num = 0;
            flag = i;
            int l = strlen(word);
            for (int j = 0; word[j] != '\0'; j++)
            {
                int onenum = 0;
                onenum = word[j] - '0';
                num += tensquare(l - 1) * onenum;
                l--;
            }
        }
    }
    if (flag == 2)
    {
        num += 1;
        if (num % 3 == 0 && num % 5 == 0)
            printf("FizzBuzz");
        else if (num % 3 == 0 && num % 5 != 0)
            printf("Fizz");
        else if (num % 3 != 0 && num % 5 == 0)
            printf("Buzz");
        else
            printf("%d", num);
    }
    else if (flag == 1)
    {
        num += 2;
        if (num % 3 == 0 && num % 5 == 0)
            printf("FizzBuzz");
        else if (num % 3 == 0 && num % 5 != 0)
            printf("Fizz");
        else if (num % 3 != 0 && num % 5 == 0)
            printf("Buzz");
        else
            printf("%d", num);
    }
    else
    {
        num += 3;
        if (num % 3 == 0 && num % 5 == 0)
            printf("FizzBuzz");
        else if (num % 3 == 0 && num % 5 != 0)
            printf("Fizz");
        else if (num % 3 != 0 && num % 5 == 0)
            printf("Buzz");
        else
            printf("%d", num);
    }
    return 0;
}