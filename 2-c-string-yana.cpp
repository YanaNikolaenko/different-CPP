#include <iostream>
#include "stdio.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
using namespace std;


int fun1(char *string, int size) {


	char mass[99] = {0};
	int marker = 0;
	int count = 0;



	if (size % 5==0) 
	{


		for (int i = 0; i <= size; i++) {

			if (string[i] == '(' || string[i] == ')' || string[i] == '{' || string[i] == '}' || string[i] == '[' || string[i] == ']') 
			{
				mass[marker] = string[i];
				marker++;
			}
			/*else 
			{
				cout << "В строке нет никаких скобок";
			}*/
		}

		count = sizeof(mass) / sizeof(mass[0]);
	}

	else 
	{
		cout << "Введенная строка НЕ кратка 5" << endl;
	}



	//cout << "Количество скобок всех видов: " << count << endl;
	cout << "Вот моя исходная строка: " << string << endl;
	cout << "Вот моя преобразованная строка: " << mass << endl;
	return 0;
}





int main()
{
	setlocale(LC_ALL, "Russian");

	char *string = new char[100];


	cout << "Введите строку:" << endl;
	cin >> string;


	if (strlen(string) > 100)
	{
		cout << "Вы превысили допустимое значение длинны строки";
		exit(1);
	}


	int size = strlen(string);

	fun1(string, size);

	delete string;
	system("pause");
	return 0;
}