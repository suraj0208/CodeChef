#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main()
{
    int T;
    scanf("%d",&T);
    double a,b;

    while(T--)
    {
        scanf("%lf",&a);
        scanf("%lf",&b);

        cout.precision(6);
        cout.setf(ios::fixed,ios::floatfield);
        cout<<sqrt((b*b)-(a*a))<<" "<<sqrt((b*b)+(a*a))<<endl;

    }

    return 0;
}
