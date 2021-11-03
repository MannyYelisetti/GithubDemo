# Making some changes and second commit



# We will set the file name we want to read
filename = "myfile.txt" 

# We open file with open() function to only read
filehandle= open(filename, 'r') 

while True: 
   #Read single line   
   line = filehandle.readline() 
 
   #Check line if it is not null
   #If line is null this means EOF
   if not line: 
      break print(line) 

# Close the file handler 
filehandle.close()