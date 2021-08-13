#ifndef __LINKLIST_H__
#define __LINKLIST_H__


#include <iostream>


namespace Data_Struct
{

    class LinkList
    {
        private:
            struct Node
            {
                public:
                    int data;
                    Node* next;
                    Node* prev;
                    Node(int x) : data(x) , next(nullptr),prev(nullptr) {}
            };
            Node* root;
            int _size;
            Node* tail;
            Node* _insert(int data,Node* head){}
            Node* _remove();
        public:
            LinkList();
            void insert(int data);
            void remove();
            void show();
            int size();
            


    };


};

#include "linklist.cpp"
#endif // __LINKLIST_H__