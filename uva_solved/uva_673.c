#include<stdio.h>
#include<string.h>
int main()
{
    char s[150];
    int i,j,n=0,test;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",s);
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]=='[')
            {
                n++;
            }
            else if(s[j]==']')
            {
                n++;
            }
            else if(s[j]=='(')
            {
                n++;
            }
            else if(s[j]==')')
            {
                n++;
            }

        }
        if(n%2==0)
            printf("Yes\n");
        else
            printf("No\n");
    }







    return 0;
}
