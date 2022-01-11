#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;

    while (root != NULL)
    {
        prev=root;
        if ( key==root->data )
        {
            cout << "Duplicate key not allowed";
        }
        else if (key< root->data )
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    struct node * new = createnode(key);
    if (key<prev->data )
    {
        prev->left = new ;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{
    struct node *p = createnode(50);
    struct node *p1 = createnode(40);
    struct node *p2 = createnode(60);

    struct node *p3 = createnode(20);
    struct node *p4 = createnode(45);

    struct node *p5 = createnode(55);

    // struct node *p6 = createnode(70);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    // p2->right = p6;

insert(p,70);
cout<<p->right->right;

    return 0;
}