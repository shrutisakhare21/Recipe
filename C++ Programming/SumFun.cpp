#include<iostream>
using namespace std;

int sum(int num){
  int sum=0;
for(int i=1;i<=num;i++){
   sum=sum+i;
    }
   return sum;
}



int main() {
    int a=1000;
   cout<<sum(a)<<endl;
   return 0;
}

