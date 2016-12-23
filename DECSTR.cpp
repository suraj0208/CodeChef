#include <iostream>

using namespace std;

int main(){
    int t;
    int k;
    cin>>t;
    while(t--){
        cin>>k;

        int rev = k/25;
        int mod = k%25;

        if(mod)
            while(mod>=0){
                cout<<char(97+mod%26);
                mod--;
            }

        while(rev--){
            k=25;
            while(k>=0){
                cout<<char(97+k%26);
                k--;
            }
        }

        cout<<endl;
    }

    return 0;
}
