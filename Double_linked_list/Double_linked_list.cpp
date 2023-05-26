#include <iostream>
#include <string>
using namespace std;

class node {
public:
	int nomhs;
	string name;
	node* next;
	node* prev;
};

class doublelinkedlist {
private:
	node* start = NULL;
public:
	void addnode();
	bool search(int rollno, node** previous, node** current);
	bool deletenode(int rollno);
	bool listempty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchdata();
};

void doublelinkedlist::addnode() {
	int nim;
	string nm;
	cout << "\nenter the roll number of the student: ";
	cin >> nim;
	cout << "\nenter the name of the student: ";
	cin >> nm;

	node* newnode = new node(); //step1
	newnode->nomhs = nim; //step2
	newnode->name = nm; //step2

	/*insert a node in the beginning of a doubly linked list*/
	if (start == NULL || nim <= start->nomhs) { //check if data null
		if (start == NULL && nim == start->nomhs) {
			cout << "\nduplicate number not allowed" << endl;
			return;
		}
		newnode->next = start; //step3
		if (start != NULL)
			start->prev = newnode; //step4
		newnode->prev = NULL; //step5
		start = newnode; // step6
		return;
	}

	/*inserting anode between two nodes in the list*/
	node* current = start; //step1.a
	node* previous = NULL; //step1.b
	while (current->next != NULL && current->next->nomhs < nim) //step1.c
	{
		previous = current; //step1.d
		current = current->next; //step1.e
	}

	if (current->next != NULL && nim == current->next->nomhs) {
		cout << "\nduplicate roll numbers not allowed" << endl;
		return;
	}

		

}