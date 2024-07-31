// int uniqueKey(int arr[] , int size)
// {
//     int ans = 0;
//     for(int i = 0; i<size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
    
//     return ans;
// }

// int main()
// {
//    int arr[7] = {2,4,2,4,7,7,9};
//    int size = 7;
//    int key = uniqueKey(arr , size);
//    cout<<"The unique key from this array is:: "<<key;


// }  

#include <iostream>
using namespace std;

int singleRepi(int arr[] , int size)
{
    int ans = 0;
    
    for(int i = 0; i<size; i++)
    {
        ans = arr[i] ^ ans;
    }
    
    return ans ;
}


int main()
{
    int arr[5] = {1,2,2,1,3};
    int size = 5;
    
    int returnValue = singleRepi(arr , size);
    cout<<returnValue<<endl;
}
