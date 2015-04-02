/* 
 * File:   BiTree.h
 * Author: brendanbusey
 *
 * Created on February 21, 2014, 5:04 PM
 */

#ifndef BITREE_H
#define	BITREE_H
#include "BiTreeNode.h"
#include <iostream>
using namespace std;

template <class T>
class BiTree
{
    private:
        BiTreeNode<T> *root;
        
        //use const because when we insert the data of type T from the object,
        //we want to only read it and not change it
        //pass a reference to a BiTreeNode pointer becuase when we do that
        //we are passing a memory address which we can use to link up to the other
        //nodes when a new node is created
        void insert(const T &d, BiTreeNode<T> * & ptr )
        {
            if(ptr == NULL)
            {
                //creates a new tree node with data type d and its right and 
                //left child node pointers NULL
                ptr = new BiTreeNode<T>(d);
            }
            
            else if(d < ptr -> data)
            {
                insert(d, ptr -> leftChild);
            }
            
            else if(d > ptr -> data)
            {
                insert(d, ptr -> rightChild);
            }
            
            else if(d == ptr -> data)
            {
                return;
            }
        }
        
        
        
    public:
        
      BiTree()
      {
          root = NULL;
      }
      
      BiTreeNode<T>* getRoot()
      {
          return root;
      }
        
      //By adding the &, the d copies the data from the object passed as an
      //argument for the insert function in main into a new node which is then put into the tree
      //Added the const since when we take in the data in from the object passed as an object
      //for the insert function in main. We don't want to change the data, we just want to read it
      void insert(const T &d)
      {
          //d is the data type you want to send in
          insert(d, root);
      }
        
      //prints a tree rooted at ptr in sorted order
      //left subtree, current node, right subtree
      void inOrder(BiTreeNode<T> *ptr, ostream & out)
      {
          if(ptr != NULL)
          {
              inOrder(ptr -> leftChild, out);
              out << ptr -> data;
              out << ", ";
              inOrder(ptr -> rightChild, out);
          }
      }
        
      //current node, left subtree, right subtree
      void preOrder(BiTreeNode<T> *ptr, ostream & out)
      {
          if(ptr != NULL)
          {
              out << ptr -> data;
              cout << ", ";
              preOrder(ptr -> leftChild, out);
              preOrder(ptr -> rightChild, out);
          }
      }
       
      //left subtree, right subtree, current node
      void postOrder(BiTreeNode<T> *ptr, ostream & out)
      {
          if(ptr != NULL)
          {
              postOrder(ptr -> leftChild, out);
              postOrder(ptr -> rightChild, out);
              out << ptr -> data;
              out << ", ";
          }
      }
      
};



#endif	/* BITREE_H */

