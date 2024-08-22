//TASK NO 2
#include <iostream>
using namespace std;
int main()
{
    double a,b;
    char operation;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation you want to perform"<<" ";
    cin>>operation;
    switch(operation){
        case '+':
            cout<<"Result:"<<a<<"+"<<b<<"="<<a+b;
            break;
        case '-':
            cout<<"Result:"<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<"Result:"<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':
            cout<<"Result:"<<a<<"/"<<b<<"="<<a/b;
            break;
        default:
            cout<<"Invalid operation, select from +,-,/,*";
            break;
    }
    return 0;
}
