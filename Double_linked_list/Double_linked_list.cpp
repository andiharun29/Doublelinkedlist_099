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

};