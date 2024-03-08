class Person:
  def __init__(self, name, age) -> None:
    self.name = name
    self.age = age
    
  def getName(self):
    return self.name
  
  def getAge(self):
    return self.age
  
class Student(Person):
  def __init__(self, name, age, nis) -> None:
    super().__init__(name, age)
    self.nis = nis
    
  def getNis(self):
    return self.nis

class Developer(Person):
  def __init__(self, name, age, role) -> None:
    super().__init__(name, age)
    self.role = role    
    
  def greetings(self):
    print(f"Welcome back {self.name}, our {self.role} good luck!")
  