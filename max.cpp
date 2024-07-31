#include<iostream>
#include<limits.h>

using namespace std;


int main()
{
    //  This is the first solution without library
    
    // int arr[] = {2 ,5 ,7, 9, 1 ,16 , 41, 100 , 1000};
    // int size = 9;
    

    // int maxNumber = arr[2];   // assume the first element of array is maximum
    // for(  int i = 0; i<size; i++)
    // {
    //     if(arr[i] > maxNumber)
    //     {
    //         maxNumber = arr[i];
              
    //     }
    // } 





    //   This is the second solution with header file "limit.h"
    //  int arr[] = {4 ,6 ,1, 9, 8, 41, 5};
    //  int size = 7;

    //  int MaxNumber = INT_MIN;

    //  for(int i = 0; i<size; i++)
    //  {
    //     if(arr[i] > MaxNumber)
    //     {
    //         MaxNumber = arr[i];
    //     }
    //  }



    // This is the solution to finding the minimum number of the array

    int arr[] = { 2,5,7,44,88,33,99,1};
    int size = 9;

    int MinNumber = arr[0];

    for(int i = 0; i<size; i++)
    {
        if(arr[i] < MinNumber)
        {
            MinNumber = arr[i];
        }

    }    

     cout<<"Minimum Number is "<< MinNumber<<endl;
    
}