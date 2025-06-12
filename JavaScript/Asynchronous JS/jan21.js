// Synchronous
/*
console.log("A");
console.log("B");
console.log("C");
console.log("D");
console.log("E");
console.log("F");
*/

// Asynchronous

console.log("A");
console.log("B");
setTimeout(() => {
    console.log("C");
}, 3000);

console.log("D");
console.log("E");
console.log("F");