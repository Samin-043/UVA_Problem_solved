#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        t++;
        int given=0,remain=0;
        for(int i=0;i<n;i++)
        {
            int reason;
            cin>>reason;
            if(reason==0)
            {
                given++;
            }
            else if(reason>0&&reason<100)
            {
                remain++;
            }
        }
        cout<<"Case "<<t<<": "<<remain-given<<endl;
    }
    return 0;
}
