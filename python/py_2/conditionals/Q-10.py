# Recommend a type of pet food based on the pet's species and age. (e.g., Dog: <2 years - Puppy food, Cat: >5 years - Senior cat food).
# Input pet species and age
species = input("Enter your pet's species (Dog or Cat): ")
age = int(input("Enter your pet's age : "))

# Determine the recommended food
if species == "dog":
    if age < 2:
        food = "Puppy food"
    else:
        food = "Senior dog food"
elif species == "cat":
    if age <= 5:
        food = "Kitten food"
    else:
        food = "Senior cat food"
else:
    print("invalide input")
    exit()

# Print the recommendation
print("Recommended food : ",food)
