alien_O = {'color': 'green', 'points': 5} 
alien_1 = {'color': 'yellow', 'points': 10}

aliens = [alien_O,alien_1] 

#Accessing key,value 
for i in aliens: 
    for key,value in i.items(): 
        print("KEY: ", key, "\t" , "VALUE :", value) 
