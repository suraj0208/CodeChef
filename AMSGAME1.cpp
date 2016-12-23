#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;

    if(b==0)
        return a;

    if(a/b>0)
        return gcd(a%b,b);

    return gcd(a,b%a);


}

int main(){
    int t;
    int n;

    cin>>t;

    while(t--){
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n<2)
            cout<<arr[0]<<endl;
        else{
            int prev=gcd(arr[0],arr[1]);

            for(int i=2;i<n;i++){
                prev=gcd(prev,arr[i]);
            }
            cout<<prev<<endl;

        }

    }

    return 0;
}
