#Movie tickets are priced based on age: $12 for adults (18 and over), $8 for children. Everyone gets a $2 discount on Wednesday.

age = int(input("Enter age : "))
day = "wednesday"

price = 12 if age >=18 else 8

price -= 2 if day == "wednesday" else price

print("Ticket price for you is $",price)