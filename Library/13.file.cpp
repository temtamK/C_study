#include <stdio.h>

int main()
{
    //FILE�� ����ü
    FILE *fp = NULL;
    fp = fopen("test.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "hello world\n");
        fclose(fp);
    }
    else
    {
        printf("����!")
    }
}