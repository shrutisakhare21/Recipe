#include<iostream>
using namespace std;

int main(){
   int a[5]={1,2,3,4,5}; // using 2 variables and loops
    int b[5];
    for(int i=0;i<5;i++){
    for(int i=0;i<5;i++){
         b[i]=a[i];
    }
        cout<<b[4-i];
    }
    return 0;
}


int main(){
 int a[5]={1,2,3,4,5};      //using only one variable and loop
   for(int i=0;i<5;i++){
         cout<<a[4-i];
   }
         return 0;
   }



int main(){
    int n;
    cin>>n;
    int arr[n];   // for user input
    int i;
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
         cout<<arr[n-1-i]<<" ";
   }
         return 0;
   }

