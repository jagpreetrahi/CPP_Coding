#include<iostream>
using namespace std;

 void RepeatElement(int arr[] ,  int size )
{
    int repeatZero = 0;
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            repeatZero += 1;
            cout<<"The number of Zeros is : "<< repeatZero<<"at index "<< i <<endl;
            
        }
        

             
       

        
    }

   
   
}

void RepeatOnes(int arr[] , int size)
{
      int repeatOne = 0;
      for(int i = 0; i<size; i++)
      {
        if(arr[i] == 1)
        {
            repeatOne++;
            cout<< "the number of ones : "<<repeatOne<<"at index "<<i<<endl;
        }
      }
     
}

int main()
{
    int arr[] = { 0 ,1, 0,1 ,1, 0, 0};
    int size = 7;
    

      RepeatElement(arr , size );
       RepeatOnes(arr ,size);

     

    
}