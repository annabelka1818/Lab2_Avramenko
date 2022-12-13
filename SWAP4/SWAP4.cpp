#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, temp1, temp2, temp3;

    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    cout << "d= ";
    cin >> d;

    cout << "a= " << a << " ";
    cout << "b= " << b << " ";
    cout << "c= " << c << " ";
    cout << "d= " << d << " ";
    
    temp1 = b;
    b = a;
    temp2 = c;
    c = temp1;
    temp3 = d;
    d = temp2;
    a = temp3;

    cout << endl;
    cout << "a= " << a << " ";
    cout << "b= " << b << " ";
    cout << "c= " << c << " ";
    cout << "d= " << d << " ";
}