#include <iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << "X - " << x << endl;
		cout << "Y - " << y << endl;
	}
};
class Person
{
	string name;
	int age;
public:
	Person()
	{
		name = nullptr;
		age = 0;
	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name - " << name << endl;
		cout << "Age - " << age << endl;
	}
};

int main()
{

}