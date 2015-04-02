/* 
 * File:   BiTreeNode.h
 * Author: brendanbusey
 *
 * Created on February 21, 2014, 5:04 PM
 */

#ifndef BITREENODE_H
#define	BITREENODE_H
#include "BiTree.h"
#include <iostream>
using namespace std;
template <class T>
class BiTree;


template <class T>
class BiTreeNode
{
    private:
        T data;
        BiTreeNode<T> *leftChild;
        BiTreeNode<T> *rightChild;
        
    public: 
        BiTreeNode(T Data)
        {
            data = Data;
            leftChild = NULL;
            rightChild = NULL;
            
        }
        
        T getData()
        {
            return data;
        }
        
        BiTreeNode* getRightChild()
        {
            return rightChild;
        }
        
        BiTreeNode* getLeftChild()
        {
            return leftChild;
        }
        
        friend class BiTree<T>;
};



#endif	/* BITREENODE_H */

