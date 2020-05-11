#include<bits/stdc++.h>
#include<string.h>

int main()
{
    char s[1000];
    int len,n;

    while((scanf("%s",s))!=EOF)
    {
        len=strlen(s);

        if(s[0]=='0')
        {
            if(len<=1)
            {
                break;
            }

        }

        else
        {
            n=0;

            for(int i=0; i<len; i++)
            {
                n=n*10+s[i]-'0';
                n=n%17;

            }

        }

        if(n==0)
        {
            printf("1\n");

        }

        else
        {
            printf("0\n");

        }



    }

    return 0;
}
