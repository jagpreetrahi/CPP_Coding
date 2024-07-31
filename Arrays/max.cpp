#include<iostream>
#include<limits.h>
using namespace std;


int main()
{
    // Case for all positive number
    float arr[] = {-1,-2,-7,-4,-12,-5,-33,-99};
    int size = 8;

    float min_number = INT_MAX;

    for(int i = 0; i<size; i++)
    {
        if(arr[i] < min_number)
        {
            min_number = arr[i];
        }
    }

    cout<<min_number<<endl;
}