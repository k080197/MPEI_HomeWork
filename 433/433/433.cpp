// 433.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>
#include "time.h"


using namespace std;


class CalculateMatrix
{
public:
	void InitMatrix(float** Array, int n)
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

	void PrintMatrix(float** Array, int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << Array[i][j] << "\t";
			}
			cout << endl;
		}
	}

	int IndexOfMinSumLine(float** Array, int n)
	{
		float* sums = new float[n];
		int index = 0;
		float value = 0;

		for (int i = 0; i < n; i++)
		{
			sums[i] = 0;

			for (int j = 0; j < n; j++)
			{
				sums[i] += Array[i][j];
			}
		}

		value = sums[0];

		for (int i = 0; i < n; i++)
		{
			if (sums[i] < value)
			{
				value = sums[i];
				index = i;
			}
		}

		return index;
	}

	float** ModificateMatrix(float** Array, int n, int index)
	{
		float average = Average(Array, n);

		for (int i = 0; i < n; i++)
		{
			Array[index][i] += average;
		}

		return Array;
	}

private:
	float Average(float** Array, int n)
	{
		int sum = 0;
		int count = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i < j)
				{
					sum += Array[i][j];
					count++;
				}
			}
		}

		return sum / count;
	}
};

int main()
{
	int row;
	CalculateMatrix calc;

	cout << "Enter the size of matrix: ";
	cin >> row;

	float** Array = new float* [row];

	for (int i = 0; i < row; i++)
	{
		Array[i] = new float[row];
	}

	calc.InitMatrix(Array, row);

	calc.PrintMatrix(calc.ModificateMatrix(Array, row, calc.IndexOfMinSumLine(Array, row)), row);

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
