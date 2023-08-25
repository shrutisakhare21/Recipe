#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;         // <string> is used bcoz we are adding names in this stack not integers
    s.push("Shruti");
    s.push("Harsh");           //PUSH is used to insert
    s.push("Jha");

    cout<<"Top element is "<<s.top()<<endl;        //here TOP is used to display first value
     // will print JHA coz its stack tho!!

    s.pop();                                          // POP is used to remove the element
    cout<<"Top element is "<<s.top()<<endl;            //it will remove the element JHA and print HARSH
    s.pop();                                          
    cout<<"Top element is "<<s.top()<<endl;

    cout<<"Size of Stack is "<<s.size()<<endl;         // it was 3 then we pop twice times then it is 1

    cout<<"Empty "<<s.empty()<<endl;
    return 0;
}