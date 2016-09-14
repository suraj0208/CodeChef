#include <stdio.h>

int main()
{
    int N,i,ltop,gtop,cases,max,min;
    bool pl;
    scanf("%d",&cases);


    while(cases--)
    {

        scanf("%d",&N);

        int arr[N];

        max=0;
        min=1000000010;

        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }

        int greater[N];
        int less[N];
        ltop=-1;
        gtop=-1;
        pl=true;
        max=(max+min)/2;

        for(i=0;i<N;i++)
        {
            if(pl)
            {
                if(arr[i]<=max)
                {
                    printf("%d", arr[i]);

                    if(gtop!=-1)
                    {
                        printf("%d", greater[gtop--]);
                    }else
                    {
                        pl=false;
                    }
                }else
                    greater[++gtop]=arr[i];
            }else

            {
                if(arr[i]>max)
                {
                    printf("%d", arr[i]);

                    if(ltop!=-1)
                    {
                        printf("%d", less[ltop--]);
                    }else
                    {
                        pl=true;
                    }
                }else
                    less[++ltop]=arr[i];
            }

        }

        printf("\n");
    }
    return 0;


}
