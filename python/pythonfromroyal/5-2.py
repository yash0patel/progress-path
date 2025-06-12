# x = lambda a,b : {a:a**b}
# # print(x(2,3))

# l1 = [1,2,5,4,3,6,8,9,55,20]

# even = list(filter(lambda x : x%2 != 0,l1))
# print(even)

# # Write a Python program that creates a list of names and uses the filter function to extract names that start with a vowel (A, E, I, O, U).
# l2 = ["Elita", "Vitold", "Audovacar", "Kerensa", "Ramana", "Iolanda", "Landyn"]
# vowel = list(filter(lambda x : x[0] not in ['A','E','I','O','U'],l2))
# print(vowel)


# def isVowStart(name):
#     name = name.lower()
#     if(name[0] in ["a","e","i","o","u"]):
#         return True
#     return False

# names = ["Elita", "Vitold", "Audovacar", "Kerensa", "Ramana", "Iolanda", "Landyn"]
# vowNames = list(filter(lambda name:isVowStart(name),names))
# print(vowNames)

# Write a Python program that creates a list of tuples, each containing a city name and its population. Use the filter function to extract cities with a population greater than 2 million.

cities = [
    ("New York", 8500000),
    ("Los Angeles", 4000000),
    ("Chicago", 2700000),
    ("Houston", 2300000),
    ("Phoenix", 1600000),
    ("Philadelphia", 1500000),
    ("San Antonio", 1500000),
]

cities2 = list(map(lambda x : x[0], filter(lambda x : x[1] > 2000000 , cities)))
print(cities2)

l1 = [1]
print(l1+l1)