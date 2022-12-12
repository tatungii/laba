#include "Section.h"

Section::Section(float left, float right)
{
	this->left = left;
	this->right = right;
}

Section::Section(Section &sectionName)
{
	left = sectionName.left;
	right = sectionName.right;
}

Section::Section()
{
	cout << "���������� ����������� �� ���������.";
}

void Section::Enter()
{
	do
	{
		cout << "\n������� �������� ����� ������� �������: ";
		cin >> left;

		cout << "������� �������� ������ ������� �������: ";
		cin >> right;

		if (left >= right)
		{
			Error();
		}
		else
		{
			Print();
		}
	} while (left >= right);
}

void Section::Print()
{
	cout << "���������: [" << left << ";" << right << "].";
}

void Section::Error()
{
	cout << "\n����� ������� ������� �� ����� ���� ������ ��� ����� ������, ���������� ��� ���!";
}

float Section::Length()
{
	return(right - left);
}

Section::~Section()
{
	cout << "\n���������� ����������.";
}