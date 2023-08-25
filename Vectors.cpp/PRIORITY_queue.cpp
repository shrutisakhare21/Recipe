
// PRIORITY QUEUE means the first element should always be greatest
//it is related to HEAP
//default prio queue is the MAX_HEAP
// 

#include<iostream>
#include<queue>
using namespace std;

int main(){

priority_queue<int> max;        //max heap method

priority_queue<int, vector<int> , greater<int> > min;  //min heap method

max.push(2);
max.push(69);
max.push(342);
max.push(10);

cout<<"size is "<<max.size()<<endl;
int n=max.size();

for(int i=0;i<n;i++){                       //imp n
    cout<<max.top()<<endl;
   max.pop();                           // POP is used to remove the element.it willl remove the element from the bucket
   // if we dont use pop here ,then it will not compare with another elements ,and return the first element for n times
}

min.push(22);
min.push(24442);
min.push(212);
min.push(90);

int m=min.size();

for(int i=0;i<m;i++){                       
    cout<<min.top()<<endl;
   min.pop();                        
}

cout<<"Empty "<<min.empty()<<endl;
cout<<"Empty "<<max.empty()<<endl;

return 0;
}