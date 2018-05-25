let abc : any;
let strArr : string[];
let numArr: number[];
let arr: [string, number];
abc = 123;
strArr = ["a","b"];
numArr = [1,2,3];
arr = ["pop",3];

function getSum(num1:number, num2:number):number{
    return num1+num2;
}

interface todo{
    title: string,
    text: string
}

let myTodo :todo = {
    title: "ahmed",
    text: "he",
}
console.log(getSum(1,2))