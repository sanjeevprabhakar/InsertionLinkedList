/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct Node
{
    int rollno;
    string name;
    struct Node * next;
};


void linkedList(struct Node * ptr){
    
    while(ptr != NULL){
        
        cout << ptr->rollno;
        cout << ptr->name << endl;
        ptr =   ptr->next;
        
    }
    
}

int main()
{
    char input;
    string position;
    
    
   
    
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * four;
    
    head = new Node();
    second = new Node();
    third = new Node();
    four = new Node();
    
    
    head ->rollno = 10;
    head ->name = "ashok";
    head ->next = second;
    
    
    second ->rollno = 20;
    second ->name = "gautam";
    second ->next = third;
    
    third ->rollno = 30;
    third ->name = "dhoni";
    third ->next = NULL;
    
    cout<<"did you want to insert a new node type y as yes and n as no";
    cin >> input;
    
    cout << " where do you want to insert a node at first or at last";
    cin >> position;
    
    
    if( input == 'y' && position == "first") 
    {
        four->next = head;
        head = four;
        
        cout << "enter the first node rollno";
        
        cin>> four ->rollno;
        
        cout << "enter the first node name";
        
        cin>> four ->name;
    }
    
    if( input == 'y' && position == "last") 
    {
        third->next = four;
        four->next = NULL;
        
        
        cout << "enter the last node rollno";
        
        cin>> four ->rollno;
        
        cout << "enter the last node name";
        
        cin>> four ->name;
        
    }
    
    linkedList(head);
    
    return 0;
    
}
    
   