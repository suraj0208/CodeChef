#include <stdio.h>
#include <string.h>
int main()
{
    int cases,count;
    int *S;
    scanf("%d ",&cases);

    while(cases--)
    {

        S=new int[125];

        memset(S,0,125*sizeof(int));
        char c;
        c=getchar();
        //accept s
        while(c!='\n')
        {
            S[c]++;
            c=getchar();
        }
        count=0;

        //accept j
        c=getchar();
        while(c!='\n')
        {
            if(S[c]!=0)
            {
                count++;
            }
            c=getchar();

        }
        delete[] S;
        printf("%d\n",count);
    }


}
