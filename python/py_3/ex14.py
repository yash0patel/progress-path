# Counting Digits, Letters, and Special Characters
str = input('Enter String : ')

d, l, sc = 0, 0, 0
for c in str:
    if c.isdigit():
        d+=1
    elif c.isalpha():
        l+=1
    else:
        sc+=1

print(f'Digits : {d}')
print(f'Letters : {l}')
print(f'Special Characters : {sc}')