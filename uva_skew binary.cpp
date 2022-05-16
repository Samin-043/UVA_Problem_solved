#include<bits/stdc++.h>
#include<string.h>
int main()
{
    char s[1000];
    int len;
    while((scanf("%s",s))!=EOF)
    {
        if(s[0]=='0')
            break;
        len=strlen(s);
        int i,d,sum,m;
        i=sum=0;
        while(s[i]!='\0')
        {
            d=0;
            d=d*10+s[i]-'0';
            m=d;
            m=(pow(2,len)-1)*m;
            sum+=m;
            len--;
            i++;

        }

        printf("%d\n",sum);

    }

    return 0;
}
