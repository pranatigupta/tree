#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *t)
{
    if(t)
    {
        inorder(t->left);
        printf("\n%d",t->data);
        inorder(t->right);
    }
    else
        return;
}
void main()
{
 int testInteger;
printf("Enter an integer: ");
scanf("%d", &testInteger);
struct node *a=(struct node*)malloc(sizeof(struct node));
a->data = testInteger;
printf("a = %d\n",a->data);
  struct node *b=(struct node*)malloc(sizeof(struct node));
    struct node *c=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(b->data));
    scanf("%d",&(c->data));
    a->left=b;
    a->right=c;
    struct node *d=(struct node*)malloc(sizeof(struct node));
    struct node *e=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&(d->data));
    scanf("%d",&(e->data));
    b->left=d;
    b->right=NULL;
    c->right=e;
    c->left=NULL;
    d->left=NULL;
    d->right=NULL;
    e->left=NULL;
    e->right=NULL;
inorder(a);
}
