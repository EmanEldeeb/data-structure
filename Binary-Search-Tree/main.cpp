#include <iostream>
#include<Tree.h>
using namespace std;

int main()
{   Tree tree;
    tree.Add(50);
    tree.Add(30);
    tree.Add(31);
    tree.Add(80);
    tree.Add(90);
    tree.traverse();
    cout<<"depth is: "<<tree.depth();

    return 0;
}
