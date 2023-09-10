
#ifndef BULLETIN_BOARD_NODE_H
#define BULLETIN_BOARD_NODE_H

#include<iostream>
#include<windows.h>

class Node {

private:
    std::string date;
    std::string text;
    std::string category;
    std::string number;
    bool type;

    Node *left;
    Node *right;

public:
    Node(std::string a, std::string b, std::string c, std::string d, bool e) : date(a), text(b), category(c), number(d),
                                                                               left(NULL), right(NULL) { type = e; }

    Node(Node *temp) {
        date = temp->date;
        text = temp->text;
        category = temp->category;
        number = temp->number;
        type = temp->type;
        left = temp->left;
        right = temp->right;
    };

    void insert(std::string a, std::string b, std::string c, std::string d, bool e);

    void print();

    void searchCategory(std::string a);

    Node *dellDate(std::string a);

    Node *findMinimumElement();

    std::string save();
};


#endif //BULLETIN_BOARD_NODE_H
