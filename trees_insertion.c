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
void preorder(struct node *root)
{	
	if(root!=NULL)
	{
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
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
	printf("inorder");
	inorder(root);
	printf("preorder");
	preorder(root);
	printf("postorder");
	postorder(root);
}
	
