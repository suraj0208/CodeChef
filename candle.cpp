#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10];
    int cmin,amin,cindex, tpow;
    int cases;
    bool first=true;

    scanf("%d",&cases);
    while(cases>0)
    {

        for(int i=0;i<10;i++)
        {
            scanf("%d",&arr[i]);
        }

        tpow=pow(10,(arr[0]+1));

        amin=0;
        cmin=100;

        cmin=100;
        cindex=100;

        for(int i=9;i>=1;i--)
        {
            if(arr[i]<=cmin && i<cindex)
            {
                cindex=i;
                cmin=arr[i];
            }
        }

        if(arr[cindex]==0)
        {
            printf("%d\n",cindex);
            cases--;
            continue;
        }

        while(arr[cindex]!=-1)
        {
            amin=(amin*10)+cindex;
            arr[cindex]--;
        }

        amin=fmin(amin,tpow);

        printf("%d\n", amin);
        cases--;
    }
    return 0;
}
