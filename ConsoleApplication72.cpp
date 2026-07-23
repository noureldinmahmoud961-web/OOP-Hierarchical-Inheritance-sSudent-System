#include <iostream>
using namespace std;

class person {
private:
	int age;
	string name;
public:
	person(string n,int a) {
		name = n;
		age = a;
	}
	void print() {
		cout << "your name is:" << name << endl;
		cout << "your age is:" << age << endl;
	
	}
};

class student:public person {
private :
	int grade;
public:
	student(string n, int a,int g):person(n,a) {
		grade = g;
	}
	void print() {
		person::print();
		cout << "your grade is:" << grade << endl;
	}
};

class employee :public person {
private:
	int id, salary;
public:
	employee(string n, int a, int i, int sal) :person(n, a) {
		id = i;
		salary = sal;

	}

	void print() {
		person::print();
		cout << "your id is:" << id << endl;
		cout << "your salary is:" << salary << endl;
	}

};


int main() {
	person ob1("nour",19);
	cout << "============person===============" << endl;
	ob1.print();
	cout << "\n============student==============" << endl;
	student ob2("ali", 20, 90);
	ob2.print();
	cout << "\n============employee=============" << endl;
	employee ob3("body", 18, 692500428,20000);
	ob3.print();

	return 0;
}