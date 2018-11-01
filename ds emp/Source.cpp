#include"Header.h"

Employee::Employee()
{}
Employee::Employee(int eid, const char * name, double salary)
{
	this->eid = eid;
	strcpy(this->name, name);
	this->salary = salary;
}

int Employee::getEid()
{
	return this->eid;
}

void Employee::display()
{
	cout << "\n Eid::" << this->eid << endl;
	cout << "\n Name::" << this->name << endl;
	cout << "\n Salary::" << this->salary << endl;
}
void Employee::accept()
{
	cout << "\n Enter Eid::";
	cin >> this->eid;
	cout << "\n Name::";
	cin >> this->name;
	cout << "\n Salary::";
	cin >> this->salary;
}

double Employee::calsal()
{
	return salary;
}
Manager::Manager()
{
	this->food_all = 0.0;
	this->petrol_all = 0.0;
}
//Manager::Manager(int empid, const char* nm, double salary, int day, int month, int year, double food_all, double petrol_all)
//	: Employee(empid, nm, salary, day, month, year)
//{
//	this->food_all = food_all;
//	this->petrol_all = petrol_all;
//}
int Manager::getEid()
{
	return this->eid;
}
void Manager::accept()
{
	Employee::accept();
	cout << "\n Enter the food all::";
	cin >> this->food_all;
	cout << "\n Enter the petrol all::";
	cin >> this->petrol_all;
}
void Manager::display()
{

	Employee::display();
	cout << "\n Food All::" << this->food_all;
	cout << "\n Petrol All::" << this->petrol_all;
}
SalesPerson::SalesPerson()
{
	this->nos = 0;
	this->comm = 0.0;
}
int SalesPerson::getEid()
{
	return this->eid;
}
//SalesPerson::SalesPerson(int empid, const char*nm, double salary, int day, int month, int year, int nos, double comm)
//	: Employee(empid, nm, salary, day, month, year)
//{
//	this->nos = nos;
//	this->comm = comm;
//}

void SalesPerson::accept()
{
	Employee::accept();
	cout << "\n Enter number of sales::";
	cin >> this->nos;
	cout << "\n enter the commission::";
	cin >> this->comm;
}

void SalesPerson::display()
{
	Employee::display();
	cout << "\n Nos::" << this->nos;
	cout << "\n Comm::" << this->comm;
}
