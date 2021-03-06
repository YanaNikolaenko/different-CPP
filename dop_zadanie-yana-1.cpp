// dop_zadanie-yana-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "io.h"
#include "stdafx.h"
#include "locale.h"
#include <windows.h>;

using namespace std;

int fun_max (float(&arr)[6][6], int size)
{
	float max = arr[0][0];

	for (int i = 0; i < size; i++) 
	{	
		for (int j = 0; j < size; j++) 
		{
			if (arr[i][j] > max) 
			{ 
				max = arr[i][j]; 
			}
		}
	}
	cout << "максимальное значение из всех элементов в двумерном массиве - " << max << endl;
	return max;
}

int task(float(&arr)[6][6], int max, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				float result = arr[i][j] / max;
				cout << "\nЕсли " << arr[i][j] << " разделить на " << max << ", то получится - " << result << endl;
			}
		}
	}

	return 0;
}






int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	

	float arr[6][6] = 
	{
	{ 2,4,6,8,10,1 },
	{ 1,5,5,7,9,4 },
	{ 2,4,3,8,10,3 },
	{ 1,3,5,4,9,7 },
	{ 2,4,6,8,10,7 },
	{ 1,3,5,7,9,9 },
	};

	int size = sizeof(arr) / sizeof(arr[0]);


	task(arr, fun_max(arr, size), size);

	system("pause");
    return 0;
}

