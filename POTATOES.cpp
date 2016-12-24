#include <iostream>

using namespace std;

int main(){
    int arr[3001]={0};

    for(int i=2;i<3001;i++){
        if(arr[i]==0){

            for(int j=2*i;j<3001;j+=i)
                arr[j]=1;
        }
    }

    int t;
    int x;
    int y;

    cin>>t;

    while(t--){
        cin>>x;
        cin>>y;

        int i=x+y+1;

        for( i=x+y+1;i<3001;i++){
            if(arr[i]==0)
                break;
        }

        cout<<i-(x+y)<<endl;
    }

    return 0;
}
