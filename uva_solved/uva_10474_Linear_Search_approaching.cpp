#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,t=0;
    while(cin>>n>>q)
    {
        t++;
        if(n==0&&q==0)
        {
            break;
        }
        vector<int>vec_n;
        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;
            vec_n.push_back(value);
        }
        sort(vec_n.begin(),vec_n.end());
        vector<int>vec_q;
        for(int i=0; i<q; i++)
        {
            int search_value;
            cin>>search_value;
            vec_q.push_back(search_value);
        }
        cout<<"CASE# "<<t<<":"<<endl;
        for(int i=0; i<q; i++)
        {
            int pos=-1;
            for(int j=0; j<n; j++)
            {
                if(vec_q[i]==vec_n[j])
                {
                    pos=j+1;
                    break;
                }
            }
            if(pos==-1)
            {
                cout<<vec_q[i]<<" not found";
            }
            else
            {
                cout<<vec_q[i]<<" found at "<<pos;
            }
            cout<<endl;
        }
    }
    return 0;
}
