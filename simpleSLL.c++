#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linkedlist
{
    private:
        node *head , *temp , *temp1;
    public:
        linkedlist();
        ~linkedlist();
        void set();
        void insert();
        void del();
        void search();
        void print();
};
// Constructor ;
linkedlist::linkedlist()
{
    head = NULL;
    temp = NULL;
    temp1 = NULL;
}
// Create linkedlist;
void linkedlist::set()
{
    if(head == NULL)
    {
        temp = new node;
        cout<<"Enter the value of first node ";
        cin>>temp->data;
        temp->next=NULL;
        head = temp;
        return ;
    }

    temp1 = new node;
    cout<<"Enter the value of new node ";
    cin>>temp1->data;
    temp->next = temp1;
    temp1->next=NULL;
    temp = temp1;
}
// Insert function;
void linkedlist::insert()
{
    if(head == NULL)
    {
        temp = new node;
        cout<<"Enter the value of first node ";
        cin>>temp->data;
        temp->next=NULL;
        head = temp;
        return ;
    }

    int key;
    temp = head;
    cout<<"Enter the key which is you want to insert ";
    cin>>key;
    
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            temp1 = new node;
            cout<<"Enter the value of node which is you want to insert ";
            cin>>temp1->data;
            temp1->next = temp->next;
            temp->next = temp1;
            return;
        }
        temp = temp->next;
    }

}
// Print function;
void linkedlist::print()
{
    if(head == NULL)
    {
        cout<<"Linkedlist is empty "<<endl;
        return ;
    }

    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Delete function;
void linkedlist::del()
{
    if(head == NULL)
    {
        cout<<"Empty linkedlist "<<endl;
        return ;
    }

    int key;
    cout<<"Enter the value which is you want to delete ";
    cin>>key;
    temp = head;

    while(temp!=NULL)
    {
        if(temp->next->data == key)
        {
            temp1 = new node;
            temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
            return;
        }
        temp = temp->next;
    }
}

// Destructor function;
linkedlist::~linkedlist()
{
    delete temp, temp1;
}

int main()
{   
    linkedlist L;
    int press;
    while(true)
    {
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Press 1 for set linkedlist:"<<endl;
        cout<<"Press 2 for Insert a node in linkedlist:"<<endl;
        cout<<"Press 3 for delete a node in linkedlist:"<<endl;
        cout<<"press 4 for print linkedlist:"<<endl;
        cout<<"Press 5 to exit ";
        cout<<endl;
        cout<<"Enter the Value ";
        cin>>press;
        cout<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;    
        if(press == 1)
        {
            int y;
            cout<<"How many times you want to set node ";
            cin>>y;
            for(int x = 0; x<y; x++)
            {
                L.set();
            }
            
        }
        else if(press == 2)
        {
            L.insert();
            
        }
        else if(press == 3)
        {
            L.del();
            
        }
        else if(press == 4)
        {
            L.print();
            
        }
        else if(press == 5)
        {
            break;
        }
        else 
        {
            cout<<"No linkedlist"<<endl;
            break;
        }
    
    }
    return 0;
}