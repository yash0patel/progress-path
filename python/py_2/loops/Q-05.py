# Given a string, find the first non-repeated character.
str = "abcdabd"

for ch in str:
    if str.count(ch) == 1:
        print("non-repeated Char is: ", ch)
        break