#include<iostream> 
using namespace std;
class Hero {
//properties private:
int health;
public:
char level; 
Hero() {
cout << "Default Constructor Called" <<endl;
}
};
int main(){
 cout << "Hi " <<endl;
 Hero ramesh;
 cout<<"BYE"<<endl;
 return 0;
}
OUTPUT
Hi 
Default Constructor Called
BYE







#include<iostream> 
using namespace std;

class Hero {
private:
    int health;
public:
    char level; 
    // Parameterized Constructor
    Hero(int h, char ch) {
        health = h;
        level = ch;
        cout << "Parameterized Constructor Called" << endl;
    }
};

int main() {
    cout << "Hi " << endl;
    // Creating an instance of Hero using the parameterized constructor
    Hero ramesh(100, 'A');
    cout << "end" << endl;
    return 0;
}
OUTPUT
Hi 
Parameterized Constructor Called
end





#include<iostream> 
using namespace std;

class Example {
private:
    int num;
public:
    Example() {
        num = 0;
        cout << "Default Constructor Called" << endl;
    }

    Example(int n) {
        num = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy constructor
    Example(const Example& other) {
        num = other.num;
        cout << "Copy Constructor Called" << endl;
    }

    int getNum() {
        return num;
    }

    void setNum(int n) {
        num = n;
    }
};

int main() {
    Example ex1(5);
    Example ex2(ex1); // Create a copy of ex1 using the copy constructor

    cout << "ex1.num: " << ex1.getNum() << endl;
    cout << "ex2.num: " << ex2.getNum() << endl;

    return 0;
}
OUTPUT
Parameterized Constructor Called
Copy Constructor Called
ex1.num: 5
ex2.num: 5




#include <iostream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w = 0, int h = 0) {
        width = w;
        height = h;
        cout << "Constructor Called" << endl;
    }
    void print() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Create a rectangle with default values
    Rectangle r1;

    // Create a rectangle with specified values
    Rectangle r2(3, 4);

    // Call print method to display the properties of the rectangles
    r1.print();
    r2.print();

    return 0;
}
OUTPUT
Constructor Called
Constructor Called
Width: 0, Height: 0
Width: 3, Height: 4
*/





#include <iostream>
using namespace std;

class Example {
private:
    int *arr;
public:
    Example(int size) {
        arr = new int[size];
        cout << "Constructor called" << endl;
    }
    ~Example() {
        delete[] arr;
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example ex(5);
    return 0;
}

OUTPUT
Constructor called
Destructor called


/*

#include <iostream>
using namespace std;

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
/*

#include <iostream>
using namespace std;

class BankAccount {
private:
    int ac_no;
    double balance;

public:
    BankAccount(int ac, double bal) {
        ac_no = ac;
        balance = bal;
    }

    void get_Account_Details() {
        cout << "Enter Account Number: ";
        cin >> ac_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display_Account_Details() {
        cout << "Account Number: " << ac_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(0, 0.0);
    acc.get_Account_Details();
    acc.display_Account_Details();
    return 0;
}



#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;
public:
    void inputNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void findLargest() {
        if (num1 > num2)
            cout << num1 << " is larger." << endl;
        else
            cout << num2 << " is larger." << endl;
    }
};

int main() {
    Number n;
    n.inputNumbers();
    n.findLargest();
    return 0;
}




#include <iostream>
#include <string>

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


#include <iostream>
using namespace std;

int x = 10; // global variable

int main() {
    int x = 20; // local variable
    cout << "Local x: " << x << endl; // outputs 20

    cout << "Global x: " << ::x << endl; // outputs 10 using scope resolution operator

    return 0;
}



#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }
    int getAccountNumber() {
        return accountNumber;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setAccountNumber(12345);
    acc.deposit(1000);
    acc.displayBalance();
    acc.withdraw(500);
    acc.displayBalance();
    return 0;
}



#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
public:
    int getAccountNumber() const {
        return accountNumber;
    }
    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setAccountNumber(12345);
    acc.deposit(1000);
    cout << "Balance: " << acc.getBalance() << endl;
    acc.withdraw(500);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}


#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
    bool isPrime() {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Number n;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    n.setNumber(x);
    if (n.isPrime()) {
        cout << x << " is a prime number." << endl;
    } else {
        cout << x << " is a composite number." << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

inline int mult(int a, int b) {
    return a * b;
}

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << mult(num1, num2) << endl;

    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The cube of " << num << " is: " << cube(num) << endl;

    return 0;
}


#include <iostream>
using namespace std;

// Function with a default argument
int addNumbers(int x, int y = 0) {
    return x + y;
}

int main() {
    int num1 = 10, num2 = 20;

    // Calling function with two arguments
    int sum1 = addNumbers(num1, num2);
    cout << "Sum with two arguments: " << sum1 << endl;

    // Calling function with one argument
    int sum2 = addNumbers(num1);
    cout << "Sum with one argument: " << sum2 << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to input? ";
    cin >> n;

    int *numbers = new int[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    delete [] numbers;
    return 0;
}
*/