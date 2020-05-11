#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    char str[1000];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        int i,num,c,d,letter;
        i=c=letter=0;
        while(str[i]!='-')
        {
            c++;
            letter=letter*26+str[i]-'A';
            i++;

        }
        d=c;

        int value;
        value=d+1;
        num=0;
        while(str[value]!='\0')
        {
            num=num*10+str[value]-'0';
            value++;
        }

        int r;
        r=letter-num;

        if(abs(r)<=100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }

    }
    return 0;
}
