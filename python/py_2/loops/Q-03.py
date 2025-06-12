# Print the multiplication table for a given number up to 10, but skip the fifth iteration.
num = int(input("Enter number : "))
for x in range(1,10+1):
    if x == 5:
        continue
    print(num, ' x ', x, ' = ', num * x)