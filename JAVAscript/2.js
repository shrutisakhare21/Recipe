let a=null;
let b=69;
let c=true;      //boolean
let d=6969;         //bigInt
let m=BigInt("40")+BigInt("40");
let e="shruti sakhare" ;        //string
let f=Symbol("hello I am Shruti A TE Student");     //Symbol: in this u can print whole lines
let g=undefined;
console.log(a,b,c,d,e,f,g,m);

console.log(typeof f)      // using this u can understand type of datatype used


const item={             // it is an object ,thing inside object will be printed
    "Shruta"  :true,
    "Harsh"   :69,
    "Gauri"   :undefined,
    "Namesh"  :null,
    "Sanika"  :1234
}
console.log(item["Sanika"])


const data1 = {              // hw: student data
    name: "shruti",
    phone: 123456,
    marks: 170
   
};
console.log(data1["name"]);


const data2 = {
    "name": "harsh",
    "phone": 97546,
    "marks": 169
   
};
console.log(data2["name"]);
console.log(typeof name)    ;

const dict= {
    "cat":"manjar",
    "dog":"kutra",
    "camel":"unt",
    "horse":"ghoda"
};
console.log( dict["dog"]);