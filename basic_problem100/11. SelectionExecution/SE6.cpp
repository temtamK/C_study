#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a >= 1 && a <= 12)
    {
        switch (a)
        {
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
            break;
        default:
            printf("winter");
            break;
        }
    }

    return 0;
}