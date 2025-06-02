#include <stdio.h>

#include <string.h>

char stack[100];
int top = -1;
int flag;

void push(char data)
{
    if (top >= 100)
    {
        printf("\n\t Error ::Stack Overflow::");
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

char peep(char *arr)
{
    int l = strlen(arr);
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == '\n')
        {
            flag = 1;
        }

        if (flag == 1)
        {
            printf("%c", arr[i]);
        }
    }
}

int main()
{

    int i = 0, j = 0, l = 0;
    char infix[100], prefix[100];
    printf("Enter infix Expression : ");

    gets(infix);

    strrev(infix);
    printf("\n%s", infix);

    l = strlen(infix);
    printf("\n%d", l);

    for (i = 0; i < l; i++)
    {
        switch (infix[i])
        {
        case ')':
            push(infix[i]);
            break;

        case '(':
            while (stack[top] != ')')
            {
                prefix[j++] = pop();
            }
            pop();
            break;

        case '^':
            while (stack[top] == '^')
            {
                prefix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '*':
        case '/':
            while (stack[top] == '^')
            {
                prefix[j++] = pop();
            }
            push(infix[i]);
            break;

        case '+':
        case '-':
            while (stack[top] == '^' || stack[top] == '*' || stack[top] == '/')
            {
                prefix[j++] = pop();
            }
            push(infix[i]);
            break;

        case ' ':
            break;

        default:
            prefix[j++] = infix[i];
            break;
        }
    }

    while (top >= 0)
    {
        prefix[j++] = stack[top--];
    }

    prefix[j] = '\n';
    strrev(prefix);
    peep(prefix);

    return 0;
}