#include <iostream>

using namespace std;

int main() {
        char op;
        double num1,num2;
        cout <<"---------------------------------------------------------------------------------------------------"<<endl;
        cout << "      !........................WELCOME TO THE CALCULATOR USING C++ LANG.........................!"<<endl;
        cout <<"---------------------------------------------------------------------------------------------------"<<endl;

        cout <<endl;
        cout << "ENTER THE OPERATOR (+, -, *, /) :  ";
        cin >> op;

        cout <<endl;
        cout << "-> Enter First Number : " ;
        cin >> num1;

        cout << "-> Enter Second  Number : " ;
        cin >> num2;

        switch ( op ) {

            case '+':
                cout <<"----------------------------------------------------------"<<endl;
                cout <<"            The answer is  " << num1 <<  "+"  << num2 << "=" << (num1 + num2)<<endl; 
                cout <<"----------------------------------------------------------"<<endl;       
                break;

            case '-':
                cout <<"----------------------------------------------------------"<<endl;
                cout <<"            The answer is  " << num1 <<  "-"  << num2 << "=" << (num1 - num2)<<endl; 
                cout <<"----------------------------------------------------------"<<endl;        
                break;    

            case '*':
                cout <<"----------------------------------------------------------"<<endl;
                cout <<"            The answer is  " << num1 <<  "*"  << num2 << "=" << (num1 * num2)<<endl; 
                cout <<"----------------------------------------------------------"<<endl;       
                break;
        
            case '/':
                cout <<"----------------------------------------------------------"<<endl;
                if(num2 != 0.0)
                    cout <<"         The answer is  "<< num1 << "/" << num2 << "=" << (num1 / num2) <<endl;
                    
                else
                    cout << "    # Divide by zero situation. So division is not perform." <<endl;
                    cout <<"----------------------------------------------------------"<<endl;
                break;

            default:
                cout <<endl;
                cout << op << " is an invalid operator";        

        }
    return 0;
}