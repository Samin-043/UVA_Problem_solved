#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    cin.ignore();
    char c1='M';
    char c2='A';
    char c3='R';
    char c4='G';
    char c5='I';
    char c6='T';
    while(test--)
    {
        string s;
        cin>>s;
        int arr[4]={0},a_count=0,r_count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c1)
            {
                arr[0]++;
            }
            else if(s[i]==c4)
            {
                arr[1]++;
            }
            else if(s[i]==c5)
            {
                arr[2]++;
            }
            else if(s[i]==c6)
            {
                arr[3]++;
            }
            else if(s[i]==c2)
            {
                a_count++;
            }
            else if(s[i]==c3)
            {
                r_count++;
            }
        }
        sort(arr,arr+4);
        int a_call=0,r_call=0;
        int one_count=0,two_count=0,three_count=0;
        vector<int>v;
        if(a_count>2)
        {
            a_call=a_count/3;
        }
        if(r_count>1)
        {
            r_call=r_count/2;
        }
        if(arr[0]>0)
        {
            one_count=arr[0];
            two_count=r_call;
            three_count=a_call;
        }
        v.push_back(one_count);
        v.push_back(two_count);
        v.push_back(three_count);
        sort(v.begin(),v.end());
        if(v[0]>0)
        {
            cout<<v[0];
        }
        else
        {
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}
