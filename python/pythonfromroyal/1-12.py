# class MyClass:
#     def __init__(self,age):
#         self.age = age
    
#     def myfunc(self):
#         if(self.age > 60):
#             print('senior citizen')
#         else:
#             print('not a senior citizen')

# age = int(input('Enter age : '))
# a = MyClass(age)
# a.myfunc()

# class MyClass:
#     x = 2
#     sum = 0
#     def sum_num(self,x):
#         self.sum=self.x+x
#     def display(self):
#         print('sum = ',self.sum)

# a = MyClass()
# a.sum_num(5)
# a.display()              

class MyClass:
    d1 = {'yash' : 'false',
          'jay' : 'false',
          'neel' : 'false'}
    # def _0_init__(self,d1):
    #     self.d1 = d1
    def attendance(self,name):
        if name in self.d1.keys():
            self.d1[name] = "True"
    def display(self):
        print(self.d1)

a = MyClass()
a.attendance('yash')
a.display()