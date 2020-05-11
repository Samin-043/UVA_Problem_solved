#include<stdio.h>
#include<string.h>

int main()
{

    char a[1005];
    long long int i,len,n;

    while((scanf("%s",a))!=EOF)
    {

        len=strlen(a);

        if(a[0]=='0'&&len==1)
        {
            break;
        }

        else
        {
            n=0;

            for(i=0; i<len; i++)
            {
                n=n*10+a[i]-'0';
                n=n%11;

            }

        }

        if(n==0)
        {
            printf("%s is a multiple of 11.\n",a);
        }

        else
        {
            printf("%s is not a multiple of 11.\n",a);
        }

    }

    return 0;

}
