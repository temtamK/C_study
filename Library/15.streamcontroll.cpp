#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("test.txt", "r");
    if (fp != NULL)
    {
        int c = 3;
        c = getc(fp);
        printf("%c\n", c);
        printf("ftell : %ld\n", ftell(fp));
        c = getc(fp);
        printf("%c\n", c);
        printf("ftell : %ld\n", ftell(fp));

        // rewind(fp) == fseek(fp, 0, SEEK_SET);
        fseek(fp, -1L, SEEK_CUR);

        c = getc(fp);
        printf("%c", c);
        printf("ftell : %ld\n", ftell(fp));
        fclose(fp);
    }
}