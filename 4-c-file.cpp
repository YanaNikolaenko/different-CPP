// 4-c-file.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "locale.h"
/* Режимы которые можно использовать при работе с файлом
w – запись в текстовом режиме; если файла с заданным
именем нет, то он будет создан; если такой файл
существует, то перед открытием прежняя информация
уничтожается;
r – файл открывается только для чтения в текстовом
режиме; если такого файла нет, то возникает ошибка;
a – файл открывается в текстовом режиме для добавления в
его конец новой информации;
r+, w+, a+ – файл открывается для редактирования данных,
возможны и запись, и чтение информации;
t – файл открывается в текстовом режиме (используется по
умолчанию);
b – файл открывается в бинарном режиме ;
rb, wb, ab, r+b, w+b, a+b – аналогично, но файл открывается в
двоичном режиме.
*/



/*
При открытии файла в режимах r, rb, r+,
r+b индикатор позиции устанавливается
на начало файла, а в случае, если файл не
существует – неудача;
 При открытии файла в режимах a, ab, a+,
a+b создается новый файл; если файл уже
существует индикатор позиции
устанавливается на конец файла;
 При открытии файла в режимах w, wb, w+,
w+b создается новый файл; если файл
уже существует, то его содержимое
стирается, а индикатор позиции
устанавливается на начало файла.
*/


/* Открыаем файл
FILE *f;
f = fopen ("d:\\work\\Dat.txt", "w");
//либо
FILE *f = fopen ("d:\\work\\Dat.txt", "w");
*/


using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	FILE *f;
	char string[50];



	/* открытие для присоединения */
	if ((f = fopen("h:\\Dat.txt", "w+")) == NULL) 
	{
		printf("Cannot open directory file.");
		exit(1);
	}

	cout << "Введите данные в файл:" << endl;
	cin >> string;

	fprintf(f, "%s", string);


	fclose(f);

	


	/* открытие для присоединения */
	if ((f = fopen("h:\\Dat.txt", "r+")) == NULL)
	{
		printf("Cannot open directory file.");
		exit(1);
	}

	//cout << "Введите данные в файл:" << endl;
	
	fscanf(f, "%s", string);
	cout << string;
	fclose(f);






	system("pause");

    return 0;
}

