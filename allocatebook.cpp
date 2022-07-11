bool isPossible(vector<int> arr, int n, int m, int mid){
    int count=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else{
            count++;
            if(count>m || arr[i]>mid)
            {
                return false;
            }
            sum=arr[i];
        }
    }
    return true; 
}


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
