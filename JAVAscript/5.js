for(let i=0;i<5;i++){
    console.log(i);
}


const maarks={
    harry: 98,
    rohan:70,
    akash:7
};
for(let a in maarks){
console.log("marks of " + a + " is " + maarks[a]);//here a is basic var used to display the given names in list.u can use any var instead of a
}                                                       //marks[a] will display the marks


for(let b of "marks"){     // it is used when iterable
  console.log(b);
}


const numbers = [1, 2, 3, 4, 5];
for (const number of numbers) {
    console.log(number);
}


let n=prompt("enter a num");
n=Number.parseInt(n);
let i=0;
while(i<n){
    console.log(i);
    i++;
}


let o=prompt("enter num");
m=Number.parseInt();
let l=0;
do{
console.log(l);
l++;
}
while(j<l);


function mean(a,b,c,d,e){
    return (a+b+c+d+e)/5;
}
let a=1
let b=2
let c=3
let d=4
let e=5
console.log("mean is" ,mean(a,b,c,d,e));



let marks={
    shru:19,
    harshu:20,
    namu:20,
    gaura:20
}
for(i=0;i<Object.keys(marks).length;i++){
    console. log("The marks of " + Object. keys(marks)[i] + " are " + marks [Object. keys (marks) [i]])
}