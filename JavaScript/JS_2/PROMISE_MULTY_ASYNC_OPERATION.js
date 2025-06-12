// Function that returns a promise to fetch data
function fetchData(url) {
return new Promise((resolve, reject) => {
setTimeout(() => {
// Simulate fetching data from URL
resolve(`Data from ${url}`);
// To simulate an error, uncomment the line below
// reject(`Failed to fetch data from ${url}`);
}, Math.random() * 2000 + 1000); // Random delay between 1 to 3 seconds
});
}

// Array of URLs to fetch data from
const urls = [
"https://api.example.com/data1",
"https://api.example.com/data2",
"https://api.example.com/data3"
];

// Create an array of promises by mapping each URL to fetchData function
const promises = urls.map(url => fetchData(url));

// Using Promise.all to handle multiple promises
Promise.all(promises)
.then(results => {
console.log("All data fetched successfully:");
results.forEach(result => console.log(result));
})
.catch(error => {
console.error("Failed to fetch data:");
console.error(error);
});
