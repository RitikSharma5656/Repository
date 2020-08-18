#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,op=0,var=0,con=0;
 char s[100];
 clrscr();
 printf("enter the expression\n");
 scanf("%s",&s);

 for(i=0;i<=strlen(s);i++)
 {
  if((s[i]>=65 && s[i]<=90)||(s[i]<=122 && s[i]>=97))
  {
    if(s[i+1]==' ' || s[i+1]=='\0' || s[i+1]=='=' || s[i+1]=='+' || s[i+1]=='*' || s[i+1]=='-' || s[i+1]=='/' ||  s[i+1]=='^' || s[i+1]=='0' || s[i+1]=='1' || s[i+1]=='2'|| s[i+1]=='3' || s[i+1]=='4' || s[i+1]=='5'|| s[i+1]=='6' || s[i+1]=='7'|| s[i+1]=='8' || s[i+1]=='9' )
    {
     var+=1;
    }
    continue;
  }
  else if(s[i]=='=' || s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/' ||  s[i]=='^' )
  {
   op+=1;
  }
  else if(s[i]=='0' || s[i]=='1' || s[i]=='2'|| s[i]=='3' || s[i]=='4' || s[i]=='5'|| s[i]=='6' || s[i]=='7'|| s[i]=='8' || s[i]=='9')
  {
   if(s[i+1]=='\0' || s[i+1]==' ' || s[i+1]=='=' || s[i+1]=='+' || s[i+1]=='*' || s[i+1]=='-' || s[i+1]=='/' ||  s[i+1]=='^')
   {
   con+=1;
   }
   continue;
  }
 }
 printf("variables=%d\n",var);
 printf("operators=%d\n",op);
 printf("constants=%d\n",con);
 printf("tokens=%d\n",var+op+con);
 getch();
}
