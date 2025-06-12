from abc import ABC,abstractmethod

class Polygon(ABC):
    @abstractmethod
    def noofsides(self):
        pass

class Triangle(Polygon):
    def noofsides(self,a):
        print('a : ',a)

t = Triangle()
t.noofsides(2)
from datetime import datetime 
date_str = "30 march 2005 00:00:00"

date_obj = datetime.strptime(date_str,"%d %B %Y %H:%M:%S")
print(date_obj)

difference = datetime.now() - date_obj
print(difference)
