# Check if all elements in a list are unique. If a duplicate is found, exit the loop and print the duplicate.

items = ["1", "2", "3", "1", "4"]
seen = set()

for item in items:
    if item in seen:
        print("Duplicate : ", item)
        break
    seen.add(item)
