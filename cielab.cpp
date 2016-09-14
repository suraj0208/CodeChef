#include<stdio.h>


int main()
{
    int A;
    int B;
    scanf("%d",&A);
    scanf("%d",&B);
    int ans = A-B;
    int arr[5];
    //printf("%d\n",ans);

    A=0;
    while(ans!=0)
    {
        arr[A]=ans%10;
        ans/=10;
        A++;
    }
    for(int i=A-1;i>=1;i--)
    {
        printf("%d",arr[i]);
    }
    printf("%d",((arr[0]+1)%10)+1);

    printf("%c",'\n');
    return 0;
}
