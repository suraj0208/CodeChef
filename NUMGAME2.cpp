#include <iostream>
using namespace std;

int main(){
    int t;
    long long num;
    string arr[] = {"BOB","ALICE","BOB","BOB"};

    cin>>t;
    while(t--){
        cin>>num;
        cout<<arr[num%4]<<endl;

    }


}
