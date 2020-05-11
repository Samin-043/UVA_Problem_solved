#include<stdio.h>

int main()
{

    long int s;
    long int d;
    long int sum;
    long int m,i;


    while((scanf("%li %li",&s,&d))!=EOF)
    {

        sum=0;

        for(i=s;;i++)
        {

            sum+=i;

            if(sum>d||sum==d)
            {

                m=i;
                break;

            }



        }


        printf("%li\n",m);

    }


    return 0;

}
