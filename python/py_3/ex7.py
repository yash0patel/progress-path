# Write a program to print the left pyramid of stars as shown:
rows = 5

# for i in range(1,rows+1):
#     for k in range(i,rows+1):
#         print(' '*2,end='')

#     for j in range(1,i+1):
#         print('*',end=' ')
#     print()

# for i in range(rows-1,0,-1):
#     for k in range(i,rows+1):
#         print(' '*2,end='')

#     for j in range(1,i+1):
#         print('*',end=' ')
#     print()


for i in range(1, rows+1):
    print(" " * (rows-i) * 2 + "* " * i)

for i in range(rows-1, 0, -1):
    print(" " * (rows-i) * 2 + "* " * i)