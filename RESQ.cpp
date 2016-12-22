#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n;
    int t;
    cin>>t;

    while(t--){
        cin>>n;

        int sq =sqrt(n);
        if(sq*sq==n){
            cout<<0<<endl;
            continue;
        }

        for(int i=sq;i>=1;i--){
            if(n%i==0){
                int j=n/i;
                if(j-i>=0)
                    cout<<j-i<<endl;
                else
                    cout<<i-j<<endl;
                break;
            }
        }

    }

    return 0;
}
