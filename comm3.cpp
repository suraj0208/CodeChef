#include <stdio.h>
#include <math.h>

int main()
{
    int R,x1,y1,x2,y2,x3,y3,count,cases;

    long double fsub,ssub,res;
    scanf("%d",&cases);

    while(cases--)
    {
        count=0;
        scanf("%d",&R);

        scanf("%d",&x1);
        scanf("%d",&y1);

        scanf("%d",&x2);
        scanf("%d",&y2);

        scanf("%d",&x3);
        scanf("%d",&y3);

        fsub=pow((x2-x1),2);
        ssub=pow((y2-y1),2);
        res = sqrt((fsub+ssub));

        if(res<=R)
            count++;

        fsub=pow((x3-x2),2);
        ssub=pow((y3-y2),2);
        res = sqrt((fsub+ssub));


        if((sqrt((fsub+ssub)))<=R)
            count++;

        fsub=pow((x3-x1),2);
        ssub=pow((y3-y1),2);
        res = sqrt((fsub+ssub));

        if(res<=R)
            count++;

        if(count>=2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
