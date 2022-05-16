#include<stdio.h>
int main()
{
    int test;
    int pro_salary;
    int ditio_salary;
    int thritio_salary;
    int i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d",&pro_salary,&ditio_salary,&thritio_salary);
        if(pro_salary<1000||ditio_salary<1000||thritio_salary<1000)
            continue;
        else if(pro_salary>10000||ditio_salary>10000||thritio_salary>10000)
            continue;
         if(pro_salary<ditio_salary&&pro_salary>thritio_salary)
            printf("Case %d: %d\n",i,pro_salary);
         else if(pro_salary>ditio_salary&&pro_salary<thritio_salary)
            printf("Case %d: %d\n",i,pro_salary);
          else if(ditio_salary<pro_salary&&ditio_salary>thritio_salary)
                printf("Case %d: %d\n",i,ditio_salary);
          else if(ditio_salary>pro_salary&&ditio_salary<thritio_salary)
                printf("Case %d: %d\n",i,ditio_salary);
          else if(thritio_salary<pro_salary&&thritio_salary>ditio_salary)
                printf("Case %d: %d\n",i,thritio_salary);
          else if(thritio_salary>pro_salary&&thritio_salary<ditio_salary)
                printf("Case %d: %d\n",i,thritio_salary);

    }


    return 0;
}
