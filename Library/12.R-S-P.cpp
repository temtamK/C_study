#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int com = -1;
    int player = -1;
    int compare = 0;

    printf("�������������� \n");

    srand((unsigned int)time_t(NULL));

    while (0 > player || 2 < player)
    {
        printf("����: 0, ����: 1, ��: 2\n");
        printf("�÷��̾� ���� :");
        scanf("%d", &player);
    }

    com = rand() % 3;

    compare = com - player;
    if (compare == 0)
    {
        printf("���\n");
    }
    else if (compare == 2 || compare == -1)
    {
        printf("�÷��̾� ��\n");
    }
    else
    {
        printf("��ǻ�� ��\n");
    }

    return 0;
}