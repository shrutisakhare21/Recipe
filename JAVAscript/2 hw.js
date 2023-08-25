let m=prompt("enter num between 1 to 3");
m=Number.parseInt();
do{
 console.log("try again");
 m=prompt("enter num bet 1 to 3");
}
while(m!==1 || m!==2 || m!==3);


let count=4;
let i;
while(i!=count){
    i=prompt("enter a num");
    console.log("try again");
}
console.log("you have entered a correct number");