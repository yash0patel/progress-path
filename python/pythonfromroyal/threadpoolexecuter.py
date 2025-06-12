from concurrent.futures import ThreadPoolExecutor

def fibonacci(n):
    if n <= 1:
        return n
    
    n1 = 1
    n2 = 0

    for x in range(2, n + 1):
        n3 = n1 + n2
        n2 = n1
        n1 = n3
    
    return n3

num_fib_numbers = 10
l1 = []
with ThreadPoolExecutor() as executor:
    for i in range(num_fib_numbers):
        l1.append(executor.submit(fibonacci, i))
        # l1.append


print(f'Fibonacci numbers\n {l1}')
