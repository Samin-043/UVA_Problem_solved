#include<bits/stdc++.h>
long long int arr[100];
long long int fibo(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }
    else if(arr[num]==0)
    {
        return arr[num]=fibo(num-1)+fibo(num-2);
    }
    return arr[num];
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans=fibo(n-1);
    printf("%lld\n",ans);
    return 0;
}
