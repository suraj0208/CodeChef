#include<iostream>
#include<stdio.h>
#include"time.h"
using namespace std;

int main()
{
    int arr[10];
    int cmin,amin,cindex;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    cmin=100;
    amin=0;
    cindex=100;
    bool first=true;

    while(cmin!=0)
    {
        for(int i=9;i>=0;i--)
        {
            if(arr[i]<=cmin && i<cindex )
            {
                cindex=i;
                cmin=arr[i];
            }
        }

        if(cindex==0 && first == true)
        {
            cmin=100;
            cindex=100;
            continue;
        }

        first=false;
        amin=(amin*10)+cindex;

        for(int i=0;i<10;i++)
            printf("%d ",arr[i]);
    }
    printf("\n%d\n", amin);

    return 0;
}
