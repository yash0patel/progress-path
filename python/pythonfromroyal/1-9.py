# def full_name(**name):
#     print(name['FirstName'] + name['MidalName'] + name['LastName'])

# full_name(FirstName=input('Enter your first name : '),MidalName=input('Enter your midal name : '),LastName=input('Enter your last name : '))

# l1 = [1,2,3,4,5,6,7,8,9,10]

# def even(list):
#     for x in list:
#         if(x%2==0):
#             print(x,'\n')

# even(l1)

x = lambda y: print('leep year') if y%4==0 else print('not a leep year') 
print(
    x(int(input('Enter year : '))))