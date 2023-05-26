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


}