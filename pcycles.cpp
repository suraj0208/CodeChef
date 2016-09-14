#include <stdio.h>

int main()
{
    int N,counter;
    int visited[1001]={0};

    scanf("%d",&N);
    int arr[N+1];
    int op[N][N];

    int i,j,k;

    for(i=1;i<=N;i++)
        scanf("%d",&arr[i]);
    counter=0;
    for(i=1;i<=N;i++)
    {
        if(visited[i]==0)
        {
            j=i;
            k=0;
            do{
               op[counter][k]=j;
               //printf("%d ",j);

               visited[j]=1;
               j=arr[j];

               k++;
            }while(j!=i);

            op[counter][k]=i;
            counter++;
            //printf("\n");

        }

    }

    printf("%d\n ",counter);//watch the space after newline char

    for(i=0;i<counter;i++)
    {
        j=0;
        do
        {
            printf("%d ",op[i][j]);
            j++;

        }while(op[i][j]!=op[i][0]);
        printf("%d ",op[i][0]);
        printf("\n");
    }




    return 0;
}
