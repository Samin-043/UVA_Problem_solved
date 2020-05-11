#include<stdio.h>
int main()
{
    int i,j,a[100],num,min,test,count1,count2;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&num);

        count1=0;
        count2=0;

        for(j=0; j<num; j++)
        {
            scanf("%d",&a[j]);

            if(j==0)
                min=a[j];

            else if(a[j]>min)
            {
                min=a[j];
                count1++;
            }

            else if(a[j]<min)
            {
                min=a[j];
                count2++;
            }

        }

        printf("Case %d: %d %d\n",i+1,count1,count2);

    }

}
