// 4-с-files-yana-students2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "io.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
#include <windows.h>;

using namespace std;

struct abitur
{
	char name[32]; // ФИО абитуриента
	int mark[3]; // Оценки абитуриента
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	FILE *file;
	const char* file_name = "d:\\обучение\\home-works\\Yana-txt.txt";

	int size;

	cout << " Введите количество студентов: ";
	cin >> size;
	abitur *students = new abitur[size];

	{
		int i = 0;
		do {
			cout << "\nВведите имя " << i + 1 << "-го студента: \t";
			cin >> students[i].name;

			cout << "\nВведите первую оценку " << i + 1 << "-го студента: \t";
			cin >> students[i].mark[0];


			cout << "\nВведите вторую оценку " << i + 1 << "-го студента: \t";
			cin >> students[i].mark[1];


			cout << "\nВведите третью оценку " << i + 1 << "-го студента: \t";
			cin >> students[i].mark[2];



			file = fopen(file_name, "w");//открыли файл в режиме чтения записали в структуру данные файла
			fwrite(&students, sizeof(students[i]), 1, file); //Сохранение в файл блока данных
			fclose(file); //закрываем файл



			i++;
		} while (i < size);
	}

	cout << "\n\nВывод данных: " << endl;
	for (int i = 0; i < size; i++)
	{
		file = fopen(file_name, "r");
		fread(&students, sizeof(students[i]), 1, file);
		cout << endl << "Студент - " << students[i].name << endl;
		cout << "Первая оценка - " << students[i].mark[0] << '\t' << "Вторая оценка - " << students[i].mark[1] << '\t' << "Третья оценка - " << students[i].mark[2] << endl;
		fclose(file);
	}



	system("pause");
	return 0;
}