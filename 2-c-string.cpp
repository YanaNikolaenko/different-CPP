// newagain.cpp: определяет точку входа для консольного приложения.
//

#include "stdio.h"
#include "stdafx.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


	char *string = new char[100];

	char result[50] = {0};

	int marker = 0;

	cout << "Введите строку символов:" << endl;

	cin >> string;

	int i = strlen(string);

	if ((i % 5) == 0) {//проверяем кратность

		for (int e = 0; e < i; e++) { //запускаем цикл, ищем скобки
			switch (*(string + e)) 
			{
			case '(':
			case ')':
			case '[':
			case ']':
			case '{':
			case '}':
			{
				result[marker] = string[e];
				marker++;
				break;
			}
			default:
				cout << "Скобок в веденой строке не обнаружено";
				break;
			}
		}
		
		cout << "Строка:" << result << endl;
		cout << "Количество элементов по совпадению:" << strlen(result) << endl;

		system("pause");


		return 0;
	}
}
