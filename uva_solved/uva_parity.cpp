#include<bits/stdc++.h>
#include<string.h>
int main()
{
    char s[1000];
    while((scanf("%s",s))!=EOF)
    {
        if(s[0]=='0')
            break;
        int n,i;
        n=i=0;
        while(s[i]!=0)
        {
            n=n*10+s[i]-'0';
            i++;
        }

        int m,reminder,c,arr[1000],j;
        reminder=0;
        j=0;
        m=n;
        while(m!=0)
        {
            reminder=m%2;
            arr[j]=reminder;
            j++;
            m/=2;

        }

        int k;
        c=0;
        printf("The parity of ");
        for(k=j-1;k>=0;k--)
        {
            if(arr[k]==1)
            {
                c++;
            }
            printf("%d",arr[k]);

        }
        printf(" is %d (mod 2).\n",c);

    }

    return 0;
}
