#include<bits/stdc++.h>
#include<string.h>

int main()
{
    char s[1150];
    long long int i,len,n;

    while((scanf("%s",s))!=EOF)
    {
        len=strlen(s);

        if(s[0]=='0')
        {
                break;
        }

        else
        {
            n=0;

            for(i=0; i<len; i++)
            {
                n=n*10+s[i]-'0';
                n=n%11;

            }

        }

        if(n!=0)
        {
            printf("%s is not a multiple of 11.\n",s);

        }

        else
        {
            printf("%s is a multiple of 11.\n",s);

        }



    }

    return 0;
}
