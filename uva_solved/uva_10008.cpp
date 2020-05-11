#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    string small_letter="abcdefghijklmnopqrstuvwxyz";
    string capital_letter="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int arr[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    ll sort_arr[100000];
    ll i,j,k;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        ll len=s.size();
        for(i=0; i<len; i++)
        {
            if((s[i]>='a'&&s[i]<='z'))
            {
                for(j=0; j<(small_letter.size()); j++)
                {
                    if(s[i]==small_letter[j])
                    {
                        arr[j]++;
                    }
                }
            }

            else if(s[i]>='A'&&s[i]<='Z')
            {
                for(j=0; j<(capital_letter.size()); j++)
                {
                    if(s[i]==capital_letter[j])
                    {
                        arr[j]++;
                    }
                }
            }
        }
    }
    k=0;
    for(i=0; i<small_letter.size(); i++)
    {
        if(arr[i]>0)
        {
            sort_arr[k]=arr[i];
            k++;
        }
    }
    sort(sort_arr,sort_arr+k);
    for(i=k-1; i>=0; i--)
    {
        for(j=0; j<(capital_letter.size()); j++)
        {
            if(sort_arr[i]==arr[j])
            {
                cout<<capital_letter[j]<<" "<<arr[j]<<endl;
                arr[j]=0;
                break;
            }
        }
    }
    return 0;
}
