#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<string>v;
    string s;
    ll test_case,k=0;
    ll arr[10000];
    cin>>test_case;
    cin.ignore();
    while(test_case--)
    {
        getline(cin,s);
        ///.........First Word Collected from String this procedure.........///
        istringstream istrings(s);
        string first_word;
        istrings>>first_word;
        v.push_back(first_word);

    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
    {
        ll count_word=1;
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                count_word++;
                i++;
            }
        }
        arr[k]=count_word;
        k++;
    }

    for(int i=0,j=0; i<v.size(); i++)
    {
        if(v[i]==v[i+1])
        {
            continue;
        }
        else
        {
            cout<<v[i]<<" "<<arr[j]<<endl;
            j++;
        }
    }

    return 0;
}
