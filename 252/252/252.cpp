// 252.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include "time.h"

using namespace std;

void InitMatrix(int** Array, int n, int m)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Array[i][j] = rand() % 20 - 10;
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void MatrixChange(int** Array, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		Array[i][0] += Array[i][0] < 0 ? Array[i][m - 1] : 0;

		for (int j = 1; j < m; j++)
		{
			Array[i][j] += Array[i][j] < 0 ? Array[i][j - 1] : 0;
		}
	}
}

void WriteMatrix(int** Array, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int row, col, number;

	cout << "Enter the number of lines: ";
	cin >> row;
	cout << "Enter the number of columns: ";
	cin >> col;

	int** Array = new int*[row];

	for (int i = 0; i < col; i++)
	{
		Array[i] = new int[col];
	}
    
	InitMatrix(Array, row, col);
	MatrixChange(Array, row, col);
	WriteMatrix(Array, row, col);

	system("Pause"); 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
