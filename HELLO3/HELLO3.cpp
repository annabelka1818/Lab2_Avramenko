#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    char name[100], placeOfStudy[100];
    int age;

    cout << "Як Вас звуть?" << endl;
    cin.getline(name, 100);
    cout << "Скільки Вам років?" << endl;
    cin >> age;
    cin.ignore();
    cout << "Де Ви навчаєтеся?" << endl;
    cin.getline(placeOfStudy, 100);

    cout << "Доброго дня, " << name << "\n"
        << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп’ютером!" << "\n"
        << placeOfStudy <<" буде пишатися Вами!";
}
