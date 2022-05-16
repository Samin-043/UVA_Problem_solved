#include<iostream>
using namespace std;

int main()
{
    unsigned long long int num,sum,d,e,f;
    while(cin>>num)
    {
        if(num==0)
            break;

        else
        {
            sum=0;
            d=num;
            while(d!=0)
            {
                e=d%10;
                sum+=e;
                d=d/10;

            }

            if(sum>9)
            {
                while(sum>9)
                {
                    f=sum;
                    sum=0;
                    while(f!=0)
                    {
                        e=f%10;
                        sum+=e;
                        f=f/10;

                    }

                }

            }

            cout<<sum<<endl;

        }

    }
    return 0;
}
