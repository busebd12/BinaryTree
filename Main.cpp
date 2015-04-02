/* 
 * File:   Main.cpp
 * Author: brendanbusey
 *
 * Created on February 21, 2014, 5:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "BiTree.h"
#include "BiTreeNode.h"
using namespace std;

/*
 * 
 */
int main() 
{
    srand(time(NULL));
    
    BiTree<int> tree;
    
   
    for(int i=0; i<21; i++)
    {   
        int num = rand() % 100 + 1;
        tree.insert(num);
    }
    
    cout << endl << "Printing tree in order: " << endl;
    tree.inOrder(tree.getRoot(), cout);
    cout << " " << endl;
    
    cout << endl << "Printing tree in post order: " << endl;
    tree.postOrder(tree.getRoot(), cout);
    cout << " " << endl;
    
    cout << endl << "Printing tree in pre order: " << endl;
    tree.preOrder(tree.getRoot(), cout); 
    cout << " " << endl;
    
   
    
    return 0;
}

 

