// Singly linear linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int Count;

        SinglyLL()            // Default Constructor
        {
            First = NULL;
            Count = 0;
        }

        void InsertFirst(int No)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = No;
            newn->next = NULL;

            if(First == NULL)
            {
                First = newn;
            }
            else
            {
                newn->next = First;
                First = newn;
            }
            Count++;
        }

        void InsertLast(int No)
        {
            PNODE temp = First;
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = No;
            newn->next = NULL;

            if(First == NULL)
            {
                First = newn;
            }
            else
            {
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
            }
            Count++;
        }

        void Display()
        {
            PNODE temp = First;

            cout<<"\nElement of the linked list are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL \n";
        }
};

int main()
{
    SinglyLL obj;

    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    cout<<"Number of element in the linked list are : "<<obj.Count<<"\n";

    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    cout<<"Number of element in the linked list are : "<<obj.Count<<"\n";

    return 0;
}