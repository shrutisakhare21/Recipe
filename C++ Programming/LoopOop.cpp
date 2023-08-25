#include<iostream>
using namespace std;
class num
{
    private:
    int n,i,j;
    public:
    void getdata(){
    cout<<"Enter n"<<endl;
    cin>>n;
    }
};

void num::putdata(){
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
        for(int j=n;j>=0;j++){
            cout<<j<<endl;
        }
    }
}

int main(){
num c;
c.getdata();
c.putdata();
return 0;
}