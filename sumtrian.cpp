#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int size;
    cin>>size;
    int arr[size][size];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           arr[i][j]=0;
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<=i;j++)
        {
           cin>>arr[i][j];
        }
    }


    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           cout<<arr[i][j];
        }
        cout<<endl;
    }

    sum=arr[0][0];
    cout<<"sum"<<sum<<endl;
    int j=0;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i+1][j]>arr[i+1][j+1])
        {
            sum=sum+arr[i+1][j];
        }else
        {
            sum=sum+arr[i+1][j+1];
            j++;
        }
    }

    cout<<sum<<endl;
    return 0;
}
