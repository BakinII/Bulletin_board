#include "Table.h"

int main() {
    Tree dict;
    //формат даты год.месяц.день-
    dict.insert("22.05.11", "garage for sale", "real estate", "89235555555", 1);
    dict.insert("22.05.12", "buy boards", "materials", "89235556789", 0);
    dict.insert("22.07.10", "garage for sale", "real estate", "89235551234", 1);
    dict.insert("22.06.05", "buy a car", "transport", "89235555789", 0);
    dict.insert("22.03.10", "garage for sale", "real estate", "89235551234", 1);
    dict.insert("22.01.05", "buy a car", "transport", "89235555789", 0);
    dict.insert("22.04.10", "garage for sale", "real estate", "89235551234", 1);
    dict.insert("22.12.05", "buy a car", "transport", "89235555789", 0);
    dict.print();
    std::cout << dict.count << std::endl;
    dict.dellDate("22.07.10");
    dict.print();
    dict.saveBinary("test.txt");
    return 0;
}
