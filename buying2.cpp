#include <stdio.h>

int main()
{

    int N,sum,X;
    int temp,cases;
    scanf("%d",&cases);
    int i;
    while(cases--)
    {
        int arr[101]={0};
        sum=0;
        scanf("%d",&N);
        scanf("%d",&X);

        for(i=0;i<N;i++)
        {
            scanf("%d",&temp);
            sum+=temp;
            arr[temp]=1;
        }

        temp=sum/X;
        X=sum%X;
        for(i=1;i<=X;i++)
        {
            if(arr[i]!=0)
            {
                printf("-1\n");
                sum=0;
                break;
            }
        }
        if(sum!=0)
            printf("%d\n",temp);

    }
    return 0;

}

