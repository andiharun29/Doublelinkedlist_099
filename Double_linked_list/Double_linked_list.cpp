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
	

}