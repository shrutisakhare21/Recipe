#include<iostream>
using namespace std;

int main() {

     int min,max,count=0;
     cin>>min>>max;
     for(int i=min;i<=max;i++){
         if(i%10==2 || i%10==3 || i%10==9){
             count++;
         }
     }
     cout<<count<<endl;
 
 return 0;
}


#include<iostream>
using namespace std;

int main() {

     int min,max,count=0;
     cin>>min>>max;
     for(int i=min;i<=max;i++){
         if(i%10==2){
             count++;
         }else if(i%10==3){
            count++;
         }else if(i%10==9){
            count++;
         }
     }
     cout<<count<<endl;
 
 return 0;
}

 