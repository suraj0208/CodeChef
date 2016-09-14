#include <stdio.h>
int arr[1000000];

int main()
{
    long int A;
    int K,N;
    scanf("%lu",&A);
    scanf("%d",&K);
    scanf("%d",&N);
    int i=0;

    while(A!=0)
    {
        if(i>=N)
            break;
        arr[i]=(A%(K+1));
        A=A/(K+1);
        i++;
    }

    arr[i]=A;

    for(int j=i+1; j<=N;j++)
    {
        arr[j]=0;
    }

    for(int j=0;j<N;j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}
