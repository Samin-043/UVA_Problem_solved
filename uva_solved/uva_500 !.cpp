#include<bits/stdc++.h>

char s[100000];
unsigned long long arr[100000];

int factorial_of(int n)
{
    if(n==0)
    {
        return 1;
    }

    else if(arr[n]==0)
    {
        arr[n]=n*factorial_of(n-1);
    }

    return arr[n];

}

int main()
{
    int num;
    scanf("%d",&num);
    long long int ans=factorial_of(num);

    for(int i=0;i<=num;i++)
    {
        if(i==0)
        {
            printf("Factorial of %d: 1\n",i);
        }

        else
        {
            printf("Factorial of %d: %d\n",i,arr[i]);
        }

    }


    return 0;
}
