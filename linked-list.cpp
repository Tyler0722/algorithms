#include <string.h>
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* link;
};

int main() {
	Node* a;
	a = NULL;

	Node* temp = new Node();

	temp -> data = 2;
	temp -> link = NULL;

	a = temp;

	// add new node
	temp = new Node();
	temp -> data =  4;
	temp -> link = NULL;

	Node* temp1 = a;

	while (temp1 -> link != NULL) {
		temp1 = temp1 -> link;
	}

	temp1 -> link = temp1;

	return 0;
}
