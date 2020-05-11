#include<stdio.h>

int findSwaps(int n,long int a[])
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        coont++;
    }
    return count;


}



int main()
{
    int test,i,n;
    long int a[100000];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&n);
        int m=findSwaps(n,a);
        if(m%2==0)
            printf("Case %d: %li\n",i+1,m);
        else
        {
            printf("Case %d: %li\n",i+1,(m/m+1));
        }

    }

    return 0;
}


