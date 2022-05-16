#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[1000],s2[1000];

    while(gets(s1))
    {
        gets(s2);
        int sum1,sum2;
        int i,j;
        i=0;
        sum1=0;
        while(s1[i]!='\0')
        {
            if(s1[i]>='a'&&s1[i]<='z')
            {
                sum1+=s1[i]-'a'+1;
            }
            else if(s1[i]>='A'&&s1[i]<='Z')
            {
                sum1+=s1[i]-'A'+1;
            }

            i++;
        }
        int temp,value,t1,a;
        temp=sum1;

        while(temp>9)
        {
            t1=temp;
            value=0;
            while(t1!=0)
            {
                value+=t1%10;
                t1/=10;
            }
            temp=value;
        }

        j=sum2=0;
        while(s2[j]!='\0')
        {
            if(s2[j]>='a'&&s2[j]<='z')
            {
                sum2+=s2[j]-'a'+1;
            }
            else if(s2[j]>='A'&&s2[j]<='Z')
            {
                sum2+=s2[j]-'A'+1;
            }

            j++;
        }

        int temp_1,value_1,t2;
        temp_1=sum2;

        while(temp_1>9)
        {
            t2=temp_1;
            value_1=0;
            while(t2!=0)
            {
                value_1+=t2%10;
                t2/=10;
            }
            temp_1=value_1;
        }

        if(temp>temp_1)
        {
            int t;
            t=temp;
            temp=temp_1;
            temp_1=t;
        }

        printf("%.2f %%\n",(double)temp*100/temp_1);

    }

    return 0;
}
