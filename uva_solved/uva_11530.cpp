#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    ll k=1;
    while(k<=t)
    {
        char one[]= {'a','d','g','j','m','p','t','w',' ','\0'};
        char two[]= {'a'+1,'d'+1,'g'+1,'j'+1,'m'+1,'p'+1,'t'+1,'w'+1,'\0'};
        char three[]= {'a'+2,'d'+2,'g'+2,'j'+2,'m'+2,'p'+2,'t'+2,'w'+2,'\0'};
        char four[]= {'s','z','\0'};
        string s;
        getline(cin,s);
        ll requir=0;
        for(int l=0; l<s.size(); l++)
        {
            for(int i=0; one[i]!='\0'; i++)
            {
                if(s[l]==one[i])
                {
                    requir++;
                    break;
                }
            }
            for(int i=0; two[i]!='\0'; i++)
            {
                if(s[l]==two[i])
                {
                    requir+=2;
                    break;
                }
            }
            for(int i=0; three[i]!='\0'; i++)
            {
                if(s[l]==three[i])
                {
                    requir+=3;
                    break;
                }
            }
            for(int i=0; four[i]!='\0'; i++)
            {
                if(s[l]==four[i])
                {
                    requir+=4;
                    break;
                }
            }

        }
        cout<<"Case #"<<k<<": "<<requir<<endl;
        k++;
    }
    return 0;
}
