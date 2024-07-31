#include<iostream>
using namespace std;

class Myclass
{
    public:
    int x ; 
    const int y;
    const int z;

    Myclass(int val1 , int val2 , int val3): x(val1) , y(val2) , z(val3)
    {
        cout<<"Constructor called"<<endl;
    }
};



int main()
{
    Myclass c1(2,6,9);
    cout<<c1.x<<endl;
    cout<<c1.y<<endl;
    cout<<c1.z<<endl;
   
}