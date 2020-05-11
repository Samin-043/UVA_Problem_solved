#include<bits/stdc++.h>

int main()
{

    unsigned long long int a;
    unsigned long long int b;

    long long int carry;
    long long int c;



    while((scanf("%llu %llu",&a,&b))!=EOF)
    {

        c=0;
        carry=0;


        if(a==0&&b==0)
            break;


        while(a!=0||b!=0)
        {

            if((a%10+b%10+carry)>=10)
            {

                carry=1;
                c++;

            }

            else
            {

                carry=0;

            }

            a/=10;
            b/=10;


        }


        if(c>0)
            printf("%lli carry operations\n",c);

        else
            printf("No carry operation\n");



    }


    return 0;

}
