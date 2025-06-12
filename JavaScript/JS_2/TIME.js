
// document.write("alert");
// let a = setTimeout(() => {
//     alert("alert.....")
// },2000)

// clearTimeout(a)
// console.log(a);

let sum = (a, b, c) => {
    console.log(`${a} + ${b} + ${c} = `, a + b + c);
}
// setTimeout(sum,1000,1,2,7) //exicute 1 time setTimeout return timer id (fun,delay,arg1,arg2,arg3...) 
i = 0, j = 1, k = 2
let interval = setInterval(() => {
    sum(i++, j++, k++)
}, 1000)
clearInterval(interval)// break setinterval (use with if else)