#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    cout<<"size is "<<l.size()<<endl;
    l.push_back(5);
    cout<<"size is "<<l.size()<<endl;
    //cout<<"capacity is "<<l.capacity()<<endl;  // giving error for capacity
    l.push_front(3);
    cout<<"size is "<<l.size()<<endl;
    for(int i=0;i<l.size();i++){
    cout<<i<<" "<<endl;              //list does not support to direct access(i.e.  l[i] )  so used only i for printing
}
l.pop_back();                    // IT ll remove the back element first
for(int i=0;i<l.size();i++){
    cout<<"POP IS "<<i<<endl;
}
/*
//cout<<"Element at 1st INDEX "<<l.at(1)<<endl;//it will not work here. it will give an error as list does not support it.has complexity "O(n)"
cout<<"FRONT "<<l.front()<<endl;
cout<<"BACK "<<l.back()<<endl;
cout<<"Empty "<<l.empty()<<endl;

l.erase(l.begin());
cout<<"After erase "<<endl;
for(int i=0;i<l.size();i++){
    cout<<i<<endl;
}
*/

    return 0;
}