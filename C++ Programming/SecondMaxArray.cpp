#include<iostream>
using namespace std;

void SortArray(int array[], int n) { 
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(array[i]<array[j]) {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}

void printSeconMaxArray(int array[], int n) { 
    cout <<array[1];
}

int main() {
    int n;
 cout << "Enter the size: ";
    cin >> n;
    int array[n];
 cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
     cin >> array[i]; 
 }
SortArray(array, n); 
  cout<<"Second Max: ";
printSeconMaxArray(array, n); 
    return 0;
}