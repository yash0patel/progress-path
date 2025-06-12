# Implement a decorator that caches the return values of a function, 
# so that when it's called with the same arguments, 
# the cached value is returned instead of re-executing the function.

import time

def cache(func):
    cache_value = {}
    def wrapper(*args):
        print("cache_value : ",cache_value)
        if args in cache_value:
            print("Cache hit for arguments:", args)
            return cache_value[args]
        print("Cache miss for arguments:", args)
        result = func(*args)
        cache_value[args] = result
        return result
    return wrapper

@cache
def long_running_function(a, b):
    time.sleep(3)
    return a + b

print(long_running_function(2, 3))
print(long_running_function(2, 3))
print(long_running_function(4, 3))