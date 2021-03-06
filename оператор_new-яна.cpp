// оператор_new-яна-двухмерный_массив.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int parent = 0;
	int child = 0;
	cout<<"Введите размер родительского массива:"<<endl;
	cin>>parent;
	cout<<"Введите размер дочернего массива:"<<endl;
	cin>>child;

	int **mass = new int*[parent]; //создала массив указателей и выделила под него память

	for (int i = 0; i < parent; i++) {
		mass[i] = new int[child]; //создаю дочерние массивы и выделяю под них память
	}
	/////////////////////////////////////////////

	for (int i = 0; i < parent; i++) {
		for (int j = 0; j < child; j++) {

			mass[i][j] = i + j + 1; /// заполняю массивы
			cout<<mass[i][j]<<" ";
		}
		cout<<endl;
	}

	///////////////////////// удаление ОП
	for (int i = 0; i < parent; i++) {
		delete[] mass[i]; //удалила каждый дочерний массив
	}

	delete[] mass; //удалила родительский массив
	return 0;

	system("pause");
}
