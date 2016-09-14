#include <stdio.h>

int main()
{
    long int arr[100];
    int i,N,cases,counter;
    long int K;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%lu",&arr[i]);

        scanf("%lu",&K);
        K=arr[K-1];
        counter=0;

        for(i=0;i<N;i++)
            if(arr[i]<K)
                counter++;
        printf("%d\n",(counter+1));

    }


    return 0;
}
