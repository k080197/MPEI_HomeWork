// 521.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 5.2.2.13 Имеются сведения об экспортируемых товарах: наименование,
//          страна-экспортер, срок поставки, и количество товара.
//          Вывести страны, в которые должен быть поставлен данный 
//          товар до 1 июля.

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Product
{
public:
	string Name;
	string Country;
	int Count;
	int Month;
	int Day;
};

class ImportCountry
{
public:
	string Name;
	int ProductsNumber;
	Product* products;

	ImportCountry(string name, int productsValue)
	{
		Name = name;
		ProductsNumber = productsValue;
		products = new Product[ProductsNumber];
	}
};

int main()
{
	int productNumber = 3;
	Product* product = new Product[productNumber];

	cout << "Input the name, country, count, month and day of products: ";

	for (int i = 0; i < productNumber; i++)
	{
		cin >> product[i].Name >> product[i].Country >> product[i].Count >> product[i].Month >> product[i].Day;
	}

	const int cuntriesNumber = 5;
	ImportCountry* importCountry[cuntriesNumber] =
	{
		new ImportCountry("Russia", 2),
		new ImportCountry("China", 2),
		new ImportCountry("USA", 2),
		new ImportCountry("France", 2),
		new ImportCountry("Australia", 2)
	};


	for (int i = 0; i < cuntriesNumber; i++)
	{
		cout << "Select a products for " << importCountry[i]->Name << ": " << endl;

		for (int j = 0; j < importCountry[i]->ProductsNumber; j++)
		{
			cout << "Select a product: " << endl;
			for (int k = 0; k < productNumber; k++)
			{
				cout << k << " - " << product[k].Name << endl;
			}

			int value;
			cin >> value;
			importCountry[i]->products[j] = product[value];
		}
	}

	cout << "Select a product: " << endl;
	for (int i = 0; i < productNumber; i++)
	{
		cout << i << " - " << product[i].Name << endl;
	}

	int prod;

	cin >> prod;

	cout << "Countries where this product will be sent before july 1st." << endl;

	for (int i = 0; i < cuntriesNumber; i++)
	{
		if (product[prod].Month < 7 && product[prod].Name == importCountry[i]->products[i].Name)
		{
			cout << importCountry[i]->Name << endl;
		}
	}

	system("pause");
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
