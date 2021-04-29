num = int(input())
inputs = {}

for i in range(num):
    tmp = input().split()
    inputs[int(tmp[1])] = tmp[0]

inputs = sorted(inputs.items())

for i in inputs:
    print(i[1])

'''
不正解
n = int(input())
for i in range(n):
    m = input().split(" ")
    l = m[0]
    o = int(m[1])
    x = {l:o}
'''