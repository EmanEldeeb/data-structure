#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        int Data;
        Node *left,*right;
        Node( int data) {
        Data=data;
        left=right=NULL;


        }

    protected:

    private:
};

#endif // NODE_H
