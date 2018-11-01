#include<iostream>
#include"Header.h"
using namespace std;
class node1
{
private:
	Employee * e;
	node1 * next;
public:
	node1(Employee*);
	void setdata(Employee*);
	Employee* getdata();
	node1 *getnext();
	void setnext(node1 *);
};
class linkedlist1
{
private:
	node1 * head;

public:
	linkedlist1();
	bool insert(Employee*);
	void Salespersondisplay();
	void managerdisplay();
	void sortrecord();
	//node1* gethead();
	////bool reversell();
	//void recursrevll(node1*);
	//void recursrevlladd(node1*);
	void display();
	/*static void count();
	~linkedlist1();*/
};