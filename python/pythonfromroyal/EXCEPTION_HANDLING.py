# try:
#     print('try')
#     a = 0
#     print(1/a)
# except:
#     print('error')
# finally:
#     print('finally')

# try:
#     dict1={
#         'xyz':'123'
#     }
#     print(dict1['abc'])
#     print(xyz)
# except KeyError as error:
#     print(error)

# try: 
#     print(xyz)
# except NameError as error:
#     print(error)

# try:
#     a = 10
#     a.pop()
# except AttributeError as error:
#     print(error)

num = input("Enter number :")
if not num.isdigit():
    raise Exception("please enter number")