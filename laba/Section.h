#pragma once
#include <iostream>
using namespace std;
class Section
{
	friend void friendly(Section& segment);

public:
	float left;
	float right;
	Section(float left, float right);
	Section(Section &sectionName);
	Section();
	void Enter();
	void Print();
	void Error();
	float Length();
	~Section();
};