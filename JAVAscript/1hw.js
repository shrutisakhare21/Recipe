let age=prompt("Enter age");    //1
if(age>=10 && age<=20){
 alert("yes");
}
else{
    alert("no");
}


let n=prompt("Enter a num");//2
if(n%2==0 && n%3==0){
    alert("divisible");
}else{
    alert("not divisible");
}


let num=prompt("Enter a num");//3
if(num%2==0 && num%3==0){
    alert("divisible by both");
}
else if(num%3==0){
    alert("divisible by 3");
}
else if(num%2==0){
    alert("divisible by 2");
}
else
{
alert("not divisible by 2 and 3");
}
    

let agee = prompt("Enter age");  //4
let message = age >= 18 ? "You can drive" : "You can't drive";
alert(message);
    