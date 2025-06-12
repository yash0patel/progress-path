# Write a program to find the HCF of two numbers using Euclidean algorithm.

n1 = 12
n2 = 228

while n2 > 0:
    n1, n2 = n2, n1%n2

print('hcf : ',n1)