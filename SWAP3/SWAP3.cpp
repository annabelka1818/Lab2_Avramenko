#include <iostream>
using namespace std;
int main()
{
    int a, b, c, temp1, temp2;

    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    cout << "a= " << a << " ";
    cout << "b= " << b << " ";
    cout << "c= " << c;

    temp1 = b;
    b = a;
    temp2 = c;
    c = temp1;
    a = temp2;

    cout << endl;
    cout << "a= " << a << " ";
    cout << "b= " << b << " ";
    cout << "c= " << c;
}
