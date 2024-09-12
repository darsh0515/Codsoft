//TASK NO 1
#include<iostream>
using namespace std;
int main()
{
    int a=rand() % 100+1;
    int n;
    cout<<"Let's play a number guessing game"<<endl;
    while(n!=a)
    {
        cout<<"Enter your guess";
        cin>>n;
        if(n>a)
        {
            cout<<"The number is lower than the given number"<<endl;
        }
        else if(n<a)
        {
            cout<<"The number is higher than the given number"<<endl;
        }
        else
        {
            cout<<"You found the number"<<endl;
        }
    }
    

}