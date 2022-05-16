#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string small_letter="abcdefghijklmnopqrstuvwxyz";
        string capital_letter="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int arr[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int ARR[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        ll len=s.size();
        ll h=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                for(int j=0; j<(small_letter.size()); j++)
                {
                    if((s[i]==small_letter[j])||(s[i]==capital_letter[j]))
                    {
                        arr[j]++;
                        if(arr[j]>=h)
                        {
                            h=arr[j];
                        }
                    }
                }
            }

            else if(s[i]>='A'&&s[i]<='Z')
            {
                for(int j=0; j<(capital_letter.size()); j++)
                {
                    if((s[i]==capital_letter[j]))
                    {
                        ARR[j]++;
                        if(ARR[j]>=h)
                        {
                            h=ARR[j];
                        }
                    }
                }
            }
        }
        for(int j=0; j<(capital_letter.size()); j++)
        {
            if(h==ARR[j])
            {
                cout<<capital_letter[j];
            }
        }

        for(int j=0; j<(small_letter.size()); j++)
        {
            if(h==arr[j])
            {
                cout<<small_letter[j];
            }
        }
        cout<<" "<<h<<endl;
    }

    return 0;
}
