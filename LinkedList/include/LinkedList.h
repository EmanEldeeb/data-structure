#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

using namespace std;

class LinkedList
{

    Node *head,*tail;
    public:
        LinkedList()
        {
            head = tail =NULL;
        }
        int Add(int data){
          Node *node=new Node(data);

          if(head == NULL){
            Node::count++;
            head=tail=node;
          }
          else{
            Node::count++;
            tail->Next=node;
            node->Prev=tail;
            tail=node;
          }
          return 1;
        }
       void remove(int data){
           Node *node=getElement(data);
           if (node == NULL)return;
           if(node == head){
                Node::count--;
                if(head==tail){
                    head=tail=NULL;
                }
                else{
                    head=head->Next;
                    head->Prev=NULL;
                }
           }
           else if(node ==tail){
                Node::count--;
                tail=tail->Prev;
                tail->Next=NULL;
           }
           else{
                Node::count--;
                Node *A=node->Prev;
                Node *B=node->Next;
                A->Next=B;
                B->Prev=A;
               }
               delete node;
       }

       void display(){
         Node *current=head;

         while(current->Next!=NULL){
            cout<<current->Data<<" ";
            current=current->Next;
         }
        }
        int search(int data){
            Node *node=getElement(data);
            return node != NULL;

        }
        int getCount(){
            return Node::count;
        }
        void insertAfter(int data ,int dataAfter){
          Node *After=getElement(dataAfter);

          if(search(dataAfter)){
            Node *node=new Node(data);
            node->Prev=After;
            node->Next=After->Next;
            After->Next=node;
            Node::count++;

            }
        }

        int getByIndex(int index){
           int i=0;
           Node *current=head;
           while(current->Next !=NULL){
               if(index ==i){
                return current->Data;
               }
               i++;
               current=current->Next;

           }


        }



    protected:

    private:
    Node* getElement(int data){
        Node *current=head;
        while(current->Next != NULL ){

            if(current->Data==data)
                return current;
            else{
                current=current->Next;
            }
        }
        return NULL;


    }

};

#endif // LINKEDLIST_H
