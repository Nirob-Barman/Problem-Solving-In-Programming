#include<iostream>

using namespace std;

struct node
{
    int data;
    node*left;
    node*right;
};
struct node*newnode(int data)
{
    node*p;
    p=new node();
    p->data=data;
    p->left=nullptr;
    p->right=nullptr;

    return p;
};

node*insert(node*root,int data)
{
    if(root==nullptr)
    {
        return newnode(data);
    }
    else if(data>root->data)
        root->right=insert(root->right,data);
    else
        root->left=insert(root->left,data);

    return root;
}
void inorder(node*root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        printf(" %d",root->data);
        inorder(root->right);
    }
}
void preorder(node*root)
{
    if(root!=nullptr)
    {
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node*root)
{
    if(root!=nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d",root->data);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);

        node*root;
        int data;
        scanf("%d",&data);
        root=newnode(data);
        for(int i=2;i<=n;i++)
        {
            int data;
            scanf("%d",&data);
            insert(root,data);
        }
        printf("Case %d:\n",cas);
        printf("Pre.:");
        preorder(root);
        printf("\n");

        printf("In..:");
        inorder(root);
        printf("\n");

        printf("Post:");
        postorder(root);
        printf("\n\n");

        cas++;
    }
}
