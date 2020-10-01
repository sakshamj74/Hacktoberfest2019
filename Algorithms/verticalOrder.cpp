#include <iostream> 
using namespace std; 
 
struct Node 
{ 
	int data; 
	struct Node *left, *right; 
}; 

Node* newNode(int data) 
{ 
	Node *temp = new Node; 
	temp->data = data; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

void findMinMax(Node *node, int *min, int *max, int hd) 
{  
	if (node == NULL) return; 

	if (hd < *min) *min = hd; 
	else if (hd > *max) *max = hd; 

	findMinMax(node->left, min, max, hd-1); 
	findMinMax(node->right, min, max, hd+1); 
} 

void printVerticalLine(Node *node, int line_no, int hd) 
{ 
	
	if (node == NULL) return; 

	if (hd == line_no) 
		cout << node->data << " "; 

	printVerticalLine(node->left, line_no, hd-1); 
	printVerticalLine(node->right, line_no, hd+1); 
} 

void verticalOrder(Node *root) 
{ 
	int min = 0, max = 0; 
	findMinMax(root, &min, &max, 0); 

	for (int line_no = min; line_no <= max; line_no++) 
	{ 
		printVerticalLine(root, line_no, 0); 
		cout << endl; 
	} 
} 


int main() 
{ 

	Node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 
	root->right->left->right = newNode(8); 
	root->right->right->right = newNode(9); 

	cout << "Vertical order traversal is \n"; 
	verticalOrder(root); 

	return 0; 
} 
