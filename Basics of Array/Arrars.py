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

    
#=======================================================================================================================
#=====================================================main()================

marks=Array(10)
marks.append(2)
marks.append(4)
marks.append(3)
marks.append(6)
marks.show()
marks.insert_index(2,9)
marks.show()

    

    
