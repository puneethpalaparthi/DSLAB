#include<stdio.h>
#include<stdlib.h>
struct node{	
int data;
struct node *left;
struct node *right;
};

struct node *create(struct node *root,int d)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->left=NULL;
	newnode->data=d;
	newnode->right=NULL;
	return newnode;
}

void inorder(struct node *root)
{	
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%3d",root->data);
		inorder(root->right);
	}
}

struct node *insert(struct node *root,int d)
{	
	if(root==NULL)
	{
		root=create(root,d);
	}
	else
	{
		if(d<root->data)
		{
			root->left=insert(root->left,d);
		}
		else if(d>root->data)
		{
			root->right=insert(root->right,d);
		}
	}
	return root;
}

int main()
{
	struct node *root;
	root=insert(root,69);
	root=insert(root,48);
	root=insert(root,27);
	root=insert(root,43);
	root=insert(root,99);
	root=insert(root,65);
	root=insert(root,86);
	root=insert(root,4);
	root=insert(root,78);
	inorder(root);
}
	
