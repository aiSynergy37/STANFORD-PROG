########################################
# Stack : Array based implementation
# in Python.
#######################################

class Stack:
    def __init__(self):
        self.arr = []
    
    def push(self, elem):
        self.arr.append(elem)

    def pop(self):
        self.arr.remove(self.arr[-1])

    def display(self):
        print("Stack : ", end = " ")
        for i in range(len(self.arr)):
            print(self.arr[i], end = " ")
        print()

def main():
    s = Stack()
    s.push(2)
    s.display()
    s.push(5)
    s.display()
    s.push(10)
    s.display()
    s.pop()
    s.display()



if __name__ == "__main__":
    main()



