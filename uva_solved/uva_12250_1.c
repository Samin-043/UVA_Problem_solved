#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=0,j,len;
    while((scanf("%s",s))!=EOF)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(j==0)
            {
                len=0;
            }
            len++;
        }

       if(len<=20)
        {
            if(s[0]=='#')
                break;
            else if((strcmp(s,"HELLO"))==0)
                printf("Case %d: ENGLISH\n",i+1);
            else if((strcmp(s,"HOLA"))==0)
                printf("Case %d: SPANISH\n",i+1);
            else if((strcmp(s,"HALLO"))==0)
                printf("Case %d: GERMAN\n",i+1);
            else if((strcmp(s,"BONJOUR"))==0)
                printf("Case %d: FRENCH\n",i+1);
            else if((strcmp(s,"CIAO"))==0)
                printf("Case %d: ITALIAN\n",i+1);
            else if((strcmp(s,"ZDRAVSTVUJTE"))==0)
                printf("Case %d: RUSSIAN\n",i+1);
            else
                printf("Case %d: UNKNOWN\n",i+1);
        }
        i++;

    }

}
