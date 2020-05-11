#include<stdio.h>
int main()
{
    long int a;
    long int b;

    while((scanf("%li %li",&a,&b))!=EOF)
    {
        if(b>a)
            printf("%li\n",b-a);
         else
            printf("%li\n",a-b);

    }

    return 0;
}
