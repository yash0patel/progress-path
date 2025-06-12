# program to check whether the given string is a palindrome or not.

str = input('Enter a string : ').replace(' ','').lower()

if str == str[::-1]:
    print('is a palindrome')
else:
    print('is not a palindrome')
    
    