#include<bits/stdc++.h>
using namespace std;

long long int a[2000];

void uglyNumber()
{
    long long int i2;
    long long int i3;
    long long int i5;

    i2=i3=i5=a[1]=1;

    long long int nextof_2;
    long long int nextof_3;
    long long int nextof_5;

    nextof_2=2*a[i2];
    nextof_3=3*a[i3];
    nextof_5=5*a[i5];

    long long int num;

    for(int i=2; i<=1500; i++)
    {
        num=min(nextof_2,nextof_3);
        num=min(num,nextof_5);

        a[i]=num;

        if(num==nextof_2)
        {

            i2++;
            nextof_2=2*a[i2];

        }

        if(num==nextof_3)
        {

            i3++;
            nextof_3=3*a[i3];

        }

        if(num==nextof_5)
        {
            i5++;

            nextof_5=5*a[i5];


        }


    }

}


int main()
{

    uglyNumber();

    printf("The 1500'th ugly number is %lld.\n",a[1500]);

    return 0;
}
