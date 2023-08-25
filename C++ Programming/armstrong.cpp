#include <iostream>
using namespace std;

int power(int num){
    int i;
    int ans=0;
for(i=1;i<=count;i++){
   int power=pow(num%10,count);
   num/=10;                       
   ans+=power;
    }
    return ans;
}


int main(){
     int count=0;
      num/=10;
        count++;
    int n;
    cin>>n;
    if(power(n)==n){
  cout<<"armstrong"<<endl;
    }else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}        