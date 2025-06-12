// Define a user object with some nested properties
const user = {
    name: "Alice",
    profile: {
      age: 25,
      contact: {
        email: "alice@example.com"
      }
    }
  };
  
  // Accessing a deeply nested property without optional chaining
  // If any property in the chain (profile, contact, or email) is missing, this would throw an error.
  const emailWithoutOptionalChaining = user.profile.contact.email;
  console.log(emailWithoutOptionalChaining); // "alice@example.com"
  
  // Using optional chaining to safely access the email
  // Here, ?. checks each property step-by-step. If 'profile' or 'contact' is undefined, it stops and returns 'undefined'.
  const emailWithOptionalChaining = user.profile?.contact?.email;
  console.log(emailWithOptionalChaining); // "alice@example.com"
  
  // Example where a property might be missing
  const userWithoutContact = {
    name: "Bob",
    profile: {
      age: 30
      // Note: 'contact' is missing
    }
  };
  
  // Using optional chaining to access 'email' when 'contact' is missing
  // Since 'contact' doesn't exist, this will return 'undefined' instead of causing an error.
  const missingEmail = userWithoutContact.profile?.contact?.email;
  console.log(missingEmail); // undefined
  