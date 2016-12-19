#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    int k;
    int t;
    int minsum;
    int maxsum;

    cin>>t;

    while(t--){
        cin>>n;
        cin>>k;

        minsum=0;
        maxsum=0;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(k>n/2)
            k=n-k;

        for(int i=0;i<k;i++)
            minsum+=arr[i];


        for(int i=k;i<n;i++)
            maxsum+=arr[i];

        cout<<abs(maxsum-minsum)<<endl;

    }

    return 0;
}
