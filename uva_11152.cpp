#include<bits/stdc++.h>
using namespace std;
#define PI  3.1415926535897
int main()
{
    double a,b,c;
    while((scanf("%lf%lf%lf",&a,&b,&c))!=EOF)
    {
        double pe,area;
        pe=(a+b+c)/2;
        area=sqrt(pe*(pe-a)*(pe-b)*(pe-c));
        double r,rose,violets,R,sunflower;
        r=area/pe;
        rose=PI*r*r;
        violets=area-rose;
        R=(a*b*c)/(4*area);
        sunflower=PI*R*R-area;
        printf("%.4f %.4f %.4f\n",sunflower,violets,rose);
    }
    return 0;
}
