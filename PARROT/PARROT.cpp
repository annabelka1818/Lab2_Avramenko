using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    char str[100];
    cout << "Введіть будь-який рядок" << endl;
    cin.getline(str, 100);
    cout << str;
}
