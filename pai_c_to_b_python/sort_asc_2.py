n = int(input())
m = input().split(" ")

for i in range(n):
    m[i] = int(m[i])

l = sorted(m)
for j in range(n):
    print(l[j])

'''
input()  # 1つ目の入力は使わないので読み飛ばす
strings = input().split()
nums = []

for num in strings:
    nums.append(int(num))

nums.sort()

for i in nums:
    print(i)
'''