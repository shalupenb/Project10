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
class Student
{
	string name;
	int age;
public:
	Student()
	{}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
};
class Academy
{
	Student* group;
	int count;
public:
	Academy()
	{}
};

int main()
{
	Person obj2;
	Point obj2;

	int mas[5]{ 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}