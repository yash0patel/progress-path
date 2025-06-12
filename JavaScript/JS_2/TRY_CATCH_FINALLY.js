
    // Function that performs an operation and may throw an error
function performOperation() {
    const randomNumber = Math.random(); // Generate a random number

    // Simulate an error condition
    if (randomNumber < 0.5) {
        throw new Error("Operation failed due to a random condition.");
    }

    return "Operation successful!";
}

// Example of using try...catch and finally
function exampleErrorHandling() {
    try {
        // Attempt to perform the operation
        const result = performOperation();
        console.log("Result:", result); // Log the result if successful
    } catch (error) {
        console.error("Error caught:", error.message); // Handle the error if it occurs
    } finally {
        console.log("Cleanup: Perform final cleanup tasks here."); // Execute cleanup tasks regardless of errors
    }
}

// Calling the example function to demonstrate error handling
exampleErrorHandling();

// try...catch: Used to wrap code that might throw an error. 
// If an error occurs, it can be caught and handled gracefully.

// finally: Executes cleanup tasks that should be performed regardless of 
// whether an error occurred or not.
