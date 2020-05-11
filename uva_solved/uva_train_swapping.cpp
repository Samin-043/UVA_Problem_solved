#include<stdio.h>

using namespace std;

int main()
{
    int t,n,temp,flag;
    int a[105],c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }

        c=0;

        for(int i=0;i<n-1;i++)
        {
            flag=0;

            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;

                    c++;
                    flag=1;
                }

            }

            if(flag==0)
            {
                break;

            }

        }

        printf("Optimal train swapping takes %d swaps.\n",c);


    }

    return 0;
}
