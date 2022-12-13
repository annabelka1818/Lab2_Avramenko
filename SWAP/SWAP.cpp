#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    
    cout << "a= " << a << " ";
    cout << "b= " << b;
    
    temp = a;
    a = b;
    b = temp;

    cout << endl;
    cout << "a= " << a << " ";
    cout << "b= " << b;
}
