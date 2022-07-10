#include<iostream>
using namespace std;

int getpivot(int arr[],int len)
{
    int s=0;
    int end=len-1;
    int mid=s+(end-s)/2;
    while(s<end)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            end=mid;
        }
        mid=s+(end-s)/2;
    }

    return s;
}

int main()
{
    int arr[5]={5,8,13,1,4};
    cout<<"Hello world"<<endl;
    cout<<getpivot(arr,5);

    return 0;
}