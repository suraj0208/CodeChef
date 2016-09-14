#include <stdio.h>

int main()
{
    int G,T,I,Q,i;
    long int N;

    scanf("%d",&T);

    int headcount,tailcount;

    while(T--)
    {

        scanf("%d",&G);

        for(i=0;i<G;i++)
        {
            scanf("%d",&I);
            scanf("%lu",&N);
            scanf("%d",&Q);

            headcount=N/2;
            tailcount=N-(N/2);

            if(Q==2 && I==1)
                printf("%d\n",tailcount);

            else if(Q==2 && I==2)
                printf("%d\n",headcount);

            if(Q==1 && I==1)
                printf("%d\n",headcount);

            else if(Q==1 && I==2)
                printf("%d\n",tailcount);

        }
    }
    return 0;
}
