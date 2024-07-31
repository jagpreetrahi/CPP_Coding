#include<iostream>
using namespace std;

class Student
{
    string name;
    int id;
    int div;
    int PhoneNumber;


    public:

    Student()
    {
        cout<<"Hey, Welcome "<<endl;
        
        
    }

    void setName(string name , int id , int div , int PhoneNumber)
    {
        this->name = name;
        this->div = div;
        this->id = id;
        if(PhoneNumber.length() <= 10)
        {
            this->PhoneNumber = PhoneNumber;
            cout<<this->PhoneNumber<<endl;
        }
        else{
            cout<<"Invalid Number"<<endl;
        }
       
    }

    void print()
    {
        cout<<"Name of the Student : "<<this->name<<endl;
        cout<<"ID of the Student : "<<this->id<<endl;
        cout<<"Div of the Student : "<<this->div<<endl;
        cout<<"PhoneNumber of the Student : "<<this->PhoneNumber<<endl;
    }

};


int main()
{
    Student s1;
    s1.setName("Rajeev" , 32 , 8 , 9528629522);
    s1.print();
   
    
}