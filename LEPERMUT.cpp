#include <iostream>
#include <cstdlib>

using namespace std;

struct Pair{
    int val;
    int index;
};

int compare(const void* a,const void* b){
    Pair f = *(Pair*)a;
    Pair s = *(Pair*)b;
    return f.val-s.val;
}

int countlocal(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            count++;
    }
    return count;

}

int countinversions(Pair arr[],int n){
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].index>arr[j].index)
                count++;
        }
    }
    return count;

}

int main()
{
    int cases;
    int n;

    cin>>cases;

    while(cases--){
        cin>>n;
        int arr[n];
        Pair pairs[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            pairs[i].val=arr[i];
            pairs[i].index=i;
        }

        qsort(pairs,n,sizeof(Pair),compare);

        int localin=countlocal(arr,n);
        int invers=countinversions(pairs,n);

        //cout<<localin<<endl;
        //cout<<invers<<endl;

        if(localin==invers){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }



    return 0;
}
