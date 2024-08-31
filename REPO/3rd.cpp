// Mini Calcultaor Program 

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<< "enter the first number : ";
    cin >> a;
    cout << "enter the second number : ";
    cin>>b;
    char op;
    cout << "enter the operator (only +,-,*,/,%) ";
    cin>>op;
    switch(op){
        case '+':cout << a+b << endl;
        break;
        case '-': cout << a-b << endl;
        break;
        case '*': cout << a*b << endl;
        break;
        case '/': cout << a/b << endl;
        break;
        default : cout << a%b << endl ;
    }
      cout << "Thanks for using mini calculator"<< endl; 

}