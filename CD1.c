#include<ctype.h>
#include <stdio.h>
char stack[20];
int top=-1;

void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    if(top==-1)
     return -1;
    else
     return stack[top--];
}

int priority(char x)
{
    if(x=='(')
     return 0;
    else if(x=='+'|| x=='-')
     return 1;
    else if(x=='*'|| x=='/')
     return 2;
}
int main()
{
    char exp[20];
    char *c,x;
    printf("Enter the infix expression");
    scanf("%s",exp);
    c=exp;
    
    while(*c!='\0')
    {
        if(isalnum(*c))
         printf("%c",*c);
        else if(*c == '(')
         push(*c);
        else if (*c == ')')
        {
            while((x=pop())!='c')
             printf("%c",x);
        }
        else
        {
            while(priority(stack[top])>=priority(*c))
             printf("%c",pop());
            push(*c); 
        }
        c++; 
    }
   while(top!=-1)
   {
       printf("%c",pop());
   }
    return 0;
}