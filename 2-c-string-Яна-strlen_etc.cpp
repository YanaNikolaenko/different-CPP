// 2-c-string-Яна-strlen_etc.cpp: определяет точку входа для консольного приложения.
//

#include "stdio.h"
#include "stdafx.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include "string.h"

using namespace std;

int fun1(char *str, int b) {
	char arr[100];
	for (int i = 0; i < b; i++) {
		if (isdigit(*(str + i))) {
			*(arr + i) = *(str + i);
			cout << "значение массива - " << *(arr + i) << endl;
			/*cout << "значение массива - " << arr[1] << endl;
			cout << "значение массива - " << arr[2] << endl;*/
		}
		else {
			cout << "тут буква" << endl;
		}
		
	}
	int m = atoi(arr);
	cout << "5.2: " << arr << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[] = "п1f2";

	int b = strlen(str);
	cout << "Длина строки: " <<  b << endl;
	fun1(str, b);

	system("pause");
	return 0;
}