#include "Section.h"
#include "stdlib.h"

/*
 *	|	Создать класс отрезков Section, содержащий два вещественных поля - концы отрезка.	|
 *	|	В классе описать методы ввода и вывода значений полей. Вывод организовать в			|
 *	|	формате [a;b].																		|
 */

void friendly(Section& segment)
{
	cout << segment.test;
}

float operator+(Section& a, Section& b)
{
	return  max(a.right, b.right) - min(a.left, b.left);
}

istream& operator >> (istream& in, Section& p)
{
	cout << "\nПерегрузка оператора ввода (>>) выполнена успешна.";
	cout << "\nВведите любое число: ";
	in >> p.a;
	return in;
}

ostream& operator << (ostream& os, Section& p)
{
	cout << "Перегрузка оператора вывода (<<) выполнена успешна.";
	return os << "\nЧисло: " << p.a << ".";
}

int main()
{
	setlocale(LC_ALL, "ru");

	Section segment;

	segment.Enter();

	segment.Length();

	friendly(segment);

	cin >> segment;
	cout << segment;

	return 0;
}