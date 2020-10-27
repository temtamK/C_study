#include <stdio.h>

// int main()
// {
//     //FILE은 구조체
//     FILE *fp = NULL;
//     fp = fopen("test.txt", "w");
//     if (fp != NULL)
//     {
//         fprintf(fp, "hello world\n");
//         fclose(fp);
//     }
//     else
//     {
//         printf("실패!");
//     }
// }

int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        char str1[16] = {};
        char str2[16] = {};
        fscanf(fp, "%s%s", str1, str2);
        printf("%s %s", str1, str2);
        fclose(fp);
    }
}