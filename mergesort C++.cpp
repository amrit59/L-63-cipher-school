#include<iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    //We need to actually merge the 2 sorted arrays which we have received
    //The array actually has been sorted till start to mid and also from mid to end but, now we need to merge(combine these)
}
void mergeSort(int *arr, int start, int end)
{
    //The recursion needs to have a base case :
    //What is base case : The base case is when there is only 1 element :

    if(start >= end)    //This implies there is only 1 element and now we cannot split it further
    {
        return;
    }
    int mid;
    mid = (start+end)/2;

    //we are also using the same code to sort the smaller code
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    //But after we have sorted the smaller arrays, we need to merge them to get the bigger arrays
    merge(arr,start,end);
}
int main()
{
    int size_arr;

    int arr[5] = {1,5,3,10,4};

    size_arr = 5;

    mergeSort(arr,0,size_arr-1);
}
