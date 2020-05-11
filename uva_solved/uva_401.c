#include<stdio.h>
#include<string.h>


int main()
{
    int i=0,j,len=0;
    char s[100];
    while(gets(s))
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(i==0)
                len=0;
            len++;

        }

        printf("%d\n",len);


    }





    return 0;
}
