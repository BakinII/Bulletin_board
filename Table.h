
#ifndef BULLETIN_BOARD_TABLE_H
#define BULLETIN_BOARD_TABLE_H


#include<iostream>
#include<windows.h>
#include "Node.h"

class Tree {

private:
    Node *root;

public:
    int count;

    Tree() : root(NULL) { count = 0; }

    void insert(std::string a, std::string b, std::string c, std::string d, bool e);

    void print();

    void searchrub(std::string a);

    void dellDate(std::string);

    void saveBinary(std::string path);
};


#endif //BULLETIN_BOARD_TABLE_H
