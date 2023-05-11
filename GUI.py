file1 = open("Yash1.txt","r")
file2 = open("Yash2ṇ.txt","w")

lst = file1.readlines()

for i in lst :
    word = i.split()
    file2.write( " ".join(word)  )
    file2.write("\n")

print("Program has successfully run")

file2.close()
file1.close()
