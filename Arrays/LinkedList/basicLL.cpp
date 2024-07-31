#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node * next;

    // constructor

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

};


// insert at the begin
void insertHead(Node * &head , int d)
{
    // create a new node
    Node * temp = new Node(d);
    temp -> next  = head;
    head = temp;
}

// insert at the end
void insertTail(Node * &tail , int d)
{
    // new node create
    Node * temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}


void insertMiddle(int position , int d)
{

    Node * temp = head;
    int count = 1;
    while(count < position -1)
    {
        // increase the temp 
       temp = temp -> next;
       count ++;
    }

    Node * nodeToInsert = new Node()
}
 
// printing the node at start
void print(Node * &head)
{
    // create a new node temp for  iterate
    Node * temp = head;

    while(temp != NULL)
    {
        cout<<temp -> data << " ";
       temp = temp -> next;
    }

    cout << endl;
}
int main()
{
    Node * node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    
  //  initially head pointing to node1
    Node * head = node1;
    Node * tail = node1;
    print(head);

    insertHead(head , 12);
    print(head);
    insertHead(head , 15);
    print(head);
    

    return 0;

}
