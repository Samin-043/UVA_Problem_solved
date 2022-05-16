#include<bits/stdc++.h>

int main()
{

    unsigned long long int num1;
    unsigned long long int num2;
    long long int c;
    long long int carry;


    while(scanf("%llu %llu",&num1,&num2))
    {

        if(num1==0&&num2==0)
            break;

        c=0;
        carry=0;

        while(num1!=0||num2!=0)
        {

            if((num1%10+num2%10)+carry>=10)
            {

                carry=1;
                c++;

            }

            else
            {

                carry=0;

            }

            num2/=10;

            num1/=10;

        }

        if(c>1)
        {
            printf("%lli carry operations.\n",c);
        }

        else if(c==1)
        {

            printf("%lli carry operation.\n",c);

        }

        else
        {

            printf("No carry operation.\n");

        }



    }


    return 0;

}
