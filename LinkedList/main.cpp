#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList myList;

    myList.Add(3);
    myList.Add(5);
    myList.Add(7);
    myList.Add(9);
    myList.Add(11);

    myList.display();
    myList.remove(7);
    myList.remove(15);
    cout<<endl;
    myList.display();
    myList.insertAfter(88,9);
    cout<<endl;
    myList.display();
    cout<<endl;
    cout<< myList.getByIndex(3);
//
//    int flag = myList.Search(15);

    return 0;
}
