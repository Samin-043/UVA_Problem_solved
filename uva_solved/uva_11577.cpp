#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    while(cin>>t)
    {
        cin.ignore();
        while(t--)
        {
            string s;
            string small_letter="abcdefghijklmnopqrstuvwxyz";
          string capital_letter="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            int arr[26]= {0};
            getline(cin,s);
            int len=s.size();
            int h=0;
            for(int i=0; i<len; i++)
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                {
                    for(int j=0; j<small_letter.size(); j++)
                    {
                        if((s[i]==small_letter[j])||(s[i]==capital_letter[j]))
                        {
                            arr[j]++;
                            if(arr[j]>h)
                            {
                                h=arr[j];
                            }
                            break;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }

            int l=small_letter.size();
            for(int i=0; i<l; i++)
            {
                if(arr[i]==h)
                {
                    cout<<small_letter[i];
                }
            }
            cout<<endl;

        }
    }
    return 0;
}
