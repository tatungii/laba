#include "Section.h"

/*
 *	|	������� ����� �������� Section, ���������� ��� ������������ ���� - ����� �������.	|
 *	|	� ������ ������� ������ ����� � ������ �������� �����. ����� ������������ �			|
 *	|	������� [a;b].																		|
 */

void friendly(Section& segment)
{
	cout << segment.test;
}

float operator+(Section& a, Section& b)
{
	cout << "���������� ��������� (+) ��������� �������.";
	return a.right + b.right;
}

istream& operator >> (istream& in, Section& p)
{
	cout << "\n���������� ��������� ����� (>>) ��������� �������.";
	cout << "\n������� ����� �����: ";
	in >> p.a;
	return in;
}

ostream& operator << (ostream& os, Section& p)
{
	cout << "���������� ��������� ������ (<<) ��������� �������.";
	return os << "\n�����: " << p.a << ".";
}

int main()
{
	setlocale(LC_ALL, "ru");

	Section segment;

	do
	{
		segment.Enter();

		if (segment.left >= segment.right)
		{
			segment.Error();
		}
		else
		{
			segment.Print();
		}
	} while (segment.left >= segment.right);

	segment.Length();

	friendly(segment);

	cin >> segment;
	cout << segment;

	return 0;
}