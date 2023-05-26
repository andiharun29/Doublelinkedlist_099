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

	newnode->next = current->next; //step4
	newnode->prev = current; //step5
	if (current->next != NULL)
		current->next->prev = newnode; //step6
	current->next - newnode; //step7
}

bool doublelinkedlist::search(int rollno, node** previous, node** current) {
	*previous = NULL; //step1.a
	*previous = start; //1.b
	while (*current != NULL && (*current)->nomhs != rollno) { //step1.c
		*previous = *current; //step1.d
		*current = (*current)->next; //1.e
	}
	return (*current != NULL);
}

bool doublelinkedlist::deletenode;
	if (search(rollno, &previous, &current) == false)
		return false;
	if (current->next != NULL)
		current->next->prev = previous; //step2
	if (previous != NUL(int rollno) {
	node* previous, * current;
	previous = current = NULLL)
		previous->next = current->next;
	else
		start = current->next;

	delete current; //step4
	return true;
}

bool doublelinkedlist::listempty() {
	return start == NULL;
}

void doublelinkedlist::traverse() {
	if (listempty())
		cout << "\nlist is empty" << endl;
	else {
		cout << "\nrecord inasceding order of roll number one: " << endl;
		node* currentnode = start;
		while (currentnode != NULL) {
			cout << currentnode->nomhs << " " << currentnode->name << endl;
			currentnode = currentnode->next;
		}
	}
}

void doublelinkedlist::revtraverse() {
	if (listempty()) {
		cout << "\nlist is empty" << endl;
	}
	else {
		cout << "\nrecord in descending order of roll number are: " << endl;
		node* currentnode = start;
		while (currentnode->next != NULL) 
			currentnode = currentnode->next;

		while (currentnode != NULL) {
			cout << currentnode->nomhs << " " << currentnode->name << endl;
			currentnode = currentnode->prev;
		}
	}
}

void doublelinkedlist::hapus() {
	if (listempty()) {
		cout << "\nlist is empty" << endl;
	}
	cout << "\nenter the roll number of the  whose record is to be deleted: ";
	int rollno;
	cin >> rollno;
	cout << endl;
	if (doublelinkedlist::deletenode(rollno) == false)
		cout << "record not found" << endl;
	else
		cout << "recordwith roll number" << rollno << "deleted" << endl;
}
void doublelinkedlist::searchdata() {
	if (listempty() == true) {
		cout << "\nlist is empty" << endl;
	}
	node* prev, * curr;
	prev = curr = NULL;
	cout << "\nenter the roll number of the student whose record you want to search: ";
	int num;
	cin >> num;
	if (doublelinkedlist::search(num, &prev, &curr) == false)
		cout << "\nrecord not found" << endl;
	else {
		cout << "\nrecord found" << endl;
		cout << "\nroll number : " << curr->nomhs << endl;
		cout << "\nname: " << curr->name << endl;
	}
}

int main() {
	doublelinkedlist obj;
	while (true) {
		try {
			cout << "\nmenu" << endl;
			cout << "1. add a record to the list" << endl;
			cout << "2. delete a record from the list" << endl;
			cout << "3. view all record in the ascending order of roll numbers" << endl;
			cout << "4. view all record in the desscending order of roll numbers" << endl;
			cout << "5. search for a record in the list" << endl;
			cout << "6.exit" << endl;
			cout << "\nenter your choise (1-6): ";
			char ch;
			cin >> ch;

			switch (ch) {
			case '1':
				obj.addnode();
				break;
			case '2':
				obj.hapus();
				break;
			case '3':
				obj.traverse();
				break;
			case '4':
				obj.revtraverse();
				break;
			case '5':
				obj.searchdata();
				break;
			case '6':
				return 0;
				default
					cout << "\ninvalid option" << endl;
				break;
			}

		}
		catch (exception& e) {
			cout << "check for the values entered." << endl;
		}
	}

}