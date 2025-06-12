# Create a function that accepts any number of keyword arguments and prints them in the format key: value.
def print_kwargs(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")


print_kwargs(one="1", two="2")
print_kwargs(three="3")
print_kwargs(one="1", two="2", three="3")