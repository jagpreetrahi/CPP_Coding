#include<iostream>
#include<string>
using namespace std;

class Family
{
    private:
    int length;

    public:
    string name;
    string relaltionship;


     Family(int length , string name)
     {
        
        this->length = length;
        this->name = name;

     }
     void print()
     {
        cout<<name<<endl;
     }

    
   
    int getLength()
    {
        return length;
    }

    void setLength(int l)
    {
        length = l;
    }
    

     string getName()
    {
        return name;
    }

    void setName(string sr)
    {
        name = sr;
    }


     string getRelation()
    {
        return relaltionship;
    }

    void setRelation(string rl)
    {
        relaltionship = rl;
    }

};






int main()
{
   
    
    Family f1(128, "aadmi");
    f1.print();

    f1.setLength(23);
    cout<<f1.getLength()<<endl;
    f1.setName("jagggi");
    cout<<f1.getName()<<endl;;
    f1.setRelation("friend");
    cout<<f1.getRelation();
}
   

  


       
