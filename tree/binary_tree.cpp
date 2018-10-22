#include <bits/stdc++.h>
using namespace std;

// tree node structure
struct node{
	int data;
	struct node *left,*right;
};

// create new node
struct node *createNode(int key){
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->left = NULL;
	temp->right = NULL;
	temp->data = key;
	return temp;
};

//insert node in tree
void insert_level_order(struct node **head, int key){
	struct node *new_node = createNode(key);
	struct node *root = *head;
	if(*head == NULL){
		*head = new_node;
		return ;
	}
	else{
		queue<struct node*> q;
		q.push(root);
		node *temp = NULL;
		while(!q.empty()){
			temp = q.front();
			if(temp->left ==NULL){
				temp->left = new_node;
				break;
			}else{
				q.push(temp->left);
			}
			if(temp->right ==NULL){
				temp->right = new_node;
				break;
			}else{
				q.push(temp->right);
			}
			q.pop();
		}
	}
}

// breadth first or level order  traversal
void bfs(struct node* root){
	queue<struct node*> q;
	if(root == NULL){
		cout << "tree is empty"<< endl;
	}else{
		q.push(root);
		node *temp = NULL;
		while(!q.empty()){
			temp = q.front();
			if(temp->left !=NULL){
				q.push(temp->left);
			}
			if(temp->right != NULL){
				q.push(temp->right);
			}
			cout << temp->data<< " ";
			q.pop();
		}
	}
	cout << endl;
}

//===========================================================================

int main(int argc, char const *argv[])
{
	struct node *root = NULL;//createNode(10);
	insert_level_order(&root,1);
	insert_level_order(&root,2);
	insert_level_order(&root,3);
	insert_level_order(&root,4);
	insert_level_order(&root,5);
	insert_level_order(&root,6);
	bfs(root);
	return 0;
}