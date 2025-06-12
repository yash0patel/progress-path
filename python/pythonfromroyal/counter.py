# from collections import Counter
# abc = Counter(['A','B','A','C','A','B','A','C','B','B','B','D'])
# print(Counter(['A','B','A','C','A','B','A','C','B','B','B','D']))
# print(Counter(a=3,y=5))
# print(Counter({'B': 5, 'A': 4, 'C': 2, 'D': 1}))
# breakpoint()

# from collections import defaultdict
# dict1 = defaultdict(int)
# dict1['a']=1
# dict1['b']=2
# dict1['c']=2.5
# print(dict1['d'])

from collections import namedtuple
student = namedtuple('student',['name','age','id'])
s = student('xyz','19',111)
s2 = student('xyxz','18',101)
print(s)
print(s2)