// Doubly linear linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;
}NODE, *PNODE;

class DoublyLL
{
    private:            
        PNODE First;
        int Count;

    public:

        DoublyLL();
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

    DoublyLL :: DoublyLL()
    {
        First = NULL;
        Count = 0;
    }

    void DoublyLL :: InsertFirst(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        if(First == NULL)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First->prev = newn;
            First = newn;
        }
        Count++;
    }

    void DoublyLL :: InsertLast(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        if(First == NULL)
        {
            First = newn;
        }
        else
        {
            PNODE temp = First;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            newn->prev = temp;
            temp->next = newn;  
        }
        Count++;
    }

    void DoublyLL :: InsertAtPos(int No,int iPos)
    {
        PNODE newn = NULL;

        if((iPos < 1 ) || (iPos > Count+1))
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

    void DoublyLL :: DeleteAtPos(int iPos)
    {
        if((iPos < 1 ) || (iPos > Count+1))
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
            PNODE temp = First;
            int i = 0;

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

    void DoublyLL :: DeleteFirst()
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
            First = First->next;
            delete First->prev;
            First->prev = NULL;
       }
       Count--;
    }

    void DoublyLL :: DeleteLast()
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

    void DoublyLL :: Display()
    {
       PNODE temp = First;
       cout<<"\nElements of the linked list are : \n";
       cout<<"NULL <=>";

       while(temp != NULL)
       {
            cout<<"| "<<temp->data<<" |<=>";
            temp = temp->next;
       }
       cout<<"NULL \n";
    }

    int DoublyLL :: CountNode()
    {
        return Count;
    }

int main()
{
    int iRet = 0;

    DoublyLL obj;

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