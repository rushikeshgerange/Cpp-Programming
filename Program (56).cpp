// Doubly circular linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;
}NODE, *PNODE;

class DoublyCL
{
    private:            
        PNODE First;
        PNODE Last;
        int Count;

    public:

        DoublyCL();
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

    DoublyCL :: DoublyCL()
    {
        First = NULL;
        Last = NULL;
        Count = 0;
    }

    void DoublyCL :: InsertFirst(int No)
    {
       PNODE newn = NULL;
       newn = new NODE;

       newn->data = No;
       newn->next = NULL;
       newn->prev = NULL;

       if((First == NULL) && (Last == NULL))
       {
            First = newn;
            Last = newn;
       }
       else
       {
            newn->next = First;
            First->prev = newn;
            First = newn;
       }
       First->prev = Last;
       Last->next = First;
       Count++;
    }

    void DoublyCL :: InsertLast(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        if((First == NULL) && (Last == NULL))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last->next = newn;
            newn->prev = Last;
            Last = newn;
        }
        First->prev = Last;
        Last->next = First;
        Count++;
    }

    void DoublyCL :: InsertAtPos(int No,int iPos)
    {
        PNODE newn = NULL;

        if((iPos < 1) || (iPos > Count+1))
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
            int i = 0;
            PNODE temp = First;

            newn = new NODE;

            newn->data = No;
            newn->next = NULL;
            newn->prev = NULL;

            for(i=1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;
        }
        Count++;
    }

    void DoublyCL :: DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > Count+1))
        {
            cout<<"Invalid Position \n";
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == Count+1)
        {
            DeleteLast();
        }
        else
        {
            int i = 0;
            PNODE temp = First;
            
            for(i=1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            delete temp->next->prev;
            temp->next->prev = temp;
        }
        Count--;
    }

    void DoublyCL :: DeleteFirst()
    {
        if((First == NULL) && (Last == NULL))
        {
            return;
        }
        else if(First == Last)
        {
            delete First;
            First = NULL;
            Last = NULL;
        }
        else
        {
            First = First->next;
            delete Last->next;
            First->prev = Last;
            Last ->next = First;
        }
        Count--;
    }

    void DoublyCL :: DeleteLast()
    {
        if((First == NULL) && (Last == NULL))
        {
            return;
        }
        else if(First == Last)
        {
            delete First;
            First = NULL;
            Last = NULL;
        }
        else
        {
            Last = Last->prev;
            delete First->prev;
            First->prev = Last;
            Last->next = First;
        }
        Count--;
    }

    void DoublyCL :: Display()
    {
        cout<<"\nElements of the linked list are : \n";

        if((First != NULL) && (Last != NULL))
        {
            do
            {
                cout<<"| "<<First->data<<" |<=>";
                First = First->next;
            }while(First != Last->next);
            cout<<"\n";
        }
    }

    int DoublyCL :: CountNode()
    {
        return Count;
    }

int main()
{
    int iRet = 0;
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Total number of nodes in the linked list are : "<<iRet<<"\n";

    return 0;
}