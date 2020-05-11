#include<bits/stdc++.h>

int main()
{

    long long int a;
    long long int b;
    long long int c;
    long long int i;
    long long int x;

    while((scanf("%lli %lli",&a,&b))!=EOF)
    {

        x=0;

        if(a==0&&b==0)
            break;


        for(i=a; i<=b; i++)
        {

            c=sqrt(i);

             /// if value of i is integer then it will be the sqrt of i , there will be no fraction ///////

            if((c*c)==i)
            {

                x++;

            }


        }

        printf("%lli\n",x);


    }

    return 0;
}
