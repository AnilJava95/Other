i = 2
list = [0, 1]
while i < 100:
    list.append(list[i-2] + list[i-1])
    i = i + 1

for value in list:
    print(value)