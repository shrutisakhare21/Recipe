
#include <iostream>
#include <string>
//STAFF OOP
using namespace std;

class Staff {
private:
    string name;
    string post;
public:
    void acceptData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter post: ";
        getline(cin, post);
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }
};

int main() {
    Staff staff[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter details for staff member " << i + 1 << endl;
        staff[i].acceptData();
    }

    cout << "Details of all staff members" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Staff member " << i + 1 << endl;
        staff[i].displayData();
        cout << endl;
    }

    return 0;
}

outputs
Enter details for staff member 1
Enter name: Shruti
Enter post: xx
.
.
.
.
.Enter details for staff member 5...