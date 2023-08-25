#include<iostream>
using namespace std;

class OddEven{
    private :
    int a;
    public:
    void get_data(){
        cout<<"Enter a Number : ";
        cin>>a;
    }
    void put_data(){
        if(a%2==0){
            cout<<"Even";
        }else{
            cout<<"Odd";
        }
    }
};

int main(){
    OddEven a;
    a.get_data();
    a.put_data();
    return 0;
}