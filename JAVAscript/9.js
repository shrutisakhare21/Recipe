let a=[12,33,45,78];
for(let i=0;i<a.length;i++){     //remember this
console.log(a[i]);
}


let b=[12,33,45,78];        //for each loop
b.forEach((element) => {
    console.log(element*element)
})


let name="harshu";           //array from
let arr=Array.from(name);
console.log(arr);    //out ll be separate alphabets


for(let i of a){        //for of
    console.log(i);   //same as simple loop
} 


for(let i in a){        //for in
    console.log(i);   //give index numbers
} 

