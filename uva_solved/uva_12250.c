#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=0,j,len;
    while(scanf("%s",s))
    {
        for(j=0; s[j]!='\0'; j++)
        {
            if(j==0)
            {
                len=0;
            }
            len++;
        }


        if(s[0]=='#'&&len<=14)
            break;
        else if(s[0]>='A'&&s[len]<='Z')
        {
            if((s[1]=='E'&&s[2]=='L')&&len<=14)
                printf("Case %d: ENGLISH\n",i+1);
            else if((s[1]=='O'&&s[2]=='L')&&len<=14)
                printf("Case %d: SPANISH\n",i+1);
            else if((s[1]=='A'&&s[2]=='L')&&len<=14)
                printf("Case %d: GERMAN\n",i+1);
            else if((s[1]=='O'&&s[2]=='N')&&len<=14)
                printf("Case %d: FRENCH\n",i+1);
            else if((s[1]=='I'&&s[2]=='A')&&len<=14)
                printf("Case %d: ITALIAN\n",i+1);
            else if((s[1]=='D'&&s[2]=='R')&&len<=14)
                printf("Case %d: RUSSIAN\n",i+1);
            else
                printf("Case %d: UNKNOWN\n",i+1);
        }
        i++;


    }

    return 0;
}
