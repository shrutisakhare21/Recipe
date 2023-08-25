#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    cout << "size is " << l.size() << endl;
    l.push_back(5);
    cout << "size is " << l.size() << endl;
    // cout << "capacity is " << l.capacity() << endl;  // Lists do not have a capacity member
    l.push_front(3);
    cout << "size is " << l.size() << endl;

    cout << "Elements before pop_back(): ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();  // Remove the last element

    cout << "Elements after pop_back(): ";
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
