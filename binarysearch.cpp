#include<iostream>
using namespace std;

int binarysearch( int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[10]={2,4,5,7,8,9,10,22,75};
    int index= binarysearch(arr,9,73);
    cout<<"The index the key is present is at "<<index;
    return 0;
}