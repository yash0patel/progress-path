# Print the Fibonacci Sequence

terms = 10

n1 , n2 = 0, 1

for t in range(terms):
    print(n1,end=' ')
    n = n1 + n2
    n1 = n2
    n2 = n