// A simple promise that resolves after 2 seconds
let myPromise = new Promise((resolve, reject) => {
    setTimeout(() => {
        // Change success to false to simulate a rejection
        let success = true;
        if (success) {
            resolve("Data fetched successfully!");
        } else {
            reject("Failed to fetch data.");
        }
    }, 2000);
});

// Using the promise
myPromise
    .then((message) => console.log(message))
    .catch((error) => console.error(error));

