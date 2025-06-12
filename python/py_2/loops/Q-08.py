# Check if a number is prime.
number = 28

is_prime = True

if number > 1:
    for i in range(2, number):
        if (number % i) == 0:
            is_prime = False
            break

print(number , "is prime") if is_prime else  print(number , "is not a prime")