// 3-c-struct-Yana-Student.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	struct subject {
		int maths;
		int physics;
		int philosophy;
	};

	struct student
	{
		char name[100];
		int age;
		subject subjects;
	};



	struct student Students[3];
	struct subject subjects[3];
	float ball = 0;


	for (int i = 0; i <= 2; i++) {
		cout << "\nВведите имя " << i + 1 << "-го студента: \t";
		cin >> Students[i].name;
		cout << "\nВведите возраст " << i + 1 << "-го студента: \t";
		cin >> Students[i].age;
		cout << "\nВведите оценку по математике " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.maths;
		cout << "\nВведите оценку по физике " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.physics;
		cout << "\nВведите оценку по философии " << i + 1 << "-го студента: \t";
		cin >> Students[i].subjects.philosophy;
		
	}

	cout << "\n\n\n";
	cout << "\t\t\tКривая таблица студентов ГЫ-ГЫ-ГЫ :) \n\n";
	cout << "----ИМЯ----" << "----ВОЗРАСТ----" << "----МАТЕМАТИКА----" << "----ФИЗИКА----" << "----ФИЛОСОФИЯ----" << "----СРЕДНИЙ БАЛЛ--" << endl;
	



	for (int i = 0; i <=2; i++) {
		ball = (Students[i].subjects.maths + Students[i].subjects.physics + Students[i].subjects.philosophy) / 3.;

		cout << "\n---" << Students[i].name << "-----------" << Students[i].age << "---------------" << Students[i].subjects.maths << "----------------" << Students[i].subjects.physics << "----------------" << Students[i].subjects.philosophy << "----------------" << ball << "\n";
	}







	system("pause");
	return 0;
}