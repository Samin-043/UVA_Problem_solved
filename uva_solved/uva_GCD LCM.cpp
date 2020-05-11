#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int i;
    int l=max(a,b);
    int s=min(a,b);
    for(i=l;; i+=l)
    {
        if(i%s==0)
        {
            return i;
        }
    }
}
int main()
{
    int res,res1,a,b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        res=gcd(a,b);
        res1=lcm(a,b);
        printf("%d %d\n",res,res1);
    }
    return 0;
}
