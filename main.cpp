#include <iostream>
#include<fstream>
using namespace std;
class Node
{
private:
    float data;
    Node *next;
    Node *previous;
public:
    Node(float x)
    {
        data=x;
        next=NULL;

    }
    void Set_data(float x)
    {
        data=x;
    }
    float Get_data()
    {
        return data;
    }
    void Set_next(Node *p)
    {
        next=p;
    }
    Node* Get_next()
    {
        return next;
    }
    void Display()
    {
        cout<<data<<endl;
    }
    void Set_previous(Node *p)
    {
        previous=p;
    }
    Node* Get_previous()
    {
        return previous;
    }
};
class Link_list{
private:
    Node *first;
    //Node *previous;
public:
    Link_list()
    {
        first=NULL;
       // previous=NULL;
    }
void Add_at_start(float x)
    {
        Node *temp=new Node(x);
        temp->Set_next(first);
        temp->Set_previous(NULL);
        first=temp;
    }
void Remove_from_start()
    {
        if(first==NULL)
        {

            cout<<"No node to delete..."<<endl;
            return;
        }
        first=first->Get_next();
        first->Set_previous(NULL);
    }
    void Remove_from_end()
    {
        {
            if(first==NULL)
            {

                cout<<"Add node first  to delete..."<<endl;
                return;
            }
            if(first->Get_next()==NULL)
            {

                first=NULL;
                cout<<"Node deleted..."<<endl;

                return;
            }

            //Node *end=new Node(x);
            Node *temp=first;
            while(true)
            {
                if(temp->Get_next()->Get_next()==NULL)
                {
                    //cout<<"ok"<<endl;
                    temp->Set_next(NULL);//temp->Set_next(end);
                    return;
                }
                temp=temp->Get_next();
            }
        }
    }


     void Display()
    {
        Node *temp=first;
        if(first==NULL)
        {

            cout<<"nothing to display........."<<endl;
            return;
        }
        while(temp->Get_next()!=NULL)
        {

            cout<<temp->Get_data()<<" -> ";
            temp=temp->Get_next();


        }
        cout<<temp->Get_data()<<endl;

    }
    void cleared()
    {
        first=NULL;
    }
    void first_data()
    {
        if(first==NULL)
        {
            cout<<"No data..."<<endl;
        }
        cout<<first->Get_data()<<endl;
    }

};
class Stack{
    public:
    Link_list obj;
    void push(float x)
    {
        obj.Add_at_start(x);
    }
    void pop()
    {
        obj.Remove_from_start();
    }
    void display_stack()
    {
        obj.Display();
    }
    void clear_stack()
    {
        obj.cleared();
    }
    void top_stack()
    {
        obj.first_data();
    }


};
class Queue{
    public:
    Link_list obj;
void enqueu(float x)
{
    obj.Add_at_start(x);
}

void dequeu()
{
    obj.Remove_from_end();
}
void clear_queue()
{
    obj.cleared();
}

void top_queue()
{
    obj.first_data();
}
void display_queue()
{
    obj.Display();
}
};
int main(){

    return 0;}
