#include<iostream>
#include"Header1.h"
using namespace std;
node1::node1(Employee *e)
{

	this->e = e;
	this->next = NULL;

}
void node1::setdata(Employee *e)
{
	this->e = e;
}
Employee* node1::getdata()
{
	return this->e;
}
void node1::setnext(node1 * next)
{
	this->next = next;
}
node1* node1::getnext()
{
	return this->next;
}

linkedlist1::linkedlist1()
{
	head = NULL;
}
bool linkedlist1::insert(Employee *e)
{
	node1 * newnode = new node1(e);
	if (newnode == NULL)
	{
		return false;
	}
	if (head == NULL)
	{
		head = newnode;
		return true;
	}
	else
	{
		node1* temp = head;
		while (temp->getnext() != NULL)
		{
			temp = temp->getnext();
		}
		temp->setnext(newnode);
		return true;
	}
}
void linkedlist1::Salespersondisplay()
{
	node1* temp = head;
	while (temp != NULL)
	{
		Employee *e = temp->getdata();
		if (typeid(*e)==typeid(SalesPerson))
		{
			e->display();
		}
		
		temp = temp->getnext();
	}
	cout << "\n";
}
void linkedlist1::managerdisplay()
{
	node1* temp = head;
	while (temp != NULL)
	{
		Employee *e = temp->getdata();
		if (typeid(*e) == typeid(Manager))
		{
			e->display();
		}

		temp = temp->getnext();
	}
	cout << "\n";
}
void linkedlist1::display()
{
	node1* temp = head;
	while (temp != NULL)
	{
		Employee *e = temp->getdata();
		e->display();
		temp = temp->getnext();
	}
	cout << "\n";
}
void linkedlist1::sortrecord()
{
	node1* temp = head;
	cout << "IN sorting";
	while (temp->getnext() != NULL)
	{
		node1* temp1 = head;
		while (temp1->getnext()!= NULL)
		{
			Employee *e =temp1->getdata();
			cout << e->getEid();
			if (temp1->getdata()->getEid() > temp1->getnext()->getdata()->getEid())
			{
				Employee *e1 = temp1->getdata();
				temp1->setdata(temp1->getnext()->getdata());
				temp1->getnext()->setdata(e1);
			}
			temp1=temp1->getnext();
		}
		temp = temp->getnext();
	}
}