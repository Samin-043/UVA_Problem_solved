#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t=0;
    while(cin>>s)
    {
        t++;
        if(s<0)
        {
            break;
        }
        int month_problem[105],need_problem[105];
        for(int i=0;i<12;i++)
        {
            cin>>month_problem[i];
        }
        for(int i=0;i<12;i++)
        {
            cin>>need_problem[i];
        }
        cout<<"Case "<<t<<":"<<endl;
        int sum=s;
        for(int i=0;i<12;i++)
        {
            if(sum<need_problem[i])
            {
                cout<<"No problem. :(";
            }
            else
            {
                sum-=need_problem[i];
                cout<<"No problem! :D";
            }
            sum+=month_problem[i];
            cout<<endl;
        }
    }
    return 0;
}
