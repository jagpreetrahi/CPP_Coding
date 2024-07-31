#include<iostream>
using namespace std;

class Game
{
    public:
    float rating;

    void setRating(int r)
    {
        this->rating = r;
    }

    void print()
    {
        cout<<this->rating<<endl;
    }

    void func()
    {
        cout<<"only the good rating  games have the editor choice tag : "<<endl;
    }

};


class PcGame
{
    public:
    float rating;

    void setRating(int r)
    {
        this->rating = r;
    }

    void print()
    {
        cout<<this->rating<<endl;
    }

    void func()
    {
        cout<<"For Pc game you might have a good intel processor or gaming laptop:"<<endl;
    }
};

class person: public Game , public PcGame
{
    public:
    float rating;

   

    
    void setRating(float r)
    {
        this->rating = r;
    }

   
    void print()
    {
        cout<<this->rating<<endl;
    }
    
   
    
   
    void func()
    {
        cout<<"Bro i belive that for gaming scope , you have a better skills for a particular game imao:"<<endl;
    }
};

int main()
{
    person ob1;
    ob1.func();
    ob1.Game ::func();
    ob1.setRating(4.9);
    ob1.print();
    ob1.Game::print();
   

}