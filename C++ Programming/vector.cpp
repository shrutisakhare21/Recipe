#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a(5,1);      //it gives 5 times 1
cout<<"a is ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
vector<int>last(a);           //ask harsh about this
vector<int>v;
cout<<"Capacity-> "<<v.capacity()<<endl;
v.push_back(1);                             //push_back used for inserting element in array
cout<<"Capacity-> "<<v.capacity()<<endl;
v.push_back(2);
cout<<"Capacity-> "<<v.capacity()<<endl;
v.push_back(4);
cout<<"Capacity-> "<<v.capacity()<<endl;
cout<<"Size-> "<<v.size()<<endl;
cout<<"Element at 2nd Index " <<v.at(2) <<endl;    //at is compulsory .just have to change the variable name.it will give value at that index number
cout<<"Empty "<<v.empty() <<endl; 
cout<<"First element is "<<v.front() <<endl; 
cout<<"Last element is "<<v.back() <<endl; 
v.pop_back();                                      //used pop 
for (int i = 0; i <v.size(); i++) {           // just use loop when u use pop.TILL var.size()
    cout << v[i] << " "<<endl;
}
cout<<"before clear size "<<v.size()<<endl;
v.clear();                                   //used to clear the elements and then it gives ZERO size
cout<<"After clear size is "<<v.size();
return 0;
}