#include<iostream>
using namespace std;

int main()
{
int amt;
double bal;
cin>>amt;
cin>>bal;

if(amt%5!=0 || (bal-amt-0.5)<0)
{
cout<<bal<<endl;
return 0;
}
cout<<(bal-amt-0.50)<<endl;



return 0;
}
