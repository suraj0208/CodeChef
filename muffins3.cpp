#include <stdio.h>

int main()
{
    int size=1,n,cases;
    scanf("%d",&cases);

    while(cases>0)
    {
        scanf("%d",&n);
        printf("%d\n", (n/2)+1);
        cases--;
    }

    return 0;
}
