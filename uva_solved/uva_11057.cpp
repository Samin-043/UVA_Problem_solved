#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            int book;
            cin>>book;
            v.push_back(book);
        }
        ll money;
        cin>>money;
        vector<ll>book_list;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    ll sum=v[i]+v[j];
                    if(sum==money)
                    {
                        book_list.push_back(v[i]);
                        book_list.push_back(v[j]);
                    }
                }
            }
        }

        sort(book_list.begin(),book_list.end());

        for(int i=0;i<book_list.size();i++)
        {
            ll sum=book_list[i]+book_list[i+1];
            if(sum==money)
            {
                cout<<"Peter should buy books whose prices are ";
                cout<<book_list[i]<<" and "<<book_list[i+1]<<"."<<endl;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
