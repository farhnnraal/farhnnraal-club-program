class Node:
  def __init__(self, data = None) -> None:
    self.data = data
    self.next = None

class LinkedList:
  def __init__(self) -> None:
    self.head = None

  def append(self, data):
    new_node = Node(data)
    if self.head is None:
      self.head = new_node
      return
    last_node = self.head
    while last_node.next:
      last_node = last_node.next
    last_node.next = new_node

  def prepend(self, data):
    new_node = Node(data)
    new_node.next = self.head
    self.head = new_node

  def eleminate(self):
    if self.head is None:
      return
    
    current_node = self.head
    previous_node = None

    if current_node.next is None:
      self.head = None
      del current_node
      return 
    
    while current_node.next is not None:
      previous_node = current_node
      current_node = current_node.next

    previous_node.next  = None
    
    del current_node

  def delete(self, data):
    current_node = self.head
    if current_node and current_node.data == data:
      self.head = current_node.next
      current_node = None
      return
    previous_node = None
    while current_node and current_node.data != data:
      previous_node = current_node
      current_node = current_node.next
    if current_node is None:
      return
    previous_node.next = current_node.next
    current_node = None

  def display(self):
    current_node = self.head
    while current_node:
      print(current_node.data, end="->")
      current_node = current_node.next
    print("None")

link = LinkedList()


link.append(1)
link.append(2)
link.append(3)
link.append(4)

link.eleminate()

link.display()



