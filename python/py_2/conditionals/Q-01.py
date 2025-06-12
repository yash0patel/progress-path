# Classify a person's age group;child(<13),Teenager(13-19),adult(20-59),Senior(60+).
age = int(input("Enter age: "))

if age < 0:
    print("Invalid age")
elif age < 13:
    print("Child")
elif age < 20:
    print("Teenager")
elif age < 60:
    print("Adult")
else:
    print("Senior")
