#include<iostream>
#include<limits.h>
using namespace std;


int getMax(int num[] , int n)
{
    int maxi = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        maxi = max(maxi , num[i]);
    }

    return maxi;
}


int main()
{
    int size;
    cin>>size;

    int num[100];

    for(int i = 0; i<size; i++)
    {
          cin>>num[i];
    }

    cout<<getMax(num , size);
}