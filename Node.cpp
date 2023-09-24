
#include "Node.h"


void Node::insert(std::string a, std::string b, std::string c, std::string d, bool e) {
    if (a > date && right) right->insert(a, b, c, d, e);
    else if (a > date && !right) right = new Node(a, b, c, d, e);
    else if (a < date && left) left->insert(a, b, c, d, e);
    else left = new Node(a, b, c, d, e);
}

void Node::print() {
    if (left) left->print();

    if (type)
        std::cout << date << " - " << text << " - " << category << " - " << number << " - " << "prod" << "\n";
    else
        std::cout << date << " - " << text << " - " << category << " - " << number << " - " << "kup" << "\n";

    if (right) right->print();
}

void Node::searchCategory(std::string a) {
    if (left) left->searchCategory(a);

    if (category == a) {
        if (type)
            std::cout << date << " - " << text << " - " << category << " - " << number << " - " << "prod" << "\n";
        else
            std::cout << date << " - " << text << " - " << category << " - " << number << " - " << "kup" << "\n";
    }
    if (right) left->searchCategory(a);
}

Node *Node::dellDate(std::string a) {
    if (date == a) {
        if (left == 0 && right == 0) {
            delete this;
        } else if (left == 0) {
            date = right->date;
            text = right->text;
            category = right->category;
            number = right->number;
            type = right->type;
            left = right->left;
            right = right->right;
        } else if (right == 0) {
            date = left->date;
            text = left->text;
            category = left->category;
            number = left->number;
            type = left->type;
            right = left->right;
            left = left->left;
        } else {
            Node *temp = findMinimumElement();
            date = temp->date;
            text = temp->text;
            category = temp->category;
            number = temp->number;
            type = temp->type;
        }

        if (right) right->dellDate(a);
    }
    if (date < a) {
        if (right) right->dellDate(a);
    }
    if (date > a) {
        if (left) left->dellDate(a);
    }
    return this;
}

Node *Node::findMinimumElement() {
    if (left == 0)
        return this;
    else
        return left->findMinimumElement();
}

std::string Node::save() {
    std::string sumString = "";
    if (left) sumString += left->save();
    if (right) sumString += right->save();
    return sumString + date + '\n';
}
