# iven a list of numbers, count how many are positive.

l1 = [1, -2, 3, -4, 5, 6, -7, -8, 9, 10]
positive_num_count = 0
for num in l1:
    if num > 0:
        positive_num_count += 1
print("count of Positive number is: ", positive_num_count)