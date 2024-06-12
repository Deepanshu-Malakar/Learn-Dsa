
class Array:

    def __init__(self,total_size) -> None:
        self.l=[]
        self.total_size=total_size
        self.used_size=0
        for i in range(0,self.total_size):
            self.l.append(0)

    def append(self,x:int)->None:
        if self.used_size==self.total_size:
            print("Error: Not enough space ")
            return None
        
        self.l[self.used_size]=x
        self.used_size+=1
    
    def insert_index(self,index,element)->None:
        if self.used_size==self.total_size:
            print("Error: Not enough space")
            return None
        n=self.used_size
        for i in range(n,index,-1):
            self.l[i]=self.l[i-1]
        self.l[index]=element
        self.used_size+=1
    
    def show(self):
        print("{ ",end="")
        for i in range(0,self.used_size):
            print(self.l[i],end=" ")
        print("}")

    def selection_sort(self):
        for i in range(0,self.used_size -1):
            for j in range(i+1,self.used_size):
                if self.l[i]>=self.l[j]:
                    self.l[i],self.l[j]=self.l[j],self.l[i]
    
    def bubble_sort(self):
        n=self.used_size
        for i in range(0,n-1):
            for j in range(0,n-i-1):
                if self.l[j]>=self.l[j+1]:
                    temp=self.l[j]
                    self.l[j]=self.l[j+1]
                    self.l[j+1]=temp


    def remove(self,x:int):
        n=self.used_size
        if n==0:
            print("array is empty")
            return None
        for i in range(0,n):
            if self.l[i]==x:
                for j in range(i,n):
                    self.l[j]=self.l[j+1]
                self.used_size-=1
                return None
    
    def pop(self):
        self.l.pop()
        self.used_size-=1
    
    
    
    def insertion_sort(self):
        n=self.used_size
        for i in range(0,n):
            j=i
            while(j>0 and self.l[j-1]>=self.l[j]):
                self.l[j-1],self.l[j]=self.l[j],self.l[j-1]
                j-=1
        

                

    
#=======================================================================================================================
#=====================================================main()================

marks=Array(10)
marks.append(2)
marks.append(4)
marks.append(3)
marks.append(6)
marks.show()
marks.insertion_sort()
marks.show()

    

    
