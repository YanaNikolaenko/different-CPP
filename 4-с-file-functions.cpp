// 4-с-file-functions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "locale.h"
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;



void functions() 
{



	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода



	FILE *file=NULL;
	char disk[] = "h:\\";//тут можно указать путь куда сохранять файл, если хотите указать папку - создайте ее заранее!!!!


	//1. fprintf() - fscanf - запись в файл и чтение из файла - ВНИМАНИЕ ДО ПЕРВОГО ПРОБЕЛА!!!!
	{
		char file_dir[50] = {0}; //тут будет храниться полный путь до файла
		char filename[] = "1.txt";
		memcpy(file_dir, disk, strlen(disk)); //формируем путь для сохранение файла
		strcat(file_dir, filename);//формируем путь для сохранение файла
		char string[50] = { 0 };
		

		//1.1 Запись в файл
		{
			file = fopen(file_dir, "w");//открыли файл в режиме записи записали в структуру данные файла
			fprintf(file, "%s", "задачка #1");//фукнция записывает в файл данные по шаблону
			fclose(file); //закрываем файл
			cout << "1.1 - Записали в файл - " << file_dir << " : задачка #1" << endl;
		}
		
		//1.2 Чтение из файла
		{
			file = fopen(file_dir, "r");//открыли файл в режиме чтения записали в структуру данные файла
			fscanf(file, "%s", string);//фукнция cчитывает из файл в строку
			fclose(file); //закрываем файл
			cout << "1.2 - Содержимое файла - "<< file_dir <<" : "<<string<<endl;
		}

	}


	//2. fputs - fgets - запись в файл и чтение из файла ВНИМАНИЕ ВСЕЙ СТРОКИ ВКЛЮЧАЯ ПРОБЕЛЫ И ТАРКЕТКИ ПЕРЕВОДА СТРОКИ
	{
		char file_dir[50] = { 0 }; //тут будет храниться полный путь до файла
		char filename[] = "2.txt";
		memcpy(file_dir, disk, strlen(disk)); //формируем путь для сохранение файла
		strcat(file_dir, filename);//формируем путь для сохранение файла
		char string[50] = { 0 };



		//2.1 запись в файл строки
		{
			file = fopen(file_dir, "w");//открыли файл в режиме чтения записали в структуру данные файла
			fputs("задачка #2", file);
			fclose(file); //закрываем файл
			cout << "2.1 - Записали в файл - " << file_dir << " : задачка #2" << endl;
		}

		//2.2 чтение из файл строки
		{
			file = fopen(file_dir, "r");//открыли файл в режиме чтения записали в структуру данные файла
			fgets(string,50, file); //считывает 50 символов из файла file в строку string
			cout << "2.2 - Содержимое файла - " << file_dir << " : " << string << endl;
			fclose(file); //закрываем файл
		}

	}



	//3 побитовое-блочное чтение данных из файла и запись в файл (структуры) 
	//Данный способ отлично подходит для записи в файл структур и чтение структур из файлов
	{
		char file_dir[50] = {0}; //тут будет храниться полный путь до файла
		char filename[] = "students.txt";
		memcpy(file_dir, disk, strlen(disk)); //формируем путь для сохранение файла
		strcat(file_dir, filename);//формируем путь для сохранение файла
		char string[50] = { 0 };
		cout << "3 - Содержимое файла - " << file_dir<< endl;
		


		struct abitur
		{
			char name[32]; // ФИО абитуриента
			int mark[3]; // Оценки абитуриента

		} student1 = {
			"Muhammed",
			{4,5,6}

		},student2 = {
			"Irina",
			{ 4,5,6 }

		},student3 = {
			"Yana",
			{ 4,5,6 }
		}, stud;

	

		//Записываем две записи в файл типа структуры
		{
			file = fopen(file_dir, "w");//открыли файл в режиме чтения записали в структуру данные файла
			fwrite(&student1, sizeof(student1), 1, file); //Сохранение в файл блока данных
			fwrite(&student2, sizeof(student2), 1, file); //Сохранение в файл блока данных
			fclose(file); //закрываем файл
		}


		//Считываем 1 запись из файла типа структуры
		{
			file = fopen(file_dir, "r");//открыли файл в режиме чтения записали в структуру данные файла
			fread(&stud, sizeof(student1), 1, file);//Читаем блок дан.
			fclose(file); //закрываем файл
			cout << stud.name << endl;
			cout << stud.mark[0] << endl;
		}
		
	}


}







int main()
{

	functions();



	system("pause");
    return 0;
}

