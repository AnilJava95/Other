import pandas as pd
import numpy as np

def iqr(row):
   list = row.values.tolist()[0]
   list.sort()

   q1 = list[1] 
   q3 = list[5] 
   return q3 - q1

# Create dara frame with random values
np.random.seed(1234)

list1 = ['One', 'Two', 'Three', 'Four', 'Five', 'Six', 
   'Seven', 'Eight']
data1 = pd.DataFrame(np.random.randint(0,49,size=(6, 8)), columns=list(list1), index=['A', 'B', 'C', 'D', 'E', 'F'])

# Calculate iqr for each row and add it as a column
list2 = [0, 0, 0, 0, 0, 0]

for x in range(1, 7):
   list2[x-1] =  (iqr(data1[x-1:x]))

data1['Eight'] = list2

# Calculate cv for each row and add it as a column
std = data1.std(axis=1)
mean = data1.mean(axis=1)
list2 = std/mean

data1['CV'] = list2

# Calculate mean for each column and add it as a row

mean = data1.mean(axis=0).tolist()

data1.loc[len(data1)] = mean

data1 = data1.rename(index = {6: 'Mean'})

print(data1)