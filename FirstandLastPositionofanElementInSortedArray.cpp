#include<iostream>
using namespace std;

int firstOccurence( int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int index=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            index = mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return index;
}

int lastOccurence( int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int index=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            index = mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return index;
}


int main()
{
    /*

2
4 0
0 0 0 0
1 2
2
    */
    int arr[20]={0,0,0,0};
    int len= sizeof(arr)/sizeof(arr[0]);
    cout<<"The index the key is present is at "<<firstOccurence(arr,4,0)<<endl;
    cout<<"The index the key is present is at "<<lastOccurence(arr,4,0);

    return 0;
}