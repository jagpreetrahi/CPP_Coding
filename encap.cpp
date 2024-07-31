#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;

    public:

    int getRoll()
    {
        return roll;
    }

    void print()
    {
        cout<<roll<<endl;
    }
    void setRoll(int r)

    {
        roll = r;
      
    }
};


int main()
{
    Student s1;
    cout<<sizeof(s1)<<endl;
    s1.getRoll();
    s1.setRoll(13);
    s1.print();


}   

