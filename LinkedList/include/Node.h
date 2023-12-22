#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        static int count;
        int Data;
        Node *Prev, *Next;

        Node(int data)
        {
           this->Data = data;
            Prev = Next = NULL;
        }

    protected:

    private:
};
int Node::count=0;
#endif // NODE_H
