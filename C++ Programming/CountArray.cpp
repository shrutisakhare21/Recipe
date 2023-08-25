
/*
int main(){
    int count=0;
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    cin>>x;
  for(int i=0;i<7;i++){
    if(arr[i]>x){
        count++;
    }
  }  
   cout<<"count is"<<" "<<count;
  return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    int a, b, c, d;
    cout << "Enter 4 integers:" << endl;
    cin >> a >> b >> c >> d;
    if (a > 10) {
        count++;
    }
    if (b > 10) {
        count++;
    }
    if (c > 10) {
        count++;
    }
    if (d > 10) {
        count++;
    }
    cout << "Number of integers greater than 10: " << count << endl;
    return 0;
}
