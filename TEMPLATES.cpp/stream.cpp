 #include <iostream>
 #include <fstream> 
 using namespace std;

int main() {
int num;
// Input stream (cin)
cout << "Enter a number: ";
cin >> num;
cout << "You entered: " << num << endl;

// Output stream (cout)
cout << "Output using cout: " << num <<endl;


// Output stream (ofstream) 
ofstream file("output.txt");
file << "Output to file: " << num << endl; 
file.close();
return 0; 
}
