#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n , int key)
{
    int left = 0;
    int right = n -1;
    int mid = left + (right - left)/2;
    int ans = -1;

    while(left <= right)
    {
        if(arr[mid] == key){
            ans = mid;
            right = mid - 1;
        }

        else if(arr[mid] < key)
        {
            left = mid + 1;
        }

        else{
            right  = mid + 1;
        }

        mid = left + (right - left)/2;
    }

    return ans;
}

int lastOccurence(int arr[], int n , int key)
{
    int left = 0;
    int right = n -1;
    int mid = left + (right - left)/2;
    int ans = -1;

    while(left <= right)
    {
        if(arr[mid] == key){
            ans = mid;
            left = mid + 1;
        }

        else if(arr[mid] < key)
        {
            left = mid + 1;
        }

        else{
            right  = mid + 1;
        }

        mid = left + (right - left)/2;
    }

    return ans;
}

int main()
{
    int arr[6] = {1,2,4,2,5,6};

    int printIndex = firstOccurence(arr , 6, 2);
    cout<<"The firstOccurence of search element is "<<printIndex;

    int printIndex1 = lastOccurence(arr , 6, 2);
    cout<<"The lastOccurence of search element is "<<printIndex1;
}