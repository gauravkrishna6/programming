#include <bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	struct node *next;
	
};

void push(struct node** head_ref,int val){

	// /* 1. allocate node */
 //    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
 //    struct node *last = *head_ref;  /* used in step 5*/
  
 //    /* 2. put in the data  */
 //    new_node->data  = val;
 
 //    /* 3. This new node is going to be the last node, so make next 
 //          of it as NULL*/
 //    new_node->next = NULL;
 
 //    /* 4. If the Linked List is empty, then make the new node as head */
 //    if (*head_ref == NULL)
 //    {
 //       *head_ref = new_node;
 //       return;
 //    }  
      
 //    /* 5. Else traverse till the last node */
 //    while (last->next != NULL)
 //        last = last->next;
  
 //    /* 6. Change the next of last node */
 //    last->next = new_node;













	struct node* tmp = *head_ref;
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=val;
	new_node->next= NULL;

	if (tmp==NULL)
	{
		/* code */
		*head_ref = new_node;
	return;
	}

	
	while(tmp->next !=NULL ){
		tmp=tmp->next;
	}

	tmp->next =  new_node;
	return;

}

void print(struct node* head){
	struct node *tmp = head;

	while(tmp!= NULL){
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	return;
}

void middle(struct node* head){
	struct node* tmp = head;
	int length=0;
	int middle;

	while(tmp){
		length++;
		tmp = tmp->next;
	}
	//cout << "the lengh is : " << length<< endl;
	middle = (length)/2 +1;

	struct node* ptr = head;
	if(ptr==NULL){
		cout << "list is empty";
		return;

	} 
	else{
		for (int i =1 ; i < middle; ++i)
		{
			/* code */
			ptr = ptr->next;

		}
	}
	cout << ptr->data;
	return;


}


int main()
{
	/* code */
	struct node* head = NULL;
	(struct node*)malloc(sizeof(struct node));
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	push(&head,6);

	cout << "the original list is "; 
	print(head);
	cout  << endl;

	cout << "the middle element is ";

	middle(head);

	return 0;
}