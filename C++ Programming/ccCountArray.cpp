#include <iostream>
using namespace std;

int main(){
    
     int n, p, sum=0;
     cin >> n;
     p = n/2;
     
     for(int i=1; i<=p; i++){
        if(n%i==0){
            cout << i << endl;
            sum += i; // add the value of i to sum
        } else {
            cout << "not perfect" << endl;
        }
     }
     
     cout << "The sum of proper divisors of " << n << " is " << sum << endl;
     
    return 0;
}
