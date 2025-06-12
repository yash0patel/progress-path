def xyz(a, b):
    if a > b:
        print("a is greatest number")
    else:
        print("b is greatest number")

    print("sum = ", a + b)


xyz(a=int(input("Enter a : ")), b=int(input("Enter b : ")))

# xyz(int(input("Enter a : ")), int(input("Enter b : ")))