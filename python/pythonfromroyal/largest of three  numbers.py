# # Write a Python program to find the largest of three numbers.
# # Test Data : 12 25 52
# # Expected Execution:
# # 1st Number = 12
# # 2nd Number = 25
# # 3rd Number = 52

def bignum(*num):
    l1 = list(num)
    
    print('1st number : ',min(l1))
    for x in l1:
        if min(l1) != x and max(l1) != x:
            print('2nd number : ',x)        
    print('3rd number : ',max(l1))

bignum(int(input('enter three numbers : ')),int(input()),int(input()))    



# # Take values of length and breadth of a rectangle from user and check if it is square or not.
# x = lambda l,b : print('square') if l == b else print('not a square')
# x(int(input('enter length : ')),int(input('Enter breadth : ')))



# # Take values of length  of a square from user and find area of a square.
# x = lambda l,b : l*b if l == b else print('not a square')
# print('area of square : ',x(int(input('enter length : ')),int(input('Enter breadth : '))))


