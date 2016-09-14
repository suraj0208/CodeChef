#include <stdio.h>
#include <math.h>
int main()
{
    int n,counter=0,cases,next;
    long int prev;
    scanf("%d",&cases);

    while(cases>0)
    {
        prev=2147483647;

        counter=0;
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&next);

            if(prev>=next)
            {
                counter++;
                prev=next;

            }
        }
        printf("%d\n",counter);

        //int arr[n];

        /*for(int i=0;i<n-1;i++)
            if(arr[i]<arr[i+1])
            {
                arr[i+1]=arr[i];
            }else
                counter++;

        printf("%d\n",counter);
        */
        cases--;
    }
    return 0;
}
