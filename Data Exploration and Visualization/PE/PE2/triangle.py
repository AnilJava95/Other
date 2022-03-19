def calculatePerimeter(array):
    lenSide1 = ((array[0]-array[2])**2 + (array[1]-array[3])**2)**0.5
    lenSide2 = ((array[2]-array[4])**2 + (array[3]-array[5])**2)**0.5
    lenSide3 = ((array[4]-array[0])**2 + (array[5]-array[1])**2)**0.5
    perimeter = lenSide1 + lenSide2 + lenSide3
    print("Perimeter of the triangle: " + str(perimeter))

def calculateArea(array):
    area = abs(array[0]*array[3] + array[2]*array[5] + array[4]*array[1] - 
    array[2]*array[5] - array[2]*array[1] - array[4]*array[3]) / 2
    print("Area of the triangle: " + str(area))

filename = "input_pe2.txt"
array = []

with open(filename) as f:
    for line in f.readlines():
        fields = line.split(',')
        try: 
            array.append(float(fields[0]))
            array.append(float(fields[1]))
        except:
            command = line
            #print("test1") #test line

#print(array) #test line

if (command == 'True\n'):
    calculatePerimeter(array)
else:
    calculateArea(array)