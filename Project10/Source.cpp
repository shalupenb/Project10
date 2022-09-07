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

int main()
{

}