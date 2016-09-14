#include<stdio.h>

int main()
{
    double num;
    long int cases;
    cases=100000;
    scanf("%lu",&cases);
    double divider = 5;
    long int count=0;
    long int temp;
    for(int i=0;i<cases;i++)
    {
        scanf("%lf",&num);
        count=0;
        divider=5;
        temp = num/divider;
        while(temp!=0)
        {
            count=count+(int)(temp=num/divider);
            divider*=5;
        }
        printf("%lu\n",count);

    }


    return 0;
}
