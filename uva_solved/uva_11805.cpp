#include<bits/stdc++.h>
int main()
{
    int a,b,c;
    int test;

    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {

        int result;


        scanf("%d %d %d",&a,&b,&c);

        result=b+c;

        while(result>a)
        {

            result=result-a;

        }

        printf("Case %d: %d\n",i+1,result);



    }

    return 0;
}
