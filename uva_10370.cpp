#include<bits/stdc++.h>

int main()
{
    int test,i,c;
    float a[1020],sum,grade;
    float av1,av2;

    scanf("%d",&test);

    for(i=0; i<test; i++)
    {
        sum=0.0;
        scanf("%f",&grade);

        for(int j=0; j<grade; j++)
        {

            scanf("%f",&a[j]);
            sum+=a[j];

        }

        av1=(sum/grade);

        c=0;

        for(int j=0; j<grade; j++)
        {
            if(av1<a[j])
            {
                c++;
            }

        }

        av2=(100*c/grade);

        printf("%.3f%\n",av2);


    }

    return 0;
}
