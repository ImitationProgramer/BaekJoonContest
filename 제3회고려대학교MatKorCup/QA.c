#include <stdio.h>

int main()
{
    char name;
    scanf("%c", &name);
    switch (name)
    {
    case 'M':
        printf("MatKor");
        break;
    case 'W':
        printf("WiCys");
        break;
    case 'C':
        printf("CyKor");
        break;
    case 'A':
        printf("AlKor");
        break;
    case '$':
        printf("$clear");
        break;
    }
    return 0;
}