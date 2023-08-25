
#include <iostream>
using namespace std;
//TiIME OOP
class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes." << endl;
    }

    // Add a Time object to the current Time object
    void addTime(Time t) {
        minutes += t.minutes;
        hours += t.hours + minutes/60;
        minutes %= 60;
    }
};

int main() {
    Time t1(2, 30); // 2 hours and 30 minutes
    Time t2(1, 45); // 1 hour and 45 minutes

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    t1.addTime(t2); // Add t2 to t1

    cout << "After adding time: ";
    t1.display();

    return 0;
}
OUTPUT:
Time 1: 2 hours and 30 minutes.
Time 2: 1 hours and 45 minutes.
After adding time: 4 hours and 15 minutes.