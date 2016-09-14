#include <stdio.h>

int main()
{
    int arr[]= {2048,1024,512,256,128,64,32,16,8,4,2,1};
    int p;
    int op;
    int i;
    int counter;
    double cases;

    scanf("%lf",&cases);

    while(cases>0)
    {
        scanf("%d",&p);
        op=p;

        i=0;
        counter=0;

        while(p<arr[i])
        {
            i++;
        }

        while(p!=1 && p!=0)
        {
            p=p-arr[i];
            while(p<arr[i])
            {
                i++;
            }
            counter++;
        }

        if(p==1)
        {
            i=0;
            while(p<arr[i])
            {
                i++;
            }

            while(p!=0)
            {
                p=p-arr[i];
                while(p<arr[i])
                {
                    i++;
                }
                counter++;
            }
        }

        printf("%d\n",counter);
        cases--;
    }

    return 0;
}
