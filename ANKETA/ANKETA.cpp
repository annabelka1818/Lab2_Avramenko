#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	char lastName[100], firstName[100],
		secondName[100], gender[100],
		birthDate[100], address[100],
		phoneNumber[100], placeOfStudy[100],
		group[100], hobby[100];

	cout << "Прізвище : ";
	cin.getline(lastName, 100);
	cout << "Ім'я :";
	cin.getline(firstName, 100);
	cout << "По батькові : ";
	cin.getline(secondName, 100);
	cout << "Стать : ";
	cin.getline(gender, 100);
	cout << "Дата народження : ";
	cin.getline(birthDate, 100);
	cout << "Адреса : ";
	cin.getline(address, 100);
	cout << "Номер телефону : ";
	cin.getline(phoneNumber, 100);
	cout << "Місце навчання : ";
	cin.getline(placeOfStudy, 100);
	cout << "Група : ";
	cin.getline(group, 100);
	cout << "Хоббі : ";
	cin.getline(hobby, 100);


	cout << "\t\t\tАНКЕТА" << endl << endl;

	cout << "Прізвище : " << lastName << "\t" << "Ім'я : " << firstName << "\t" << "По батькові : " << secondName << endl;
	cout << "Номер телефону : " << phoneNumber << "\t" << "Хоббі  : " << hobby << endl;
	cout << "Місце навчання : " << placeOfStudy << "\t" << "Група  : " << group << endl;
	cout << "Дата народження : " << birthDate << "\t" << "Стать  : " << gender << endl;
	cout << "Місце навчання : " << placeOfStudy << endl;
}