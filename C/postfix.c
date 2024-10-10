#include<stdio.h>
int stack[20];
int top = -1;

void push(int y)
{
    stack[++top] = y;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[20];
    char *ex;
    int a1,a2,a3,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    ex = exp;
    while(*ex != '\0')
    {
        if(isdigit(*ex))
        {
            num = *ex - 48;
            push(num);
        }
        else
        {
            a1 = pop();
            a2 = pop();
            switch(*ex)
            {
            case '+':
            {
                a3 = a1 + a2;
                break;
            }
            case '-':
            {
                a3 = a2 - a1;
                break;
            }
            case '*':
            {
                a3 = a1 * a2;
                break;
            }
            case '/':
            {
                a3 = a2 / a1;
                break;
            }
            }
            push(a3);
        }
        ex++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;
}