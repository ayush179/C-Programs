#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct bst
{
int data;
struct bst*left;
struct bst*right;

}node;
node*create();
void insert(node* , node*);
void inorder(node*);
int main()
{
char ch;
node*root=NULL,*N;
do
{
N=create();
if(root==NULL)
root=N;
else
insert(root,N);
printf("want to insert more (y/Y for entering more numbers):");
getchar();
scanf("%c",&ch);
}while(ch=='y'|| ch=='Y');

printf("inorder traversal\n");
inorder(root);
return(0);


}
node*create()
{
node*N;
printf("enter number for binary tree formation:");

N=(node*)malloc(sizeof(node));
scanf("%d",&N->data);
N->left=NULL;
N->right=NULL;
return N;
}
void insert(node*root,node*N)
{
if(N->data < root->data)
{
if(root->left!=NULL)
insert(root->left,N);
else
root->left=N;
}
if(N->data>root->data)
{
if(root->right!=NULL)
insert(root->right,N);
else
root->right=N;

}
}
void  inorder(node*root)
{
if(root!=NULL)
{inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);
}
}


