#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{


int n,k,temp,counter=0;
scanf("%d",&n);

scanf("%d",&k);

for(int i=0; i<n;i++)
{
scanf("%d",&temp);
if(temp%k==0)
counter++;
}
printf("%d",counter);
printf("%c",'\n');

return 0;
}
