# Alternatively, instead of iterating through each of the numbers from 1 to N,
# you could only count up in multiples of 3/5 until you reach the desired number

def counter(count_to, by_multiples):
    return range(by_multiples, count_to, by_multiples)

n = 10
sum = sum(counter(n, 3)) + sum(counter(n, 5))

print("Range Summation:", sum)

# Another idea would be to use a list of numbers 1...n
# and make a second list with all the true/false values
# then 

all_nums = list(range(1, n, 1))
is_valid = [x % 3 == 0 or x % 5 == 0 for x in all_nums]

valid_nums = [i for indx, i in enumerate(all_nums) if is_valid[indx]]

sum = 0
for num in valid_nums:
    sum = sum + num
print("Truthy Array:", sum)