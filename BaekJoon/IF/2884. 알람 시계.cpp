#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    if (h >= 0 && h <= 23)
    {
        if (m >= 0 && m <= 59)
        {
            if (m - 45 < 0)
            {
                m = 60 + (m - 45);
                if (h - 1 < 0)
                {
                    h = 23;
                }
                else
                {
                    h = h - 1;
                }
                printf("%d %d", h, m);
            }
            else
            {
                printf("%d %d", h, m - 45);
            }
        }
    }

    return 0;
}