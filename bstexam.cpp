#include <iostream>
using namespace std;
class bstexam;
int static count;
class node {
private:
	int data;
	node *left;
	node *right;
public:
	node() {
		data = 0;
		left = NULL;
		right = NULL;
	}
	node(int value) {
		data = value;
		left = NULL;
		right = NULL;
	}
	friend class bstexam;
};
class bstexam {
private:
	node *root;
public:
	bstexam() {
		root = NULL;
	}
	void insertion(int value) {

		node *newnodeptr = new node(value);
		if (root == NULL) {
			root = newnodeptr;
			return;
		}
		node *travptr = root;
		while (true) {
			if (value < travptr->data) {
				if (travptr->left == NULL) {
					travptr->left = newnodeptr;
					break;
				}
				travptr = travptr->left;
			} else {

				if (travptr->right == NULL) {
					travptr->right = newnodeptr;
					break;
				}
				travptr = travptr->right;

			}
		}
	}
	void preorder(node *trav) {
		if (trav == NULL)
			return;
		cout << trav->data << ", ";
		preorder(trav->left);
		count++;
		preorder(trav->right);
	}
	void preorder() {
		cout << "PRE : ";
		preorder(root);
		cout << endl;
	}
	void Counttotalnumberofnodes() {
		cout << "Total number of nodes in BST : " << count << endl;
	}
};
int main() {
	bstexam b;
	b.insertion(8);
	b.insertion(3);
	b.insertion(10);
	b.insertion(1);
	b.insertion(6);
	b.insertion(14);
	b.insertion(4);
	b.insertion(7);
	b.insertion(13);
	b.preorder();
	b.Counttotalnumberofnodes();
}

