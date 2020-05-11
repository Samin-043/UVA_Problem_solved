#include<stdio.h>
int main()
{
    long long int num;

    scanf("%lld",&num);

    long long int sum,value,a,b,m;
    sum=1;
    a=b=0;
    value=num;
    m=1;

    if(value%2==0)
    {
        //m=1;

        while(value%2==0)
        {
            a=value/2;
            if(a>2)
            {
                b=2*m;
                value=a;

            }

            sum=sum+a+b;
            m=m*2;

        }

        /*if(sum==num)
        {
            printf("Perfect\n");

        }

        else if(sum>num)
        {
            printf("Abandant\n");

        }

        else
        {
            printf("DEFICIENT\n");

        }*/

    }

    else if(value%3==0)
    {
        //value=num;
        //m=1;

        while(value%3==0)
        {
            a=value/3;

            if(a>3)
            {
                b=3*m;
                value=a;
            }

            sum=sum+a+b;
            m=m*3;

        }


    }

    if(sum==num)
    {
        printf("Perfect\n");

    }

    else if(sum>num)
    {
        printf("Abandant\n");

    }

    else
    {
        printf("DEFICIENT\n");

    }

    return 0;

}
