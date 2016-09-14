#include<iostream>

#include<cstdio>
#include<sstream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#define pow2(n) (1 << (n))
#define null NULL
using namespace std;

int prevval=0;

struct avl_node

{

    int data;
    int cars;

    struct avl_node *left;

    struct avl_node *right;

}*root;

class avlTree

{

public:

    int height(avl_node *);

    int diff(avl_node *);

    avl_node *rr_rotation(avl_node *);

    avl_node *ll_rotation(avl_node *);

    avl_node *lr_rotation(avl_node *);

    avl_node *rl_rotation(avl_node *);

    avl_node* balance(avl_node *);

    avl_node* insert(avl_node *, int ,int,int);

    void display(avl_node *, int);

    avl_node* inorder(avl_node *,int);

    void preorder(avl_node *);

    void postorder(avl_node *);

    avlTree(){
        root = NULL;
    }
};

int avlTree::height(avl_node *temp)

{

    int h = 0;

    if (temp != NULL)

    {

        int l_height = height (temp->left);

        int r_height = height (temp->right);

        int max_height = max (l_height, r_height);

        h = max_height + 1;

    }

    return h;

}




int avlTree::diff(avl_node *temp)

{

    int l_height = height (temp->left);

    int r_height = height (temp->right);

    int b_factor= l_height - r_height;

    return b_factor;

}



avl_node *avlTree::rr_rotation(avl_node *parent)

{

    avl_node *temp;

    temp = parent->right;

    parent->right = temp->left;

    temp->left = parent;

    return temp;

}

avl_node *avlTree::ll_rotation(avl_node *parent)

{

    avl_node *temp;

    temp = parent->left;

    parent->left = temp->right;

    temp->right = parent;

    return temp;

}


avl_node *avlTree::lr_rotation(avl_node *parent)

{

    avl_node *temp;

    temp = parent->left;

    parent->left = rr_rotation (temp);

    return ll_rotation (parent);

}

avl_node *avlTree::rl_rotation(avl_node *parent)

{

    avl_node *temp;

    temp = parent->right;

    parent->right = ll_rotation (temp);

    return rr_rotation (parent);

}

avl_node *avlTree::balance(avl_node *temp)

{

    int bal_factor = diff (temp);

    if (bal_factor > 1)

    {

        if (diff (temp->left) > 0)

            temp = ll_rotation (temp);

        else

            temp = lr_rotation (temp);

    }

    else if (bal_factor < -1)

    {

        if (diff (temp->right) > 0)

            temp = rl_rotation (temp);

        else

            temp = rr_rotation (temp);

    }

    return temp;

}


avl_node *avlTree::insert(avl_node *root, int value, int cars,int q)

{

    if (root == NULL)

    {

        root = new avl_node;

        root->data = value;

        if(q==1)
            root->cars=prevval+cars;
        else
            root->cars=prevval-cars;

        root->left = NULL;

        root->right = NULL;

        return root;

    }

    else if (value < root->data)

    {

        prevval=root->cars;
        root->left = insert(root->left, value,cars,q);


        root = balance (root);

    }

    else if (value >= root->data)

    {
        prevval=root->cars;

        root->right = insert(root->right, value,cars,q);

        root = balance (root);

    }

    return root;

}



avl_node* avlTree::inorder(avl_node *tree,int value)

{

    avl_node* test;

    if (tree == NULL)
    {
        return NULL;


    }

    else if (value < tree->data)
    {

        test=inorder(tree->left,value);
    }

    else if (value >= root->data)
    {
        test=inorder(tree->right,value);

    }

    if(test==NULL){
        cout<<tree->cars<<endl;
    }

    return root;

}
void avlTree::preorder(avl_node *tree)

{

    if (tree == NULL)

        return;

    cout<<tree->data<<"  ";
    cout<<tree->cars<<"  "<<endl;


    preorder (tree->left);

    preorder (tree->right);
}

void avlTree::postorder(avl_node *tree){
    if (tree == NULL)

        return;

    postorder ( tree ->left );

    postorder ( tree ->right );

    cout<<tree->data<<"  ";

}

int main(){
    int cases,quries,initial;
    cin>>cases;


    while(cases--){
        avlTree avl;

        cin>>quries;

        cin>>initial;

        prevval=initial;


        while(quries--){
            int q,hr,min,amt;

            char ahr[3], aorp[3];

            scanf("%d ",&q);

            scanf("%[^:]s",ahr);
            hr=atoi(ahr);

            scanf("%c",&min);
            scanf("%d",&min);

            scanf("%s",aorp);

            string s(aorp);


            if(s=="PM")
                hr=hr+12;

            if(q!=3){
                scanf("%d",&amt);
            }else{

            }

            if(q!=3)
                root = avl.insert(root, (hr*60+min),amt,q);

            if(q==3){
                avl.inorder(root,(hr*60+min));
            }
        }
    }



    return 0;

}
