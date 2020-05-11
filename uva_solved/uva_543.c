#include<bits/stdc++.h>

int find_prime(long int n)
{
    long int i;
    int check=1;
    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            check=0;
            break;
        }

    }
    return check;

}

int main()
{
    long int i,n;
    int flag=0;
    while((scanf("%li",&n))!=EOF)
    {
        if(n==0)
            break;
        for(i=2; i<n/2; i++)
        {

            if(find_prime(i)==1)
            {
                if(find_prime(n-i)==1)
                {
                    printf("%li = %li + %li\n",n,i,n-i);
                    flag=1;
                    break;

                }
            }
        }

    }
    return 0;
}
