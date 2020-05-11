#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    cout<<endl;
    while(t--)
    {
        /*string forward_letter1;
        string backward_letter1;


        getline(cin,forward_letter1);

        cin.ignore();
        getline(cin,backward_letter1);


        cout<<forward_letter1<<endl;
        cout<<backward_letter1<<endl;
        //cin.ignore();

        cin.ignore();
        */
        string s;
        ll c=0,flag1=0;
        while(getline(cin,s))
        {
            ll i,flag=0;
            string forward_letter;
            string backward_letter;
            ll len=s.size();
            c++;
            int z=0;
            if(c==1)
            {
                int b=0;
                for(int k=0; k<len; k++)
                {
                    forward_letter[b]=s[k];
                    //cout<<forward_letter[b];
                    b++;
                    flag1=1;
                }
            }
            else if(c==2)
            {
                //int z=0;
                for(int k=0; k<len; k++)
                {
                    backward_letter[z]=s[k];
                    //cout<<backward_letter[z];
                    z++;
                    flag1=1;
                }

            }
            //cout<<len;
            else if(c>2)
            {
                cout<<"Yes"<<endl;
                if(flag1==1)
                {
                    for(i=0;i<z;i++)
                    {
                        cout<<backward_letter[i];
                    }
                    cout<<endl;
                    for(i=0;i<z;i++)
                    {
                        cout<<forward_letter[i];
                    }
                    cout<<endl;
                    //cout<<forward_letter<<endl;
                    flag1=0;
                }

                for(i=0; i<len; i++)
                {
                    if(s[i]>='a'&&s[i]<='z')
                    {
                        int index;
                        for(int j=0; j<(forward_letter.size()); j++)
                        {
                            if(s[i]==forward_letter[j])
                            {
                                index=j;
                                break;
                            }
                        }
                        flag=1;
                        s[i]=backward_letter[index];
                        cout<<s[i];
                    }
                    else
                    {
                        cout<<s[i];
                    }
                }

                if(flag==0)
                {
                    break;
                }
            }
            cout<<endl;
        }
    }
    return 0;

}
