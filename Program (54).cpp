// Singly Circular linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE;

class SinglyCL
{
    private:            
        PNODE First;
        PNODE Last;
        int Count;

    public:

        SinglyCL();
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

    SinglyCL :: SinglyCL()
    {
        First = NULL;
        Last = NULL;
        Count = 0;
    }

    void SinglyCL :: InsertFirst(int No)
    {
       PNODE newn = NULL;
       newn = new NODE;
       
       newn->data = No;
       newn->next = NULL;

       if((First == NULL) || (Last == NULL))
       {
            First = newn;
            Last = newn;
       }
       else
       {
            newn->next = First;
            First = newn;
            Last->next = First;
       }
       Count++;
    }

    void SinglyCL :: InsertLast(int No)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;

        if((First == NULL) && (Last == NULL))
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last->next = newn;
            Last = newn;
            Last->next = First;
        }
        Count++;
    }

    void SinglyCL :: InsertAtPos(int No,int iPos)
    {
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
            PNODE temp = First;
            int i = 0;

            PNODE newn = NULL;
            newn = new NODE;

            newn->data = No;
            newn->next = NULL;

            for(i=1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
        }
        Count++;
    }    

    void SinglyCL :: DeleteAtPos(int iPos)
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

            for(i=1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            targetednode = temp->next;
            temp->next = temp->next->next;
            delete targetednode;
            Count--;
        }
    }

    void SinglyCL :: DeleteFirst()
    {
        if((First == NULL) || (Last == NULL))
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
            Last->next = First;
            Count--;
        }
       
    }

    void SinglyCL :: DeleteLast()
    {
        if((First == NULL) || (Last == NULL))
        {
            return;
        }
        else if(First == Last)
        {
            delete First;
            First = NULL;
            Last  = NULL;
        }
        else
        {
            PNODE temp = First;

            while(temp->next != Last)
            {
                temp = temp->next;
            }
            delete Last;
            Last = temp;
            Last->next = First;
        }
        Count--;
    }

    void SinglyCL :: Display()
    {
        cout<<"\nElements of the linked list are : \n";
        
        if((First != NULL) && (Last != NULL))
        {   
            do
            {
                cout<<"| "<<First->data<<" |->";
                First = First->next;
            } while (First != Last->next);
        }
    }

    int SinglyCL :: CountNode()
    {
        return Count;
    }



int main()
{
    int iRet = 0;
    SinglyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";
    

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"\nTotal number of nodes in the linked list are : "<<iRet<<"\n";

    return 0;
}