# coding: utf-8
input_line = input()
num = input_line.split()

input2_line = input()

st = int(num[0])-1
ed = int(num[1])

str1 = input2_line[st:ed].swapcase()
print(input2_line[:st] + str1 + input2_line[ed:])

'''
nums = input().split()
string = input()

print(string[0 : int(nums[0]) - 1], end="")
print(string[int(nums[0]) - 1 : int(nums[1])].upper(), end="")
print(string[int(nums[1]) :])
'''