# Reverse a string using a loop.

str = "abcd"
reversed_str = ""

for char in str:
    reversed_str = char + reversed_str  

print(reversed_str)