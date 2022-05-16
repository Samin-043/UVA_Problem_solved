#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll num;
        cin>>num;
        num=num*567;
        num=num/9;
        num=num+7492;
        num=num*235;
        num=num/47;
        num=num-498;
        num=abs(num);
        cout<<(num%100)/10<<endl;
    }
    return 0;
}
