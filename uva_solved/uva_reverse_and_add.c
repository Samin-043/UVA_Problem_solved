#include<stdio.h>
int main()
{
    long int num,count,rev;
    long int i,t;
    long int add;
    while()
    {
        for(i=0; i<t; i++)
        {
            count=0;
            rev=0;
            scanf("%li",&num);
            while(num!=0)
            {
                rev=rev*10;
                rev=rev+num%10;
                num=num/10;

            }

            if(num!=rev)

                for(i=0; i<1000; i++)
                {

                    add=num+rev;
                    count++;
                    num=add;
                    rev=0;

                    while(num!=0)
                    {
                        rev=rev*10;
                        rev=rev+num%10;
                        num=num/10;

                    }

                    if(num==rev)
                        break;


                }

        }

        printf("%li %li\n",count,num);
    }

    return 0;

}


