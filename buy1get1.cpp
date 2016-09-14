#include <stdio.h>

int main()
{
    char temp;
    int sum=0;
    int cases;
    scanf("%d ",&cases);

    while(cases>0)
    {
        sum=0;
        int small[123]={0};
        int big[91]={0};
        temp=getchar();

        while(temp!='\n')
        {
            if(temp<97)
                big[temp]++;
            else
                small[temp]++;
            temp=getchar();
        }

        for(int i=97;i<123;i++)
        {
            if(small[i]!=0)
                if(small[i]%2!=0)
                    sum=sum+(small[i]/2)+1;
                else
                    sum=sum+(small[i]/2);
        }

        for(int i=65;i<91;i++)
        {
            if(big[i]!=0)
                if(big[i]%2!=0)
                    sum=sum+(big[i]/2)+1;
                else
                    sum=sum+(big[i]/2);
        }

        printf("%d\n",sum);
        cases--;
    }
    return 0;
}
