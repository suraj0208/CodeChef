#include<iostream>
#include<string.h>
using namespace std;

bool belongs(char* arr, char find)
{
for(int i=0;i<6;i++)
{
if(arr[i]==find)
 return true;
}
return false;
}

int main()
{
char *arr;
char ones[]={'A','D','O','P','Q','R'};

int cases;
cin>>cases;
string inputs[40];

for(int i=0;i<cases;i++)
{
cin>>inputs[i];
}

for(int i=0;i<cases;i++)
{
int count=0;
arr=(char*)inputs[i].c_str();
for(int i=0;i<strlen(arr);i++)
{
	if(belongs(ones,arr[i]))
		count++;	
	else if(arr[i]=='B')
		count+=2;
}
cout<<count<<endl;
}
return 0;
}
