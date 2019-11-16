#include "pch.h"
#include <iostream>
#include <fstream>



using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Русский текст в консоли" << endl;


	ifstream file("D:\\Документы\\Проект\\Обработка данных\\LOG.TXT");
	if (file.is_open())
			cout << "Файл открыт\n\n" << endl;
		else
		{
			cout << "Файл не открыт\n\n" << endl;
			return -1;
	}

	int maximum = 0;

	int counter = 0;

	for (int i = 0; !file.eof(); i++)
	{
		file.seekg(counter, ios_base::beg);

		int n = 20;

		char* buffer = new char[n + 1];
		buffer[n] = 0;
		file.getline(buffer, n, '.');
		int pos = file.tellg();

		int res = 0;

		for (int i = 0; buffer[i]; i++)
		{
			res = res * 10 + (buffer[i] - 48);
		}

		if (res > maximum)
			maximum = res;

		cout << res << endl;

		counter = pos + 4;
	}

	cout << "###############################################" << endl;

	cout << "Максимальное значение:" << maximum << " г " <<  endl;


	cout << "###############################################" << endl;

		system("pause");
}