/*GAURAV TANEJA
16CSU125
DSA PROJECT
Q> WAP to implement the binary tree 
*/
#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *left,*right;
};

void Inordertraversal(struct node *R)
{
	if(R!=NULL)
	{
		Inordertraversal(R->left);
		printf("%d\n",R->data);
		Inordertraversal(R->right);
	}
}

void Preordertraversal(struct node *R)
{
	if (R!=NULL)
  	{
  		printf("%d\n",R->data);
  		Preordertraversal(R->left);
  		Preordertraversal(R->right);
  	}
}

void Postordertraversal(struct node *R)
{
  if (R!=NULL)
  	{
  		Postordertraversal(R->left);
  		Postordertraversal(R->right);
  		printf("%d\n",R->data);
  	}
}

int main()
{
	struct node *R;
	R=(struct node*)malloc(sizeof(struct node));
	R->data=20;
	
	R->left=(struct node*)malloc(sizeof(struct node));
	R->left->data=17;
	
	R->right=(struct node*)malloc(sizeof(struct node));
	R->right->data=26;
	
	R->left->left=(struct node*)malloc(sizeof(struct node));
	R->left->left->data=7;
	
	R->left->left->right=NULL;
	
	R->left->right=(struct node*)malloc(sizeof(struct node));
	R->left->right->data=19;

	R->left->right->left=NULL;
	R->left->right->right=NULL;
	
	R->right->left=(struct node*)malloc(sizeof(struct node));
	R->right->left->data=22;
	
	R->right->left->left=NULL;
	R->right->left->right=NULL;
	
	R->right->right=(struct node*)malloc(sizeof(struct node));
	R->right->right->data=31;
	
	R->right->right->left=NULL;
	R->right->right->right=NULL;
	
	R->left->left->left=(struct node*)malloc(sizeof(struct node));
	R->left->left->left->data=3;
	
	R->left->left->left->left=NULL;
	R->left->left->left->right=NULL;
	
	printf("Inorder Traversal:\n");	
	Inordertraversal(R);
	printf("Preorder Traversal:\n");
	Preordertraversal(R);
	printf("Postorder Traversal:\n");
	Postordertraversal(R);
	
return 0;
}
/* OUTPUT:
Inorder Traversal:
3
7
17
19
20
22
26
31
Preorder Traversal:
20
17
7
3
19
26
22
31
Postorder Traversal:
3
7
19
17
22
31
26
20

--------------------------------
Process exited after 0.1094 seconds with return value 0
*/
