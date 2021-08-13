#ifndef __BST_H__
#define __BST_H__


#include <iostream>
namespace Data_Struct
{

    class BST
    {
        private:
            struct Node
            {
                int data;
                Node* right;
                Node* left;
                Node(int x) : data(x),right(nullptr),left(nullptr){}
            };
            Node* root;
        public:
            BST();
    };
};

#endif // __BST_H__