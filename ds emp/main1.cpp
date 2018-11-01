#include<iostream>
#include"Header1.h"
#include"Header.h"
#include<conio.h>
using namespace std;
int main()
{
	int eid;
	linkedlist1 l1;
	int ch, cho;
	char w = 'y';
	while (1)
	{
		cout << "\n 1.add employee\n 2.Display details of salesperson\n 3Display details of manager \n 4.sort records\n 5.Display Record";
		cin >> ch;
		switch (ch)
		{
		case 1:
			do
			{
				cout << "\n 1.Manager \n 2.salesperson";
				cin >> cho;
				switch (cho)
				{
				case 1:
				{
					Employee * e = new Manager();
					e->accept();
					l1.insert(e);
				}
				break;

				case 2:
					Employee * e = new SalesPerson();
					e->accept();
					l1.insert(e);
					break;
				}
				cout << "do you want to add more records?";
				cin >> w;
			} while (w == 'y');
			break;
		case 2:
			l1.Salespersondisplay();
			break;
		case 3:
			l1.managerdisplay();
			break;
		case 4:
			cout << "IN sorting";
			l1.sortrecord();
			break;
		case 5:
			l1.display();
			break;
		}
	}
	//Employee e;
	//l1.insert(&e);
	//Employee e1;
	//l1.insert(&e1);
	//l1.display();
	//Employee e2;
	//l1.insert(&e2, 2);
	//l1.display();
	////l1.delByPos(1);
	////l1.display();
	//cout << "enter employee id to be deleted";
	//cin >> eid;
	//l1.delByVal(eid);
	//l1.display();
	_getch();
	return 0;

}