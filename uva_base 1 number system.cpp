#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char  s[1000];
    int c,flag,sum,n,x,arr[1000];
    while(gets(s))
    {
        if(s[0]=='~')
            break;
        int i,m;
        c=0;
        m=x=0;
        i=0;
        while(s[i]!='#')
        {
            if(s[i]==' ')
            {
                if(c==1)
                    flag=1;
                else if(c==2)
                    flag=0;
                else if(c>2)
                {
                    n=c-2;
                    x+=n;
                    for(int k=m; k<x; k++)
                    {
                        arr[k]=flag;

                    }
                    m+=n;

                }
                c=0;

            }

            else
            {
                c++;
            }

            i++;

        }
        int z,w,y;
        w=y=sum=0;
        for(z=m-1;z>=0;z--)
        {
            y=arr[z]*(pow(2,w));
            sum+=y;
            w++;
        }
        printf("%d\n",sum);

    }

    return 0;
}
