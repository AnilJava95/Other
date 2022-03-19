i = 2
list = [0, 1]
while i < 100:
    list.append(list[i-2]**1.1 + list[i-1]**0.5)
    i = i + 1

for value in list:
    print(value)