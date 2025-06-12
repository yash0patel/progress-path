// Function that throws an error conditionally
function checkAge(age) {
    if (typeof age !== 'number' || isNaN(age)) {
        throw new Error("Age must be a valid number."); // Throw an Error object
    }

    if (age < 18) {
        throw new Error("You must be 18 or older.");
    }

    return "Access granted."; // If conditions are met, return success message
}

// Example usage of the function with error handling
function verifyAccess(age) {
    try {
        const result = checkAge(age); // Call checkAge function that might throw errors
        console.log(result); // Log success message if no error
    } catch (error) {
        console.error("Error:", error.message); // Handle error and log error message
    }
}

// Testing the function with different ages
verifyAccess(20); // log "Access granted."
verifyAccess("not a number"); // log "Error: Age must be a valid number."
verifyAccess(15); // log "Error: You must be 18 or older."


// throw Statement:
// Used to throw an Error object when an exceptional condition occurs.
// Error Object:
// Represents an error object with a message property that describes the error.
// Together, these elements (throw and Error object) provide a mechanism for
// handling and communicating errors in JavaScript,
// ensuring that applications can gracefully manage unexpected conditions.
