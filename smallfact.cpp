#include<iostream>
#include<stdio.h>
#include"time.h"

using namespace std;
int sum[158];
int anum1[158];
int anum2[158];
int num1;
int num2;
int carry;
//int i=0,j=0;
int cnum1=0,cnum2=0;

void multiply(int multiplier)
{

    num2 = multiplier;
    cnum2=0;
    carry=0;

    for(int i=0;i<cnum1;i++)
    {
        sum[i]=anum1[i]*num2;
        int temp = sum[i];
        sum[i]=(sum[i]+carry)%10;

        carry=(temp+carry)/10;
        cnum2++;
    }

    while(carry!=0)
    {
        int temp = sum[cnum2];
        sum[cnum2]=(sum[cnum2]+carry)%10;
        carry=(temp+carry)/10;
        cnum2++;
    }

    /*    do{
        int temp = sum[i];
        sum[i]=(sum[i]+carry)%10;
        carry=(temp+carry)/10;
        cnum2++;
        i++;
    }while(i<cnum1 || carry!=0 );
*/
    //sum[cnum2]=carry;
    for(int i=cnum2-1;i>=0;i--)
    {
        anum1[i]=sum[i];
    }
    cnum1=cnum2;


}

void fact(int limit)
{
    for(int i=0;i<158;i++)
    {
       sum[i]=0;
    }
    num1 = 1;

    while(num1!=0)
    {
        anum1[cnum1]=num1%10;
        num1/=10;
        cnum1++;
    }
    for(int i=1;i<=limit;i++)
    {
        multiply(i);
    }

    for(int i=cnum2-1;i>=0;i--)
    {
        printf("%d",anum1[i]);
    }
    printf("%c",'\n');
}

int main()
{
    clock_t tStart = clock();

    int cases;
    int testcase;

    //scanf("%d",&cases);
    cases=100;
    int nums[cases];
    for(int i=0;i<cases;i++)
    {
        nums[i]=100;
        //scanf("%d",&nums[i]);
    }

    for(int i=0;i<cases;i++)
    {
        cnum1=0;
        cnum2=0;
        if(nums[i]==0)
        {
            cout<<1<<endl;
            continue;
        }
        fact(nums[i]);
    }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
}
