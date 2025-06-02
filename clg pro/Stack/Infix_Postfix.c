#include <string.h>
#include <stdio.h>


char Exp[10];
int top = -1;

void push(char data)
{
    if (top >= 100)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    Exp[top] = data;
}

char pop()
{
    char data;
    data = Exp[top];
    top--;
    return data;
}

int main()
{

    char infix[10], postfix[10];
    int i, j = 0, l;

    //clrscr();

    printf("Input infix expression: ");
    gets(infix);

    l = strlen(infix);

    for (i = 0; i < l; i++)
    {

        switch (infix[i])
        {

        case '(':
            push(infix[i]);
            break;

        case ')':
            while (Exp[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
            break;

        case '^':
            while (Exp[top] == '^')
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '*':
        case '/':
            while (Exp[top] == '^' || Exp[top] == '*' || Exp[top] == '/')
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '+':
        case '-':
            while (Exp[top] == '^' || Exp[top] == '*' || Exp[top] == '/' || Exp[top] == '+' || Exp[top] == '-')
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
        postfix[j++] = pop();
    }

    // postfix[j] = '/0';
    postfix[j] = '\0';
    printf("the postfix: = %s", postfix);
    getchar();
    return 0;
}
