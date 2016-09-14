#include <stdio.h>
int main()
{
    int N,num,max=0,maxval=0,cases;

    scanf("%d",&cases);

    while(cases>0)
    {
        maxval=0;
        max=0;
        scanf("%d",&N);

        int a[10001]={0};

        for(int i=0;i<N;i++)
        {
            scanf("%d",&num);
            a[num]++;
            if(a[num]>max)
            {
                max=a[num];
                maxval=num;
            }else if(a[num]==max && num<maxval)
            {
                maxval=num;
            }

        }

        printf("%d %d\n",maxval,max);
        cases--;
    }
    return 0;
}
