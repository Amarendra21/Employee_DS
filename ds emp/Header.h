#ifndef HEADER_H
#define HEADER_H
#include<iostream>
	using namespace std;

class Employee
{
protected:
	int eid;
	char name[10];
	double salary;
public:

	Employee(int, const char *, double);
	Employee();

	int getEid();
	virtual void accept();
	virtual void display();
	virtual double calsal();
};



class Manager :public Employee
{
private:
	int empid;
	double food_all, petrol_all;
public:
	Manager();
	Manager(int, const char*, double, int, int, int, double, double);
	int getEid();
	void accept();
	void display();
	double computesalary();

};
class SalesPerson :public Employee
{
private:
	int nos;
	double comm;
public:
	SalesPerson();
	SalesPerson(int, const char*, double, int, int, int, int, double);
	int getEid();
	void accept();
	void display();
	double computesalary();
	void PayBonus();
};
#endif