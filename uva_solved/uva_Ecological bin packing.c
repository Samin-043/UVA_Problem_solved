#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100];
    int b[100];


    for(i=0; i<9; i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0; i<9; i++)
    {
        if(i>=0&&i<3)
        {
            printf("First bin : %d\n",b[i]);
        }
         else if(i>=3&&i<6)
        {
            printf("Second bin :\n %d",b[i]);
        }
        else
            printf("THird bin :\n %d",b[i]);

    }


    return 0;
}
