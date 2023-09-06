// Practic 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Numbers {
private:
	double first_number;
	double second_number;
	double rez;
public:
	void Init()
	{
		cin >> first_number;
		cin >> second_number;
	}
	void change(int a, int b)
	{
		first_number = a;
		second_number = b;
	}
	Numbers sum()
	{
		Numbers rez;
		rez.rez = first_number + second_number;
		return rez;
	}
	Numbers MAX()
	{
		Numbers rez;
		if (first_number > second_number)
		{
			rez.rez = first_number;
		}
		else if (first_number < second_number)
		{
			rez.rez = second_number;
		}
		return rez;
	}
	void Print()
	{
		cout << "\n";
		cout << rez << endl;
	}
};
int main()
{
	int first, second;
	first = rand() % 10;
	second = rand() % 20;
	Numbers a;
	a.Init();
	cout << "Do you want to change your numbers? - 1: ";
	int change, newA, newB;
	cin >> change;
	if (change == 1)
	{
		cin >> newA;
		cin >> newB;
		a.change(newA, newB);
	}
	int choise;
	cout << "What do you want? 1 - sum; 2 - max ";
	cin >> choise;
	switch (choise)
	{
	case 1:
		Numbers rez;
		rez = a.sum();
		rez.Print();
		break;
	case 2:
		Numbers rezMAX;
		rezMAX = a.MAX();
		rezMAX.Print();
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
