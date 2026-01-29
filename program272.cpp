#include<iostream>
using namespace std;

// Approach 3 : Using recurssion

void Display()
{
   // auto int i = 1; error 

    auto  i = 1;

    if(i<= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display(); // recursive call 
    }
}

int main()
{
    Display();

    return 0;
}