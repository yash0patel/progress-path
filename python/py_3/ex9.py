# Print the Pascal's Triangle

from math import factorial

rows = 5
for i in range(rows):
    print(" " * (rows - i), end="")

    for j in range(i + 1):
        ncr = factorial(i) // (factorial(j) * factorial(i - j))
        print(ncr, end=" ")
    print()