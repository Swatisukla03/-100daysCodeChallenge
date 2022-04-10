// This is the javascript File
// alert("Yo Bro Rock iT");
// var b="Swati";
// console.log(b);
// var someNumber=45;
// console.log(someNumber);
// var age=prompt("What is your Age ?");
// document.getElementById('sometext').innerHTML=age;
// var num1=10;
// num1++;
// num1--;
// console.log(num1);

// function
// -create a function   
// -call a function  
// function fun(){
//     console.log("this is a function")
// }
// fun();
// function greeting(){
//     var name=prompt('What is your name?');
//     var result="Hello"+" "+name;
//     console.log(result);
// }
// greeting();
//Argument based functions
// function sumNumber(num1,num2){
//     var result=num1+num2;
//     console.log(result);
// }
// sumNumber(12,10);
//while and  for loops
var num = 0;
//for loop
for (let num = 0; num <= 10; num++) {
    console.log(num);
}
//data type
var yourAge = 18;
let yourName = "Swat";
let name = { first: 'Ricsuk', last: 'Sukla' }; //this is an object
let truth = false; //boolean
let groceries = ['apple', 'banana', 'oranges']; //array
let random; //undefined
let nothing = null;

//strings in javascript
let fruit = 'banana,apple,strawberries,oranges'
let moreFruits = 'banana\napple'; //added a new line
console.log(moreFruits);
console.log(fruit.length);

console.log(fruit.slice(2, 6));
console.log(fruit.toUpperCase()); //uppercase
console.log(fruit.toLowerCase());//lowercase
console.log(fruit.charAt(2)); //shows the character at that index
console.log(fruit.indexOf('a')); //shows the index
console.log(fruit.split(','));
console.log(fruit.length);
// console.log(size(fruit));
for (let i = 0; i < fruit.length; i++) {
    console.log(fruit[i]);
}
let vegetable = ['Tomato', 'Spinach', 'Potato'];
let all_groceries = vegetable.concat(vegetable);
console.log(all_groceries);
let someNumber = [13, 11, 31, 23, 41, 15, 62, 76];
console.log(someNumber.sort());
// console.log(someNumber)
let emptyarray = new Array();
for (let num = 0; num <= 10; num++) {
    emptyarray.push(num);
}
console.log(emptyarray)
//objects in javascript
//dictionary in python
// let student={first:'Swati',last:'Sukla',age:25,height:5.5};
// console.log(student.first);
// console.log(student.last);

let student = {
    first: 'Swat',
    last: 'Sharma',
    age: 23,
    height: 170,
    studentInfo: function () {
        return this.first + " " + this.last;
    }

};
console.log(student.first);

student.last = "Sukla";
console.log(student.last);
student.age++;
console.log(student.age)
console.log(student.studentInfo());
//conditionals,control flows(if else)
let age = 20;
if ((age >= 18) && (age <= 35)) {
    statusbar = 'target demo';
    console.log(statusbar);

} else {
    statusbar = 'not my audience';
    console.log(statusbar);
}
//switch statement in Javascript
//differentiate between weekdays and Weekends

switch (6) {
    case 0:
        text = 'weekend';
        break;
    case 5:
        text = 'weekend';
        break;
    case 6:
        text = 'Weekend';
        break;
    default:
        text = 'weekday';
        break;
}
console.log(text);






