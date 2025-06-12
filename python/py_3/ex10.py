# Check the Armstrong Number

num = 153

sum = 0

temp = num

while temp > 0:
    sum += (temp%10)**3
    temp //= 10

if num == sum:
    print(f'{num} is an Armstrong Number')
else:
    print(f'{num} is not an Armstrong Number')