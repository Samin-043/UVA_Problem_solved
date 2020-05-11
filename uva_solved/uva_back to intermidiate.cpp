#include<bits/stdc++.h>
int main()
{

    int test;

    float d,v,u,t1,t2;


    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {

        scanf("%f%f%f",&d,&v,&u);

        if(u==0||v==0||v>=u)
        {
            printf("Case %d: can't determine\n",i+1);

            continue;

        }

        t1=d/u;

        t2=d/sqrt(u*u-v*v);


        printf("Case %d: %.3f\n",i+1,t2-t1);


    }

}
