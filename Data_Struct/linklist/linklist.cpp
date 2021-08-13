#include "linklist.hpp"



Data_Struct::LinkList::LinkList() : _size(0) , root(nullptr)   {}
int Data_Struct::LinkList::size(){return _size;}

Data_Struct::LinkList::Node* Data_Struct::LinkList::_insert(int data, Node* head)
{
    if(head == nullptr)
    {
        head = new Node(data);
        return head;
    }
    head->next = _insert(data,head->next);
    head->next->prev = head;
    return head;
}


void Data_Struct::LinkList::insert(int data)
{
    root = _insert(data,root);
    _size+=1;
}

void Data_Struct::LinkList::show()
{
    Node* temp = root;
    while(temp != nullptr)
    {
        std::cout << '{' <<  temp->data << '}';
    }
}
