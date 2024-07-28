#store the occurence of every element of array in another array
l=[1,2,3,2,3,4,3,2]
hash=[0,0,0,0,0]

for i in l:
    for j in range(5):
        if(i==j):
            hash[j]=hash[j]+1

for i in range(5):
    print(i,"appears",hash[i],"times")