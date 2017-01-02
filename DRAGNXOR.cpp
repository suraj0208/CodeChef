#include <iostream>
using namespace std;

int getbits(unsigned long n){
    int count=0;

    while(n){
        if(n&1)
            count++;
        n=n>>1;
    }

    return count;
}

int main(){
    int t;
    int n;
    unsigned long a;
    unsigned long b;

    int ba;
    int bb;
    int za;
    int zb;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>a;
        cin>>b;

        ba=getbits(a);
        za=n-ba;

        bb=getbits(b);
        zb=n-bb;

        int set=0;


        while(ba && zb){
            ba--;
            zb--;
            set++;
        }

        while(bb && za){
            bb--;
            za--;
            set++;
        }

        unsigned long ans = (1<<set)-1;
        ans=ans<<(n-set);

        cout<<ans<<endl;
    }

    return 0;
}
