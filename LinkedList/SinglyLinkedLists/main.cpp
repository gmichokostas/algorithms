#include <iostream>

#include "list.hpp"

using namespace std;

int main() {

    List<int> list;

    list.append(1);
    list.append(2);
    list.append(4);
    cout << "list " << list << endl;

    list.insert_after(2, 3);
    cout << "list " << list << endl;

    list.delete_last();
    cout << "list " << list << endl;

    list.delete_last();
    cout << "list " << list << endl;

    list.delete_last();
    cout << "list " << list << endl;

    cout << "len " << list.length() << endl;
    try {list.delete_first();} catch(...) {cout<< "foo" <<endl;}

    return 0;
}