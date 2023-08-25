#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Shruti");
    q.push("Harsh");
    q.push("Jha");

    q.front();
    cout<<"First Element is "<<q.front()<<endl;        //here FRONT is used to display first num
     
    q.pop();
    cout<<"First Element is "<< q.front()<<endl;

    q.pop();
    cout<<"First Element is "<< q.front()<<endl;
     
    cout<<"Size is "<<q.size()<<endl;

    cout<<"Empty "<<q.empty()<<endl;


    return 0;
}