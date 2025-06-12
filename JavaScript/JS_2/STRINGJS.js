
// String interpolation
let str = 'abs'
console.log(str);
let str2 = "xyz"
console.log(str2);

let str3 = `"${str}" != '${str2}'`
console.log(str3);

// Escape Sequence character (\)
let str4 = '"xyz\'abc"' + "'xyz'\"abc"
console.log(str4);

// string methods
let name = 'Yash \'  '
console.log(name.length);
console.log(name.toUpperCase());
console.log(name.toLowerCase());
console.log(name.slice(4));//name.slice(start,end)
console.log(name.replace('\'', "\""));
console.log(name.concat("patel")); //name.concat(many arguments)
console.log(name.trim().length);

str5 = "xyz abc pqr"
console.log(str5.includes("abc"));
console.log(str5.slice("xyz ".length));
