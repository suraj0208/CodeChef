#include <stdio.h>

int main()
{
    int cases;

    scanf("%d",&cases);
    long double sum;
    long int C;
    int N,temp;
    while(cases>0)
    {
        sum=0;
        scanf("%d",&N);
        scanf("%lu",&C);

        for(int i=0; i<N;i++)
        {
            scanf("%d", &temp);
            sum+=temp;
        }
        if(sum<=C)
            printf("Yes\n");
        else
            printf("No\n");

        cases--;
    }

    return 0;
}
