#include<iostream>
//using namespace std;

namespace Marvellous
{
    void Display()
    {
        std::cout<<"Inside display of Marvellous \n";
       // cout<<"Inside display of Marvellous \n";
    }
}

namespace Infosystem
{
    void Display()
    {
        std::cout<<"Inside display of Infosystem \n";
        //cout<<"Inside display of Infosystem \n";
    }
}

int main()
{
    Marvellous::Display();
    Infosystem::Display();

    return 0;
}