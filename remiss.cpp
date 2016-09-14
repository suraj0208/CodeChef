#include <stdio.h>

int main()
{
    int cases,A,B;
    scanf("%d",&cases);

    while (cases>0) {
        scanf("%d",&A);
        scanf("%d",&B);
        if(A>B)
            printf("%d ",A);
        else
            printf("%d ",B);

        printf("%d\n",A+B);


        cases--;
    }

    return 0;
}
