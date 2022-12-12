#include "Section.h"
#include "stdlib.h"

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
	return  max(a.right, b.right) - min(a.left, b.left);
}

istream& operator >> (istream& in, Section& p)
{
	in >> p.left>>p.right;
	return in;
}

ostream& operator << (ostream& os, Section& p)
{
	return os << "\n����� ������� �������: " << p.left << "." << "\n������ ������� �������: " << p.right << ".";
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