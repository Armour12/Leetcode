#include<iostream>
using namespace std;

int main(){
    int i=0,j=10;
    int arr[10]={0,1,1,0,0,1,1,0,1,0};
    while(i<j){
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {   
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

    }
    for(int p=0;p<10;p++)
    { 
        cout << arr[p] <<" ";
    
    }

    return 0;
}