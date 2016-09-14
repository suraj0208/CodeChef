#include <stdio.h>

int main()
{
    int cases;
    int N;
    long int min=2000000000;
    scanf("%d",&cases);
    long int temp;
    while(cases>0)
    {
        min=2000000000;

        scanf("%d",&N);

        long int arr[N+1];

        for(int i=0;i<N;i++)
            scanf("%lu", &arr[i]);


        for(int i=1;i<N;i++)
        {
            for(int j=0;j<N-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        for(int i=0;i<N-1;i++)
        {
            if(arr[i+1]-arr[i]<min)
                min=arr[i+1]-arr[i];
        }

        printf("%lu\n",min);
        cases--;
    }
    return 0;
}
