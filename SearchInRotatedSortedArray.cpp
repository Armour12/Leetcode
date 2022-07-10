int getpivot(vector<int>& arr,int len)
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

int binarysearch( vector<int>& arr, int s, int e, int key)
{
    int start=s;
    int end=e;
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


int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
   
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }
      
}

