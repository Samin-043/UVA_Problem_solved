#include<bits/stdc++.h>

int main()
{
    long int n;
    long int m;
    long int l;
    long int c;
    long int i=0;

    while((scanf("%li %li",&n,&l))!=EOF)
    {

        m=n;

        c=0;

        if(n<0&&l<0)
            break;

        if(n<=l)
        {
            while(n!=1)
            {

                if(n>l)
                    break;

                if(n%2==0)
                {

                    n=n/2;
                    c++;


                }
                else if(n%2!=0)
                {

                        n=n*3+1;
                        c++;


                }

            }

            if(n==1)
            {

                c++;

            }

        }

        i++;

        printf("Case %li: A = %li, limit = %li, number of terms = %li\n",i,m,l,c);


    }



    return 0;


}
