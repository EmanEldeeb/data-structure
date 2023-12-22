#ifndef TREE_H
#define TREE_H
#include <iostream>
#include<Node.h>
using namespace std;

class Tree
{
    public:
        Node *root;
        Tree() {
         root=NULL;
        }
        void Add(int data){
          Node *node=new Node(data);
          if(root == NULL){
            root=node;

          }else{
               Node *current=root;
               Node *parent;
               while(current !=NULL ){
                   parent=current;
                   if(data<current->Data){
                        current=current->left;
                   }
                   else{
                        current=current->right;
                   }
                 }
               if(data<parent->Data){
                    parent->left=node;
                  }else{
                  parent->right=node;
                  }

          }
        };
        void traverse(){
            display(root);
        }
         int depth(){
          return getHeight(root);

        };

    protected:

    private:

        void display(Node *node){
           if(node == NULL) return;

           display(node->left);
           cout<<node->Data<<" ";
           display(node->right);

        }



        int getHeight(Node *root){
           if(root == NULL)return -1;

           int ls=getHeight(root->left);
           int rs=getHeight(root->right);
           return ls>rs?ls+1:rs+1;

        }
};

#endif // TREE_H
