let array=[6,45,47,49];
console.log(array);        // print out with sq braces
console.log("the length of array is ",array.length);


let arr=["shruti",69,"harsh" ];
arr[3]="happy";                //it will insert an element at position 3
console.log(arr);
console.log(typeof arr);    //type of object will be object


let a=[1,2,3];                //toString method          //its tytpe will always strong
let c=a.toString();                       //it will print out without sq braces like a string
console.log(c)
console.log(typeof c);

let b=[1,5,8];                 //join method
console.log(b.join("and"));                  //type will be string
console.log(typeof b);


let d=[1,2,3,4,5];            //pop method
let r=d.pop();          //it delete the last value
console.log(d);        
console.log(d,r);      //it retuns the popped value thats why r is used

let e=[1,2,3];        //push method
let f=e.push(2)        //add new element at last
console.log(e);
 

let g=[6,2,3,4];     //shift meth
console.log(g.shift());   //remove 1st element and retuns it


let h=[3,4,5,2];                         //unshift meth
console.log(h.unshift(1));    //it add new element and print length
console.log(h);


let i = [1, 2, 3, 4, 5];    //delete meth      //after deletion it ll not change the length
console.log(i.length);
delete i[3]; // Remove element at index 3
console.log(i);
console.log(i.length);


let j=[1,2,3,4];       //CONCATINATION OF ARRAY
let k=[5,6,7,8];
let l=[9,10,11,12]
console.log(j.concat(k,l));

let m=[1,8,3];              //sort 
console.log(m.sort());


let compare = (a, b)=>{      //compare method for ascending
    return a-b;
}  
    let num = [551, 22, 3, 14, 5, 6, 7, 8, 2291]
    num.sort(compare);
    console.log(num);

   
  /*  let compare = (a, b)=>{       //compare method for desscending
        return b - a
    }  
        let num = [551, 22, 3, 14, 5, 6, 7, 8, 2291]
        num.sort(compare);
        console.log(num);*/

let n=[1,2,"shruta",5,9];       //reverse method
console.log(n.reverse());


let o=[4,22,91,22,33,83,16];          //splice method
o.splice(2,4, 1021,222,3332);     //it will delete values of index 2,3,4 and adds 1021,,,,. values there
console.log(o.splice());


const p=[1,2,3,4,5];                    //slice method
console.log(p.slice(1,3));                    //it ll remove index 1 and 2 and create a new array from using this