#include<stdio.h>
int main()
{
    int i,n,m=0,r,sum=1,count;
    /*while((scanf("%d",&n))!=EOF)
    {
        if(n<=0)
            break;

        if(n%2==0)
        {
            count=0;
            for(i=1; i<n; i++)
            {
                if(i<=2)
                {
                    sum+=i;
                    count++;

                }
                else if(i>2)
                {
                    if(i%4==0)
                    {
                        sum+=i;
                        count++;
                    }
                }

                if(sum>=n)
                    break;

            }

        }

        if((n>2)&&(n%2!=0))
        {
            count=(n-1)/2;
        }

        m++;

        printf("Case %d:%d\n",m,count);

    }*/

    while((scanf("%d",&n))!=EOF)
    {


        m++;
        printf("%d",count);

    }






    return 0;
}
