#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
};
int max(int,int);
// int height(struct node* node)
// {
// 	if(node=NULL)
// 	{
// 		return 0;
// 	}

// 	return 1+max(height(node->left),height(node->right));
// }
// bool check(struct node* root)
// {
// 	int l;
// 	int r;

// 	if(root== NULL)
// 	{
// 		return 1;
// 	}

// 	l=height(root->left);
// 	r=height(root->left);
// 	if((abs(l-r)<=1) && check(root->left) && check(root->right))
// 	{

// 		return 1;
// 	}
// 	return o;
// }

int height(struct node* node)
{
	int l,r;
	if(node==NULL)
	{
		return 0;
	}
	else
	{
		l=height(node->left);
		r=height(node->right);
		if(abs(l-r)>1)
		{
			printf("\nThis node is unbalanced, Data= %d",node->data);
		}
	return 1+max(l,r);
	}
}

int max(int a, int b)
{
	return (a>=b)?a:b;
}

struct node* new(int data)
{
	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;

	return node;
}
struct node* newnode()
{
	struct node *new;
	new=(struct node*)(malloc(sizeof(struct node*)));
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	if (data==0) //enter 0 for leaf node
	{
		return NULL;
	}


	new->data=data;
	
	printf("you are on left child of %d\n",data);
	new->left=newnode();
	printf("you are on right child of %d\n",data);
	new->right=newnode();
	return new;

}

int main() 
{ 
	struct node* root;
	root=newnode();
   
  	height(root);
    // if (check(root)) 
    //     printf("Tree is balanced"); 
    // else
    //     printf("Tree is not balanced"); 
  
    //getchar(); 
    return 0; 
} 