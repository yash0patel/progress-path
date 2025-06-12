let array = [1, 2, null, false, "xyz"]
console.log(array.length);

let arr = [1, 2, 3, 4, "x"]
console.log(typeof (arr[0]));
let str = arr.toString()
console.log(str);
let str2 = arr.join(" + ");
console.log(str2);
let popelment = arr.pop()
console.log(arr, " pop element is " + popelment);
let pushelement = arr.push(5)
console.log(arr, "push element is " + pushelement);
let shiftelement = arr.shift()
console.log(arr, "shift element is " + shiftelement);
let unshiftelement = arr.unshift(1)//many argumant arr.unshift(0,1) 
console.log(arr, "unshift elements array length is  " + unshiftelement);
delete arr[0]
console.log(arr, arr.length);//[empty, 2, 3, 4, 5] 5
let newarr = arr.concat(array)//many argumant
console.log(newarr);
let arr1 = [11, 15, 19, 66, 44, 22, 2, 5, 6, 88, 7, 10]
console.log(arr1.sort());//[10, 11, 15, 19, 2, 22, 44, 5, 6, 66, 7, 88]
console.log(arr1.reverse());//[88, 7, 66, 6, 5, 44, 22, 2, 19, 15, 11, 10]
//array sorting
let compare = (a, b) => {
    return a - b;
}
console.log(arr1.sort(compare));

arr.splice(2, 3, 103, 104, 105, 106)
// (index , delete,add...) return deleted values
console.log(arr);//[empty, 2, 103, 104, 105, 106]

let arr2 = arr.slice(2, 6)
console.log(arr2, arr);//  [103, 104, 105, 106] (6) [empty, 2, 103, 104, 105, 106]

//array map method
console.log("arr map mathod");
let a = arr.map((value, index, array) => {
    console.log(value, index, array);
    return value * 10
})
console.log(a);

//array filter method
let a2 = arr.filter((ele) => {
    return ele > 100
})
console.log(a2);

//array reduce method
let a3 = arr.reduce((num1, num2) => {
    return num1 + num2//any operation
})
console.log(a3);
