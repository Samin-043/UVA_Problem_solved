#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>v,int l,int r,int search_value)
{
    int pos=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==search_value)
        {
            if(mid>0&&v[mid-1]==v[mid])
            {
                l=r=mid-1;
            }
            else
            {
                pos=mid;
                break;
            }
        }
        else if(v[mid]<search_value)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return pos;
}

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
            int item=vec_q[i];
            int pos=BinarySearch(vec_n,0,n-1,item);
            if(pos==-1)
            {
                cout<<vec_q[i]<<" not found";
            }
            else
            {
                cout<<vec_q[i]<<" found at "<<pos+1 ;
            }
            cout<<endl;
        }
    }
    return 0;
}

