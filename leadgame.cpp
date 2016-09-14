#include <stdio.h>
int result[20000];

int main()
{

    int cases;
    int player1,player2,p1lead=0,p2lead=0;
    scanf("%d",&cases);
    int diff;
    int max=0;
    int winner=0;
    int count=0;
    for(int i=0;i<cases;i++)
    {
        scanf("%d",&player1);
        scanf("%d",&player2);
        player1+=p1lead;
        player2+=p2lead;

        if(player1>player2)
        {
            result[count]=1;
            count++;
            diff=player1-player2;
            result[count]=diff;
            count++;
            p1lead=diff;
            if(p1lead>max)
            {
                max=p1lead;
                winner=1;
            }
                p2lead=0;
        }else
        {
            result[count]=2;
            count++;
            diff=player2-player1;
            result[count]=diff;
            count++;
            p2lead=diff;
            p1lead=0;
            if(p2lead>max)
            {
                max=p2lead;
                winner=2;
            }

        }

    }
    printf("%d %d", winner,max);
    printf("%c",'\n');
    return 0;
    for(int i=0;i<(cases*2);i++)
    {
        printf("%d %d", result[i],result[i+1]);
        i++;
        printf("%c",'\n');
    }

    return 0;
}
