#include<bits/stdc++.h>

long long int a[100];

long long int fibonacii_print(int n)
{
    if(n==0||n==1)
        return 1;

    else if(a[n]==0)
        a[n]=fibonacii_print(n-1)+fibonacii_print(n-2);

    return a[n];

}

int main()
{
    int n;

    while((scanf("%d",&n))!=EOF)
    {
        if(n==0)
            break;

        long long int result=fibonacii_print(n);

        printf("%lld\n",result);

    }

    return 0;
}
