#include <stdio.h>
#include <math.h>
int main()
{
    double d;
    bool winner=true;
    bool winners[1000];

    int cases;
    scanf("%d",&cases);

    for(int i=0;i<cases;i++)
    {
        scanf("%lf",&d);

        if(fmod(d,2)==0)
            winners[i]=true;
        else
            winners[i]=false;

        winner=!winner;
    }

    for(int i=0;i<cases;i++)
    {
        if(winners[i])
            printf("ALICE\n");
        else
            printf("BOB\n");
    }

    return 0;
}
