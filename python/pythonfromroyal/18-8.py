# name=input("Enter your name : ")

# if name == 'yash':
#     print("yash")
# else:
#     print('invalid name')

# n1,n2 = int(input('Enter first number : ')),int(input('Enter second number : '))

# if n1 > n2:
#     print(n1,'is greatest number')
# else:
#     print(n2,'is greatest number')


# n3 = int(input('Enter number : '))
# n1,n2 = int(input('Enter first number : ')),int(input('Enter second number : '))

# if n1 > n2:
#     if n1 > n3:
#         print(n1,'is greatest number')
#     else:
#         print(n3,'is greatest number')
# else:
#     print(n2,'is greatest number')

# age=int(input('Enter your age : '))

# if age >= 18:
#     print('yes')
# else:
#     print('no')

# age=int(input('Enter your age : '))

# if age >= 60:
#     print('yes,person is senior citizen')
# else:
#     print('no,,person is not senior citizen')

# num=int(input('Enter number : '))

# if num < 0:
#     print(num,'is nagative')
# else:
#     print(num,'is positive')

# num=int(input('Enter number : '))

# if num % 2 == 0:
#     print(num,'is even')
# else:
#     print(num,'is odd')



# ---------------------------------------------------------------



# # Example 1: Print the first 10 natural numbers using for loop. 
# for x in range(1,11):
#     print(x)



# # Example 2: Python program to print all the even numbers within the given range. 
# start=int(input('Enter starting point : '))
# end=int(input('Enter ending point : '))

# for x in range(start,end,1):
#     if x%2 == 0:
#         print(x)



# # Example 3: Python program to calculate the sum of all numbers from 1 to a given number. 
# sum=0
# end=int(input('Enter ending point : '))

# for x in range(1,end):
#     sum+=x
# print('sum = ',sum)



# # Example 4: Python program to calculate the sum of all the odd numbers within the given range.
# sum=0
# start=int(input('Enter starting point : '))
# end=int(input('Enter ending point : '))

# for x in range(start,end+1,1):
#     if x%2 != 0:
#         sum+=x
# print('sum = ',sum)



# #  Example 5: Python program to print a multiplication table of a given number 
# num=int(input('Enter number : '))
# for x in range(1,11):
#     print(f'{num} x {x} = {num*x}')



# # Example 6: Python program to count the total number of digits in a number.
# count=0
# num=input('Enter number : ')
# # for x in str(num):                  # 000123
# #     count+=1
# for x in num.isdigit():
#     count+=1
# print(f'Total digits in a number : {count}')



# #  Example 7: Python program that accepts a word from the user and reverses it.
# str = input('Enter word : ')
# print('reversed word : ',str[::-1])



#  Example 8: Python program to count the number of even and odd numbers from a series of numbers. 
# l1 = list(input('Enter series of number : '))
# for x in range(0,len(l1)):
    
# print(l2,l1)



# # Example 9: Python program to find the factorial of a given number.
# fact = 1
# num=int(input('Enter number : '))
# for x in range(1,num+1):
#     fact*=x
# print(fact)
