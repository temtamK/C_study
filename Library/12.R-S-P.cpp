#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int com = -1;
    int player = -1;
    int compare = 0;

    printf("가위바위보게임 \n");

    srand((unsigned int)time_t(NULL));

    while (0 > player || 2 < player)
    {
        printf("가위: 0, 바위: 1, 보: 2\n");
        printf("플레이어 선택 :");
        scanf("%d", &player);
    }

    com = rand() % 3;

    compare = com - player;
    if (compare == 0)
    {
        printf("비김\n");
    }
    else if (compare == 2 || compare == -1)
    {
        printf("플레이어 승\n");
    }
    else
    {
        printf("컴퓨터 승\n");
    }

    return 0;
}