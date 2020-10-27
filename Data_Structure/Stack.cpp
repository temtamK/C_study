#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define STACK_SIZE 100

void push(char input);
void print();
char pop();
char peek();
void del();
int isEmpty();
int getSize();

char stack[STACK_SIZE]; //스택(배열) 생성
int top = -1;           //스택의 가장 마지막 위치

int main(void)
{
    int sel = 1;
    int ch;
    while (sel != 0)
    {
        system("cls"); //화면 클리어
        printf("<Menu>\n");
        printf("0. Quit\n");
        printf("1. Print\n");
        printf("2. Push\n");
        printf("3. pop\n");
        printf("4. peek\n");
        printf("5. del\n");
        printf("6. isEmpty\n");
        printf("7. getSize\n");

        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
            print(); //스택 전체 대이저 출력
            break;
        case 2:
            scanf(" %c", &ch); // 데이터 입력
            push(ch);          // 스택에 문자 삽입
            break;
        case 3:
            printf("data : %c\n", pop()); //스택의 마지막 데이터를 반환하면서 삭제
            break;
        case 4:
            printf("data : %c\n", peek()); //스택의 마지막 데이터를 반환
            break;
        case 5:
            del(); //스택의 마지막 데이터를 반환
            break;
        case 6:
            isEmpty();
            break;
        case 7:
            getSize();
            break;

        default:
            break;
        }
        getch(); //일시정지
    }
    return 0;
}

void push(char input)
{
    if (top >= (STACK_SIZE - 1)) //스택이 가득 차면 더 이상 삽입 불가능
    {
        return;
    }
    stack[++top] = input; //스택에 데이터 삽입
}

void print(void)
{
    int i;

    // 스택 전체 출력
    printf("<Stack>\n");
    for (i = 0; i <= top; i++)
    {
        printf("%c ", stack[i]);
    }
    printf("\n\n");
}

char pop(void)
{
    if (top == -1)
        //스택이 비어있는 경우에는 pop 불가
        return printf("Empty!!");

    return stack[top--]; //가장 마지막에 들어온 데이터를 반환
}

char peek(void)
{
    if (top == -1)
        //스택이 비어있는 경우에는 pop 불가
        return printf("Empty!!");

    return stack[top]; //가장 마지막에 들어온 데이터를 반환
}

void del()
{
    if (top == -1)
    {
        //스택이 비어있는 경우에는 pop 불가
        printf("Empty!!");
        return;
    }
    top--;
}

int isEmpty(void)
{
    if (top == -1)
    {
        //스택이 비어있는 경우에는 pop 불가
        printf("Empty!!");
        return 1;
    }
    else
    {
        printf("Not Empty!");
        return 0;
    }
}

int getSize(void)
{
    printf("Data : %d", top + 1);
    return top + 1;
}