# Calculate the sum of even numbers up to a given number n.
n = int(input("Enter value of n : "))
sum = 0
for x in range(1,n+1):
    if x % 2 == 0:
        sum+=x
print("sum of even numbers : ",sum)