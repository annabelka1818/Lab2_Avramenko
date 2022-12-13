#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int number,result;

	cout << "Задумайте число." << endl;
	cout << "Додайте до задуманого числа 10." << endl;
	cout << "Помножити отриманий результат на 2." << endl;
	cout << "Відняти 40." << endl;
	cout << "Додати до отриманого результату 80." << endl;
	cout << "Відняти 60." << endl;
	cout << "Помножити 2." << endl;
	cout << "Що вийшло в результаті: ";
	cin >> result;

	number = (((result / 2 + 60) - 80) + 40) / 2 - 10;

	cout << "Загадане число: " << number;
}
