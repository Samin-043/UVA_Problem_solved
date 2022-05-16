#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num,k=1;
    while(cin>>num)
    {
        if(num==0)
        {
            break;
        }
        float u,v,t;
        cin>>u>>v>>t;
        switch(num)
        {
        case 1:
            cout<<"Case "<<k<<": ";
            printf("%.3f %.3f\n",((v*v)-(u*u))/(2*((v-u)/t)),(v-u)/t);
            break;
        case 2:

            cout<<"Case "<<k<<": ";
            printf("%.3f %.3f\n",((v*v)-(u*u))/(2*t),(v-u)/t);
            break;
        case 3:
            cout<<"Case "<<k<<": ";
            printf("%.3f %.3f\n",sqrt(u*u+2*v*t),(sqrt(u*u+2*v*t)-u)/v);
            break;
        case 4:
            cout<<"Case "<<k<<": ";
            printf("%.3f %.3f\n",sqrt(u*u-2*v*t),(u-sqrt(u*u-2*v*t))/v);
            break;
        }
        k++;
    }
    return 0;
}
