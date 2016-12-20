#include <iostream>

using namespace std;

int main(){
    long long n;
    long long sum=0;

    cin>>n;


    long long num = (n*(n+1))/2;

    long long curr;
    for(long long i =0 ;i<n;i++){
        cin>>curr;
        sum+=curr;
    }

    if(sum==num)
       cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
