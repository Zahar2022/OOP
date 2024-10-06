// OOPLabFraction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include "classFraction.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	Fraction a = a.InputFraction();
	cout << std :: setprecision(5) << a.ConvertFraction() << '\n';
	Fraction b = b.InputFraction();
	cout << std :: setprecision(5) << b.ConvertFraction() << '\n';
	cout << "a + b = ";
	(a + b).OutputFraction();
	cout << "a - b = ";
	(a - b).OutputFraction();
	cout << "a * b = ";
	(a * b).OutputFraction();
	cout << "a / b = ";
	(a / b).OutputFraction();
	cout << "a > b = " << ((a > b) ? "True" : "False") << "\n";
	cout << "a < b = " << ((a < b) ? "True" : "False") << "\n";
	cout << "a == b = " << ((a == b) ? "True" : "False") << "\n";
	cout << "a != b = " << ((a != b) ? "True" : "False") << "\n";
	cout << "a^2 = ";
	(a ^ (2)).OutputFraction();
	cout << "a^2 = ";
	(a ^ (-2)).OutputFraction();
	cout << "a^2 = ";
	(a ^ (5)).OutputFraction(); 

	

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
