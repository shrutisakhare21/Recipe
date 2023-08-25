#include<iostream>
using namespace std;
int main(){
    int array []={0,-1,-2,3, 7, 18,9,11};
    int max=array[0]; //array[0] coz mi tyala index 0 pasun compare karnar ahe.
for(int i=0;i<8;i++){ //ithe me array la initialise 1 pasun pn kru shkte
if (array [i]>max) {   
//comaparison wali condn ahe.just like sorting ha pahila index zero check krnar then to inex 2 as krt sgle compare krnar.
max=array [i]; 
//if maza index 3 la highest ala tr index 3 chi value update honar max term madhe
}
}
cout<<max<<endl;  //ithe mazi max term print honar.double inverted use kele nahi karn value print honar statement nahi.


int min=array[0];
for(int i=0;i<5;i++){
     if (array [i]<min) {
min=array [i];
}
}
cout<<min<<endl;
return 0;
}