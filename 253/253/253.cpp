// 253.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>
#include "time.h"


using namespace std;

void InitMatrix(int** Array, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Array[i][j] = rand() % 10;// -10;
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

bool ZeroSearch(int** Array, int n)
{
	int count;

	for (int i = 0; i < n; i++)
	{
		count = 0;

		for (int j = 0; j < n; j++)
		{
			count += Array[i][j] == 0 ? 1 : 0;
		}

		if (count > 1) return true;
	}

	return false;
}

int Sum(int** Array, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i <= j)
				sum += Array[i][j];
			//cout << sum << endl;
		}
	}

	return sum;
}

int main()
{
	int row;

	cout << "Enter the size of matrix: ";
	cin >> row;

	int** Array = new int* [row];

	for (int i = 0; i < row; i++)
	{
		Array[i] = new int[row];
	}

	InitMatrix(Array, row);

	if (ZeroSearch(Array, row))
	{
		cout << "In one of the columns were found more than 2 zeroes, sum: " << Sum(Array, row) << endl;
	}
	else
	{
		cout << "2 or more zeroes were not found." << endl;
	}

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
