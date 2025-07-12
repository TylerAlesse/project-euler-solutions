# Alternatively, instead of iterating through each of the numbers from 1 to N,
# you could only count up in multiples of 3/5 until you reach the desired number

def counter(count_to, by_multiples):
    return range(by_multiples, count_to, by_multiples)

n = 1000
threes = counter(n, 3)
fives = counter(n, 5)
uniques = set(threes) | set(fives)
out_val = sum(uniques)

print("Range Summation:", out_val)

# Another idea would be to use a list of numbers 1...n
# and make a second list with all the true/false values
# then 

all_nums = list(range(1, n, 1))
is_valid = [x % 3 == 0 or x % 5 == 0 for x in all_nums]

valid_nums = [i for indx, i in enumerate(all_nums) if is_valid[indx]]

out_val = 0
for num in valid_nums:
    out_val = out_val + num
print("Truthy Array:", out_val)