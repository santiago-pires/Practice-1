#include <iostream>
using namespace std;
#include <string>

bool or_operation(bool a, bool b, bool c)
{
    return (a || b || c);
}
bool and_operation(bool a, bool b, bool c)
{
    return (a && b && c);
}


int main()
{
    bool a, b, c,op;
    cout << "Enter three boolean numbers \n";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "0- OR operation\n1- AND operation \n";
    cin >> op;

    if (op == 1) {
        cout << "AND value:   " << and_operation(a, b, c)<<"\n";

    }
    if (op==0){
        cout << "OR value:   "<< or_operation(a, b, c)<<"\n";
    }
}
