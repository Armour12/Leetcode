class Node:
    def __init__(self, data =None, next=None):
        self.data=data
        self.next=next

class LinkedList:
    def __init__(self):
        self.head= None
    
    def insertatbegining(self,data):
        node = Node(data,self.head)
        self.head= node

    def print(self):
        if self.head is None:
            print("Linklist is empty")
            return
        itr = self.head
        llstr=''
        while itr:
            llstr+=str(itr.data)+'-->'
            itr=itr.next
        print(llstr)

    def inseratend(self, data):
        if self.head is None:
            self.head=Node(data,None)
            return
        itr=self.head
        while itr.next:
            itr=itr.next
        itr.next = Node(data,None)

    def insert_values(self, data_list):
        self.head= None
        for data in data_list:
            self.inseratend(data)

    def get_length(self):
        count=0
        itr=self.head
        while itr:
            itr=itr.next
            count+=1
        return count

    def removeindex(self,index):
        if index<0 or index>=self.get_length():
            raise Exception("Invalid index")
        if index==0:
            self.head=self.head.next
            return
        count=0
        itr=self.head
        while itr:
            if count==index-1:
                itr.next=itr.next.next
                break
            itr=itr.next
            count+=1
    
    def insertat(self,index,data):
        if index<0 or index>=self.get_length():
            raise Exception("Invalid index")
        if index==0:
            self.head=self.head.next
            return
        count=0
        itr=self.head
        while itr:
            if count==index-1:
                node=Node(data, itr.next)
                itr.next=node
                break
            itr=itr.next
            count+=1


if __name__ == '__main__':
    ll=LinkedList()
    """ll.insertatbegining(5)
    ll.insertatbegining(6)
    ll.inseratend(9)
    """
    ll.insert_values(["A","B","C","D"])
    c=ll.get_length()
    ll.print()

    """ll.removeindex()
    """
    ll.insertat(2,"H")
    print(c)
    ll.print()