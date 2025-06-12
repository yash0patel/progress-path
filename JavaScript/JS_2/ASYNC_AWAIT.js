// Function that returns a promise to fetch data
function fetchData() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const success = Math.random() > 0.5; // Simulate success or failure randomly
            if (success) {
                resolve("Data fetched successfully!");
            } else {
                reject("Failed to fetch data.");
            }
        }, 2000); // Simulating a 2-second delay
    });
}

// Function using async/await to handle asynchronous operations
async function fetchDataAsync() {
    try {
        // Wait for the fetchData promise to resolve
        const result = await fetchData();
        console.log("Success:", result);
    } catch (error) {
        console.error("Error:", error);
    }
}

// Using the async function
fetchDataAsync();


// async functions in combination with await provide a more concise and 
// readable way to work with Promises in JavaScript. 
// They simplify asynchronous code by allowing you to write 
// Promise-based code as if it were synchronous, 
// while still retaining the asynchronous nature of JavaScript.
