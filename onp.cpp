#include <stdio.h>


int main()
{
    char arr[400];
    char mystack[400];
    int top=-1;

    int cases;
    scanf("%d",&cases);
    char ans[cases][400];
    int counter=0;
    int j;

    for(int i=0;i<cases;i++)
    {
        scanf("%s",arr);
        counter=0;
        top =-1;
        for(j=0;j<400;j++)
        {
            if(arr[j]=='\0')
                break;

            if(arr[j]>96)
            {
                ans[i][counter]=arr[j];
                //printf("%c",arr[j]);
                counter++;
            }
            else if (arr[j]!=40 && arr[j]!=41)
                mystack[++top]=arr[j];
                //mystack.push(arr[j]);
            else if(arr[j]==41)
            {
                ans[i][counter]=mystack[top--];
                //printf("%c",mystack.top());
                counter++;
            }
        }
        j++;
        ans[i][counter]='\0';
    }
    for(int i=0;i<cases;i++)
    {   for(int j=0;j<400;j++)
        {
            if(ans[i][j]=='\0')
                break;
            printf("%c",ans[i][j]);
        }
        printf("%c",'\n');
    }
    return 0;
}
