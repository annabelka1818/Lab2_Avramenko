#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    char name[100];
    cout << "Як Вас звуть?" << endl;
    cin.getline(name, 100);
    cout<<"Доброго дня, " << name<<"!";
}

