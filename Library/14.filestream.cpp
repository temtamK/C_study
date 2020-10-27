#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "w");
    if (fp != NULL)
    {
        putc('a', fp);
        putc('b', fp);
        putc('c', fp);

        fclose(fp);
    }
}

int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        int c = 3;
        c = getc(fp);
        printf("%c", c);
        c = getc(fp);
        printf("%c", c);
        c = getc(fp);
        printf("%c", c);

        fclose(fp);
    }
}