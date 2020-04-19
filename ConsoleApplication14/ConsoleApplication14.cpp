#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <cstring>
#include <sstream>
using namespace std;

void task1()
{
	string symbol;
	cout << "Enter something: ";
	getline(cin >> ws, symbol);
	symbol.erase(0, 1);
	symbol.erase(symbol.size() - 1);
	cout << "Without 1st and 2nd symbol: " << symbol;
}

void task2()
{
	string Text;
	string ToReplace = "я";
	string ReplaceWith = " ";
	cout << "Enter something: ";
	getline(cin >> ws, Text);
	cout << "Original string: \t" << Text << endl;
	Text.replace(Text.find(ToReplace), ToReplace.length(), ReplaceWith);
	cout << "After firtst replace: \t" << Text << endl << endl;
	cout << "After second replace: \t";
	for (int i = 0; Text[i] != 0; i++)
	{
		Text[i]++;
		cout << Text[i];
	}
	cout << endl;
}

void task3()
{
	string Text;
	size_t first;
	string second;
	cout << "Enter sentence: ";
	getline(cin >> ws, Text);
	first = Text.find(' ');
	second = Text.substr(0, first);
	Text.replace(Text.begin(), Text.begin() + first, Text.substr(Text.rfind(' ') + 1));
	Text.replace(Text.begin() + Text.rfind(' ') + 1, Text.end(), second);
	cout << Text << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int task;
	cout << "Choose your task (available 1, 2, 3): ";
	cin >> task;
	switch (task)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	}
	return 0;
}