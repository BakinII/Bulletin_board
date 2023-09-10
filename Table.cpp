
#include "Table.h"

#include <fstream>

void Tree::insert(std::string a, std::string b, std::string c, std::string d, bool e) {
    count++;
    if (!root) root = new Node(a, b, c, d, e);
    else root->insert(a, b, c, d, e);
}

void Tree::print() {
    root->print();
}

void Tree::dellDate(std::string a) {
    root->dellDate(a);
    count--;
}

void Tree::searchrub(std::string a) {
    root->searchCategory(a);
}

void Tree::saveBinary(std::string path) {
    std::ofstream file;
    file.open(path);
    file << root->save();
    file.close();
}
