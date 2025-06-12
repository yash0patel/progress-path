# Print the Full Pyramid of Stars

# rows = int(input('Enter numbers of rows : '))
rows = 5
# for i in range(1,rows+1):
#     for k in range(i,rows+1):
#         print(end=' ')

#     for j in range(1,i+1):
#         print('*',end=' ')
#     print()


for i in range(1,rows+1):
    for j in range(1,i+1):
        if j == 1 :
            print((' '*(rows-i)) + '*',end=' ')
        else:
            print('*',end=' ')
    print()