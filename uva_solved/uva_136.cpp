#include<bits/stdc++.h>

int main()
{
    long long int num=859963392;

    printf("The 1500'th ugly number is %lld.\n",num);

    return 0;
}

/*
#include <iostream>


using namespace std;



bool simp(int a)

{

    while(a%2==0)
        a>>=1;

    while(a%3==0)
        a/=3;

    while(a%5==0)
        a/=5;



    return a==1;

}



int main()
{

    int cont=1;

    int i;


    for(i=2;; i++)
    {

        if(simp(i))
            cont++;

        if(cont==1500)
            break;

    }



    cout<<i<<endl;



    return 0;

}
*/

