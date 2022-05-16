#include<stdio.h>
using namespace std;

int main()
{
    int n,temp,flag;
    int a[2000],c;
    int i,j;

    while((scanf("%d",&n))!=EOF)
    {
        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        }

        for(i=0; i<n-1; i++)
        {
            flag=0;

            for(j=0; j<n-1-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    flag=1;

                }

            }

            if(flag==0)
            {
                break;

            }

        }

        int flag_1;

        for(i=0;i<n-1;i++)
        {
            if((s[i]-s[i+1])>=200)
            {
                flag_1=1;

            }

        }


    }

    return 0;
}


