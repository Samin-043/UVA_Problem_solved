#include<bits/stdc++.h>
using namespace std;

long long int a[5900];

void findNumber()
{
    int i;

    long long int i2,i3,i5,i7;

    i2=i3=i5=i7=a[1]=1;

    long long int next_of_2;
    next_of_2=2*a[i2];
    long long int next_of_3;
    next_of_3=3*a[i3];
    long long int next_of_5;
    next_of_5=5*a[i5];
    long long int next_of_7;
    next_of_7=7*a[i7];

    long long int number;

    for(i=2; i<=5842; i++)
    {

        number=min(next_of_2,next_of_3);

        number=min(number,next_of_5);

        number=min(number,next_of_7);

        a[i]=number;

        if(number==next_of_2)
        {
            i2++;
            next_of_2=2*a[i2];

        }

        if(number==next_of_3)
        {

            i3++;
            next_of_3=3*a[i3];

        }

        if(next_of_5==number)
        {

            i5++;
            next_of_5=5*a[i5];

        }

        if(next_of_7==number)
        {
            i7++;
            next_of_7=7*a[i7];

        }


    }


}


int main()
{

    long long int n;

    findNumber();

    while((scanf("%lld",&n))!=EOF)
    {
        if(n==0)
            break;

        printf("The %lld",n);

        long long int m=n%10;

        while(1)
        {

            if(n%100==11||n%100==12||n%100==13)
            {
                printf("th ");
                break;

            }

            if(m==1)
            {
                printf("st ");
                break;

            }

            if(m==2)
            {
                printf("nd ");
                break;


            }

            if(m==3)
            {
                printf("rd ");
                break;

            }

            else
            {
                printf("th ");
                break;

            }

        }

        printf("humble number is %lld.\n",a[n]);


    }

    return 0;

}
