#include<stdio.h>
using namespace std;

int main()
{
    int n,temp,flag;
    int a[1010],c;

    while((scanf("%d",&n))!=EOF)
    {

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

        printf("Minimum exchange operations : %d\n",c);

    }

    return 0;
}

