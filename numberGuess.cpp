#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int randomnum;
    randomnum = rand()%100 + 1;
    int gusse;

    cout <<"---------------------------------------------------------------------------------------------------"<<endl;
    cout<< "   !..........................WELCOME TO THE NUMBER GUESSING GAME............................! "<< endl;
    cout <<"---------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<< "-> The numbers between 1 to 100\n";
    cout<< "-> Now gusse the number:- ";
    cin>> gusse;

    while (gusse != randomnum)
    {
        if(gusse > randomnum)
        {
            cout<<endl;
            cout<< "    # You enterd too high number, try a smaller number. "<<endl;
        }
        
        else{
            cout<<endl;
            cout<< "    # You enterd too low number, try a larger number. "<<endl;
        }
        cin>> gusse;
    }
    cout <<"---------------------------------------------------------------------------------------------------------"<<endl;
    cout<< "!.........................CONGRATULATIONS YOU GOT THE NUMBER. SO YOU WIN THE GAME.....................!"<<endl;
    cout <<"---------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"-> The number was gussed by computer itself. That is "<< randomnum <<endl;
    
    
    return 0;
}    