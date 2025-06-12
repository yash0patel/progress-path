# Print the Right Triangle Number Pattern

rows = int(input('Enter numbers of rows : '))
for i in range(rows):
    for j in range(i+1):
        print(j+1,end=' ')
    print()