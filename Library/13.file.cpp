#include <stdio.h>

int main()
{
    //FILE은 구조체
    FILE *fp = NULL;
    fp = fopen("test.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "hello world\n");
        fclose(fp);
    }
    else
    {
        printf("실패!")
    }
}