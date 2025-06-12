// Define a constructor function
function Car(make, model) {
    this.make = make;
    this.model = model;
  }
  
  // Add a property to the prototype
  Car.prototype.wheels = 4; // All cars will have 4 wheels by default
  
  // Add a method to the prototype
  Car.prototype.displayInfo = function() {
    console.log(`This car is a ${this.make} ${this.model} with ${this.wheels} wheels.`);
  };
  
  // Create instances of Car
  const car1 = new Car("Toyota", "Corolla");
  const car2 = new Car("Honda", "Civic");
  
  // Access the method and property from the prototype
  car1.displayInfo(); // Output: This car is a Toyota Corolla with 4 wheels.
  car2.displayInfo(); // Output: This car is a Honda Civic with 4 wheels.
  
  // Changing the prototype property affects all instances
  Car.prototype.wheels = 3;
  
  car1.displayInfo(); // Output: This car is a Toyota Corolla with 3 wheels.
  car2.displayInfo(); // Output: This car is a Honda Civic with 3 wheels.
  

/*

prototype :- 

    In JavaScript, prototype is a mechanism by which objects inherit properties and 
    methods from other objects. Every JavaScript object has an internal property called [[Prototype]], 
    which points to another object, known as its prototype. 
    This allows for sharing of functionality among objects, 
    making it a key feature of JavaScript's object-oriented programming.

*/