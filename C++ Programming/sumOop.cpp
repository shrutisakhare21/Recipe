#include<iostream>
using namespace std;

class addition{
    private:
    int a,b,sum=0;
    public:
    void get_data(){
        cout<<"Enter a and b:"<<endl;
         cin>>a>>b;
    }
    void put_data(){
        cout<<"sum="<<a+b;
    }
};

    int main(){
        addition a;
        a.get_data();
        a.put_data();
        return 0;
}