#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == mid)
        {
            return mid;
        }
        if (key > mid)
        {
            start = mid + 1;
        }
        if (key < mid)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int recuriveBinarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return recuriveBinarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return recuriveBinarySearch(arr, mid + 1, r, num);
    }
    return -1;
}

int main()
{
    int arr[10] = {2, 4, 5, 7, 8, 9, 10, 22, 75};
    // time_t now = time(0);

    // // convert now to string form
    // char *dt = ctime(&now);
    auto start = high_resolution_clock::now();

    //cout << "The start time for normal binary search is: " << dt << endl;
    
    int index = binarysearch(arr, 9, 7);
    auto stop = high_resolution_clock::now();
    // time_t now1 = time(0);
    auto duration = duration_cast<microseconds>(stop - start);

    // // convert now to string form
    // char *dt1 = ctime(&now1);

    cout << "The end  time for normal binary search is: " << duration.count() << endl;
    cout << "The index the key is present is at " << index<<endl;
    // time_t now2 = time(0);
    start = high_resolution_clock::now();
  //  cout << "The start time for recursive binary search is:: " << dt2 << endl;
    int recursiveindex = recuriveBinarySearch(arr, 0, 9, 7);
     stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "The end time for recursive binary search is: " << duration.count() << endl;
    cout << "The index the key is present is at " << recursiveindex;
    return 0;
}