// 4-c-files-yana-letter.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "io.h"
#include "stdafx.h"
#include "locale.h"
#include "iostream"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include <windows.h>



using namespace std;


int fun1(char str[]) { //сформировать строку, записать в файл
	const char* file_name = "d:\\обучение 2\\home-works\\1.txt";
	FILE *file;
	file = fopen(file_name, "w");
	if ((file = fopen(file_name, "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	cout << "Введите строку:" << endl;
	cin >> str;
	fputs(str, file);
	fclose(file);
	return 0;
}

int fun2(char str[]) {//считать строку из файла, распечатать
	const char* file_name = "d:\\обучение 2\\home-works\\1.txt";
	FILE *file;
	file = fopen(file_name, "r");
	if ((file = fopen(file_name, "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	fgets(str, 254, file);
	cout << "Содержимое основного файла - " << str << endl;
	fclose(file);
	return 0;
}

int fun3(char str[]) {//зашифровать строку, записать в файл
	const char* file_name = "d:\\обучение 2\\home-works\\2.txt";
	FILE *file;
	file = fopen(file_name, "w");
	if ((file = fopen(file_name, "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}

	int size = strlen(str);//длина строки

	for (int i = 0; i < size; i++)
	{
		switch (*(str + i)) {
		case 'а':
			*(str + i) = 'б';
			break;
		case 'б':
			*(str + i) = 'в';
			break;
		case 'в':
			*(str + i) = 'г';
			break;
		case 'г':
			*(str + i) = 'д';
			break;
		case 'д':
			*(str + i) = 'е';
			break;
		case 'е':
			*(str + i) = 'ё';
			break;
		case 'ё':
			*(str + i) = 'ж';
			break;
		case 'ж':
			*(str + i) = 'з';
			break;
		case 'з':
			*(str + i) = 'и';
			break;
		case 'и':
			*(str + i) = 'й';
			break;
		case 'й':
			*(str + i) = 'к';
			break;
		case 'к':
			*(str + i) = 'л';
			break;
		case 'л':
			*(str + i) = 'м';
			break;
		case 'м':
			*(str + i) = 'н';
			break;
		case 'н':
			*(str + i) = 'о';
			break;
		case 'о':
			*(str + i) = 'п';
			break;
		case 'п':
			*(str + i) = 'р';
			break;
		case 'р':
			*(str + i) = 'с';
			break;
		case 'с':
			*(str + i) = 'т';
			break;
		case 'т':
			*(str + i) = 'у';
			break;
		case 'у':
			*(str + i) = 'ф';
			break;
		case 'ф':
			*(str + i) = 'х';
			break;
		case 'х':
			*(str + i) = 'ц';
			break;
		case 'ц':
			*(str + i) = 'ч';
			break;
		case 'ч':
			*(str + i) = 'ш';
			break;
		case 'ш':
			*(str + i) = 'щ';
			break;
		case 'щ':
			*(str + i) = 'ъ';
			break;
		case 'ъ':
			*(str + i) = 'ы';
			break;
		case 'ы':
			*(str + i) = 'ь';
			break;
		case 'ь':
			*(str + i) = 'э';
			break;
		case 'э':
			*(str + i) = 'ю';
			break;
		case 'ю':
			*(str + i) = 'я';
			break;
		case 'я':
			*(str + i) = 'а';
			break;
		case ' ':
			*(str + i) = ' ';
			break;
		}
	}
	
		cout << "Содержимое форматированной строки - " << str << endl;
		fputs(str, file);
		fclose(file);
		return 0;
}








int fun4(char str[]) {//расшифровать строку, записать в файл
	const char* file_name = "d:\\обучение 2\\home-works\\2.txt";
	FILE *file;
	file = fopen(file_name, "r");
	if ((file = fopen(file_name, "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	fgets(str, 255, file);
	cout << "Содержимое зашифрованного файла - " << str << endl;
	fclose(file);

	int size = strlen(str);

	for (int i = 0; i < size; i++)
	{

		switch (*(str + i)) {
		case 'а':
			*(str + i) = 'я';
			break;
		case 'б':
			*(str + i) = 'а';
			break;
		case 'в':
			*(str + i) = 'б';
			break;
		case 'г':
			*(str + i) = 'в';
			break;
		case 'д':
			*(str + i) = 'г';
			break;
		case 'е':
			*(str + i) = 'д';
			break;
		case 'ё':
			*(str + i) = 'е';
			break;
		case 'ж':
			*(str + i) = 'ё';
			break;
		case 'з':
			*(str + i) = 'ж';
			break;
		case 'и':
			*(str + i) = 'з';
			break;
		case 'й':
			*(str + i) = 'и';
			break;
		case 'к':
			*(str + i) = 'й';
			break;
		case 'л':
			*(str + i) = 'к';
			break;
		case 'м':
			*(str + i) = 'л';
			break;
		case 'н':
			*(str + i) = 'м';
			break;
		case 'о':
			*(str + i) = 'н';
			break;
		case 'п':
			*(str + i) = 'о';
			break;
		case 'р':
			*(str + i) = 'п';
			break;
		case 'с':
			*(str + i) = 'р';
			break;
		case 'т':
			*(str + i) = 'с';
			break;
		case 'у':
			*(str + i) = 'т';
			break;
		case 'ф':
			*(str + i) = 'у';
			break;
		case 'х':
			*(str + i) = 'ф';
			break;
		case 'ц':
			*(str + i) = 'х';
			break;
		case 'ч':
			*(str + i) = 'ц';
			break;
		case 'ш':
			*(str + i) = 'ч';
			break;
		case 'щ':
			*(str + i) = 'ш';
			break;
		case 'ъ':
			*(str + i) = 'щ';
			break;
		case 'ы':
			*(str + i) = 'ъ';
			break;
		case 'ь':
			*(str + i) = 'ы';
			break;
		case 'э':
			*(str + i) = 'ь';
			break;
		case 'ю':
			*(str + i) = 'э';
			break;
		case 'я':
			*(str + i) = 'ю';
			break;
		case ' ':
			*(str + i) = ' ';
			break;
		}
		
	}

	cout << "Содержимое расшифрованного файла - " << str << endl;
	const char* file_name3 = "d:\\обучение 2\\home-works\\3.txt";
	FILE *file2;
	file2 = fopen(file_name3, "w");
	if ((file = fopen(file_name3, "w")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}
	fputs(str, file2);
	fclose(file2);
	return 0;
}






int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода



	
	const char* file_name = "d:\\обучение 2\\home-works\\1.txt";
	const char* file_name2 = "d:\\обучение 2\\home-works\\2.txt";
	const char* file_name3 = "d:\\обучение 2\\home-works\\3.txt";
	char str[255] = { 0 };


	int click;
start:
	cout << "\n Меню программы:\n\t";
	cout << "1 - Сформировать с клавиатуры строку и записать в файл (строка может содержать пробелы)\n\t2 - Считать строку из файла и распечатать\n\t3 - Зашифровать строку и записать в файл\n\t4 - Расшифровать строку и записать в файл\n\t5 - Выход\n\n";


	cout << "\n Нажмите цифру, соответствующую выбранному заданию: \n";
	cin >> click;

	getchar();

	if (click == 1) {
		fun1(str);		
		getchar();
		system("cls");
		goto start;
	}
	if (click == 2) {
		fun2(str);
		getchar();
		system("cls");
		goto start;
	}
	if (click == 3) {
		fun3(str);
		getchar();
		system("cls");
		goto start;
	}
	if (click == 4) {
		fun4(str);
		getchar();
		system("cls");
		goto start;
	}
	if (click == 4) {
		fun4(str);
		getchar();
		system("cls");
		goto start;
	}
	if (click == 5) {
		cout << "Программа успешно отработала, для выхода нажмите ENTER";
		getchar();
		exit(0);
	}


	system("pause");
	return 0;
}