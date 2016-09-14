#include <stdio.h>

int main()
{
    long int a;
    int cases;

    scanf("%d",&cases);

    while(cases--)
    {
        scanf("%lu",&a);
        if(a%2==0)
            printf("%lu\n",a);
        else
            printf("%lu\n",a-1);

    }


    return 0;
}
