#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_back(6);
d.push_front(9);
/*
for(int i=0;i<d.size();i++){
    cout<<d[i]<<" "<<endl;
}

d.pop_back();                    // IT ll remove the back element first
for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
}
 
d.pop_front();                  //it will remove the front element first
for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
}
*/
cout<<"Element at first INDEX "<<d.at(1)<<endl;       //Element at particular INDEX
cout<<"FRONT "<<d.front()<<endl;
cout<<"BACK "<<d.back()<<endl;
cout<<"Empty "<<d.empty()<<endl;

cout<<"before erase "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);           //It will erase that value (mentioned 1 so it will erase one value)
cout<<"After erase "<<d.size()<<endl;      
for(int i=0;i<d.size();i++){              //it will give the element which was remaining
    cout<<d[i]<<" "<<endl;
}   
return 0;x
}