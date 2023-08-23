#include <stdio.h>
#include <conio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char data)
{
    if (top >= 100)
    {
        printf("\nStack Overflow");
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    char data;
    data = stack[top];
    top--;
    return data;
}

int main()
{

    int i = 0, j = 0, l = 0;
    char infix[100], postfix[100];
    printf("Enter Infix Expression :");
    gets(infix);

    l = strlen(infix);

    for (int i = 0; i < l; i++)
    {
        switch (infix[i])
        {
        case '(':
            push(infix[i]);
            break;

        case ')':
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
            break;

        case '^':
            while (stack[top] == '^')
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '*':
        case '/':
            while (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '+':
        case '-':
            while (stack[top] == '^' || stack[top] == '*' || stack[top] == '/' || stack[top] == '+' || stack[top] == '-')
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
            break;

        default:
            postfix[j++] = infix[i];
            break;
        }
    }

    while (top >= 0)
    {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
    printf("\n\n\t%s", postfix);

    return 0;
}