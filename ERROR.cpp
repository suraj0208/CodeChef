#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    char *s;

    while (t--) {
        cin>>str;

        int i=0;

        if(str.length()<3){
            cout<<"Bad"<<endl;
            continue;
        }

        while((i+2)<str.length()){
            if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'){
                cout<<"Good"<<endl;
                break;
            }else if(str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'){
                cout<<"Good"<<endl;
                break;
            }
            i++;
        }

        if(i+2==str.length())
            cout<<"Bad"<<endl;

    }



    return 0;
}
