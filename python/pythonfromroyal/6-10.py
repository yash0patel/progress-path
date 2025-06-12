# remove repeating items from list [None,1,None,1]===[None,1]
# l1 = ['1','2','3','1','55',1,2,2,3,"5"]
# print(l1)
# l1 = list(set(l1))
# print(l1)

# remove ony None values or empty values from list--None
# l1 = [1,'',25,'abc','',5,'xyz','',None]
# print(l1)
# l2 = []
# for x in l1:
#     if x != '' and x != None:
#         l2.append(x)
# print(l2)

# add multiple items to tuple
# t1 = (1,2,3,4,5)
# print(t1)

# a,b,c,d = 6,7,8,9
# t1 = list(t1)
# t1.append(a)
# t1.append(b)
# t1.append(c)
# t1.append(d)
# t1 = tuple(t1)

# print(t1)

# find factorial of the elements in the list # [1,5,3,6,7]
# l1 = [0,1,5,3,6,7]
# j = 0
# for x in l1:
#     fact = 1
#     for i in range(1,x):
#         l1[j] = l1[j]*i
# #     j+=1

# l1 = [1,5,3,6,7]
# fact = 1
# # for x in l1:
# #     fact*=x
# # print(fact)
# # print(l1)
# ans = lambda fact : [lambda fact: fact*x for x in l1]
# print(ans(1))
# # check whether elements in the list are pallindrome or not ["mam","ram","121","33"]
# # l1 = ["mam","ram","121","33"]
# # print(l1)
# # for x in l1:
# #     if x == x[::-1]:
# #         print(x,' is pallindrome\n')


# di = {
#     "a" : 12,
#     "b" : 13,
#     "c" : 14,
#     ""  : 10,
#     "xyz" : 0
# }
# a1 = (1,2,3)
# a2 = (11,22,33)
# di.update({'xyz' : 11})
# di.update({'abc' : 0})
# di.update(dict(zip(a1,a2)))
# print(di)

# Write a Python script to concatenate the following dictionaries to create a new one.Sample 
# # Dictionary :
# dic1={1:10, 2:20}
# dic2={3:30, 4:40}
# dic3={5:50,6:60}
# result = {}
# # Expected Result : {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
# result.update(dic1)
# result.update(dic2)
# result.update(dic3)
# print(result)

# dict1 = {}
# for x in range(1,16):
#     multy = x*x
#     dict1.update(dict(zip(str(x),(multy))))
#     # dict1.update({x:x*x})
# print(dict1)

# s1 = str(input('Enter string : '))
# result = {}
# for x in s1:
#     count = 0
#     for y in s1:
#        if(x==y):
#             count+=1 
#     result.update({x:count})
# print(result) 

# Write a Python program to drop empty items from a given dictionary.Original 
# New Dictionary after dropping empty 
# items:{'c1': 'Red', 'c2': 'Green'}
# Write a Python program to drop empty items from a given dictionary.Original 
# d1:{'c1': 'Red', 'c2': 'Green', 'c3': None}
# New Dictionary after dropping empty 
# items:{'c1': 'Red', 'c2': 'Green'}


# Write a Python program to match key values in two dictionaries.
# Sample dictionary: {'key1': 1, 'key2': 3, 'key3': 2}, {'key1': 1, 'key2': 2}
# Expected output: key1: 1 is present in both x and y

# d1 = {'key1': 1, 'key2': 3, 'key3': 2}
# d2 = {'key1': 1, 'key2': 2}

# for x1,x2 in d1.items():
#     for y1,y2 in d2.items():
#         if x1==y1:
#             print(x1,x2,' is present in both x and y')

# class MyClass:
#     x = 5
#     sum = 0
#     def Sum(self,x):
#         self.sum=self.x+x
#     def display(self):
#         print('sum = ',self.sum)

# a = MyClass()
# a.Sum(5)
# a.display()

# class StdDetails:
#     def __init__(self,name,position):
#         self.name = name
#         self.position = position
#     def search(self,y):
#         print(self.name[y],' - ',self.position[y])

# a = StdDetails({1:'abc',2:'xyz',3:'pqr'},{1:2,2:1,3:3})
# a.search(2)











