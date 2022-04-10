// console.log('Hello');
// challenge-1
function ageInDays(){
var birthyear=prompt("What yr were you born ?");
var Days=(2022-birthyear)*365;
var h1=document.createElement('h1');
var textAnswer=document.createTextNode('You are '+Days+'days .')
h1.setAttribute('id','ageInDays');
h1.appendChild(textAnswer);

// console.log(Days);
document.getElementById('flex-box-result').appendChild(h1);
}
// var ageInDays=(2022-birthyear)*365;
// console.log(ageInDays);
function reset(){
    document.getElementById('ageInDays').remove();
}