/*let a=prompt("shruti_harsh");   //prompt will ask for a input to user
console.log(typeof a);// no matter what ur input to a is it will always be of string type
a=Number.parseInt(a); // by using this statement the type will change to integer
if(a>68){
    alert("shruti");      // alert will directly display the message on the screen
}
else{
    alert("harsh");
}
*/
let number = prompt("Enter a number between 1 and 5");

switch (number) {
    case "1":                // case num should be string .ie in double cotes
        alert("hi");
        break;
    case "2":
        alert("hello");
        break;
    case "3":
        alert("namaste");
        break;
    case "4":
        alert("holaa");
        break;
    case "5":
        alert("nice to meet you");
        break;
    default:
        alert("ok bye");
        break;
}
