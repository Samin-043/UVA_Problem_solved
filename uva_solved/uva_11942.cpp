#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=0;
    while(n--)
    {
        vector<int>v;
        for(int i=0;i<10;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int flag=0;
        if(v[0]>v[1])
        {
            for(int i=1;i<10;i++)
            {
                if(i==9)
                {
                    break;
                }
                if(v[i]<v[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }
        else if(v[0]<v[1])
        {
            for(int i=1;i<10;i++)
            {
                if(i==9)
                {
                    break;
                }
                if(v[i]>v[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }

        if(d==0)
        {
            cout<<"Lumberjacks:"<<endl;
            d=1;
        }
        if(flag==1)
        {
            cout<<"Unordered";
        }
        else
        {
            cout<<"Ordered";
        }
        cout<<endl;
    }
    return 0;
}
