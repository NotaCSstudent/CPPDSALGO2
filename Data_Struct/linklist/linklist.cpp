#include "linklist.hpp"



linklist::LinkList::LinkList() : _size(0) , root(nullptr)   {}
int linklist::LinkList::size(){return _size;}

linklist::LinkList::Node* linklist::LinkList::_insert(int data, Node* head)
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


void linklist::LinkList::insert(int data)
{
    root = _insert(data,root);
    _size+=1;
}

void linklist::LinkList::show()
{
    Node* temp = root;
    while(temp != nullptr)
    {
        std::cout << '{' <<  temp->data << '}';
    }
}
