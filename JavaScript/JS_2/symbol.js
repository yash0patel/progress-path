// Create a unique symbol
const id = Symbol("id");

// Use the symbol as a unique property key in an object
const user = {
  name: "Alice",
  [id]: 12345 // Symbol as a key
};

// Accessing the symbol property
console.log(user[id]); // 12345

// Symbols are unique, even with the same description
const id2 = Symbol("id");
console.log(id === id2); // false

// Regular property access
console.log(user.name); // "Alice"

// Symbol properties are not included in regular for...in loops
for (let key in user) {
  console.log(key); // Only "name" will be logged
}

// However, symbol properties can still be accessed directly
console.log(Object.getOwnPropertySymbols(user)); // [ Symbol(id) ]

/*

Symbol : -

    A Symbol in JavaScript is a unique and immutable primitive data type 
    used primarily to create unique property keys for objects. 
    Symbols prevent naming conflicts and enable "hidden" properties in objects, 
    as they do not appear in standard property enumerations (such as for...in loops).

    Each symbol is guaranteed to be unique, 
    even if multiple symbols are created with the same description.

*/