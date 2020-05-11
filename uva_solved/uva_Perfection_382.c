#include<stdio.h>
int main()
{

    long long int num;
    int c;

    c=0;

    while((scanf("%lld",&num))!=EOF)
    {

        long long int i,sum;

        if(num==0)
        {
            break;
        }

        sum=0;
        c++;

        if(c==1)
        {
            printf("PERFECTION OUTPUT\n");
        }


        for(i=1; i<=num/2; i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }

        }

        if(num==sum)
        {
            printf("%5lld  PERFECT\n",num);

        }
        else if(sum<num)
        {
            printf("%5lld  DEFICIENT\n",num);

        }

        else
        {
            printf("%5lld  ABUNDANT\n",num);

        }


    }

    printf("END OF OUTPUT\n");

    return 0;
}
