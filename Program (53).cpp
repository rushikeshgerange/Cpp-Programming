// Singly linear linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE;

class SinglyLL
{
    private:            // #
        PNODE First;
        int Count;

    public:

        SinglyLL();           // Default Constructor
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);
        void DeleteAtPos(int iPos);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int CountNode();
};

// Return_Value Class_Name :: Function_name();

    SinglyLL :: SinglyLL()
    {
        First = NULL;
        Count = 0;
    }

    void SinglyLL :: InsertFirst(int No)
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

    void SinglyLL :: InsertLast(int No)
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

    void SinglyLL :: InsertAtPos(int No,int iPos)
    {

        if((iPos < 1) || (iPos > Count +1))
        {
            cout<<"Invalid Position \n";
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == Count+1)
        {
            InsertLast(No);
        }
        else
        {
            PNODE temp = First;
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = No;
            newn->next = NULL;
            int i = 0;

            for(i=1; i< iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
            Count++;
        }
        
    }

    void SinglyLL :: DeleteAtPos(int iPos)
    {

        if((iPos < 1) || (iPos > Count))
        {
            cout<<"Invalid Position \n";
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == Count)
        {
            DeleteLast();
        }
        else
        {
            PNODE temp = First;
            PNODE targetednode = NULL;
            int i = 0;

            for( i=1; i< iPos-1; i++)
            {
                temp = temp->next;
            }
            targetednode = temp->next;
            temp->next = temp->next->next;
            delete targetednode;
            Count--;
        }
        
    }

    void SinglyLL :: DeleteFirst()
    {
        if(First == NULL)
        {
            return;
        }
        else if(First->next == NULL)
        {
            delete First;
            First = NULL;
        }
        else
        {
            PNODE temp = First;
            First = First->next;
            delete temp;
        }
        Count--;
    }

    void SinglyLL :: DeleteLast()
    {
        if(First == NULL)
        {
            return;
        }
        else if(First->next == NULL)
        {
            delete First;
            First = NULL;
        }
        else
        {
            PNODE temp = First;

            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
        Count--;
    }

    void SinglyLL :: Display()
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

    int SinglyLL :: CountNode()
    {
        return Count;
    }

int main()
{
    int iRet = 0;
    SinglyLL obj;

    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of element in the linked list are : "<<iRet<<"\n";

    return 0;
}