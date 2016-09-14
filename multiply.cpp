#include<iostream>
using namespace std;

int main()
{
int sum[200];
int anum1[200];
int anum2[200];

for(int i=0;i<200;i++)
{
	sum[i]=0;
	anum1[i]=0;	
	anum2[i]=0;	
}


int num1;
int num2;
int carry;

cin>>num1>>num2;

int cnum1=0,cnum2=0;
int divider=10;

while(num1!=0)
{
	anum1[cnum1]=num1%10;
	num1/=10;
	cnum1++;
}

while(num2!=0)
{
	anum2[cnum2]=num2%10;
	num2/=10;
	cnum2++;
}

int i=0,j=0;

for(i=0;i<200;i++)
{
	carry=0;
for(j=0;j<200;j++)
{
	sum[j+i]=sum[j+i]+anum1[j]*anum2[i];
}

for(int k=0;k<200;k++)
{
	int temp = sum[k];
	sum[k]=temp%10+carry;
	carry=temp/10;
}
j=201;

while(sum[j-1]!=0)
	j--;
sum[j]=sum[j]+carry;

}

for(int i=0;i<10;i++)
	cout<<sum[i]<<endl;

return 0;
}
