# x=4
# y="my"
# y=4#hkug
# ch=""" kyuy
# il
# il"""
# _y=5.2
# x='jgjg' 
# j='''hjk
# '''
# y="la"
# print(y[0],ch)
# print("hello", _y,  "friend")
# print("hello friend")
# y=int(9.94)
# print(y)

# str="My name is Nandini."
# print(str.upper()) 
# print(str.find("name")) 
# print(len(str)) 
# print(max(str)) 
# print(min(str)) 
# print(str[11:]) 
# print(str[::-1]) 

# a=int(input("Enter the side of square:")) 
# print("Area of square:",a*a) 
# l=int(input("Enter the length of rectangle:")) 
# b=int(input("Enter the breadth of rectangle:")) 
# print("Area of rectangle:",l*b) 
# h=int(input("Enter the height of triangle:")) 
# k=int(input("Enter the base of triangle:")) 
# print("Area of triangle:",(1/2)*h*k)

# s=input("Enter a string:") 
# if s==s[::-1]: 
#     print("The string is a Palindrome") 
# else: 
#     print("The string is not a Palindrome")

# l=[4,8,9,6,7,0,3,2,1]
# print(l[:6:2])
# print(l.remove(7))
# print(l.pop(0))
# l.remove(0)
# print(l.pop(0))
# print(l.pop())

# l=[5,8,9,0,7,6,4,3,2,1]
# print(l[:])
# print(l.pop())
# print(l.pop())
# print(l.pop())
# print(l.pop())
# print(l)

# l=[6,7,8,9,0,5,4,3,2,1]
# print(l.append(4))
# print(l)
# print(l.sort())
# print(l)
# print(l.sort(reverse=True))
# print(l)
# print(l.reverse)
# print(l)
# print(l.insert(0,7))
# print(l)

# l=[8,9,0,7,6,5]
# p=l.reverse()
# print(p)
# print(l)

# {9,0,4}:False,"la":(7,8,9),6.7:[8,6,5],(9,0):6.9,None:7
# d={9:"hk",True:3,2:"la",False:"pop"}
# print(d)
# print(d.keys())
# print(d.values())
# print(d.items())
# print(d.get(9))
# print(list(d.values()))
# print(list(d.items()))

# s={7,9,0,8,6,5,4,3}
# print(s)
# s.add("fill")
# print(s.add(1))
# print(s)

# d={}
# for i in range(3):
#     s=input("Enter subject:")
#     m=int(input("Enter marks:"))
#     d.update({s:m})
# print(d)

# n=int(input("Enter a number:"))
# if(n>0):
#     print(n,"is a positive number.")
# elif n<0:
#     print(n,"is a negative number.")
# else:
#     print(n,"is zero.")

# s=input("Enter the color of traffic light signal:")
# s=s.lower()
# s=s.strip()
# if s=="red":
#     print("Stop")
# elif s=="green":
#     print("Go")
# elif s=="yellow":
#     print("Wait")
# else:
#     print("Invalid color")

# u=input("Enter your username:")
# p=input("Enter your password:")
# u=u.lower()
# u=u.strip()
# p=p.lower()
# p=p.strip()
# if u=="hey_nandini":
#     if p=="12345":
#         print("Successful login!")
#     else:
#         print("Incorrect password!")
# else:
#     print("Incorrect username!")

# n=int(input("Enter marks: (Out of 100) "))
# if n<0:
#     print("Invalid marks!")
# elif n>100:
#     print("Invalid marks!")
# else:
#     if 100>=n>90:
#         print("A")
#     elif 90>=n>80:
#         print("B")
#     elif 80>=n>70:
#         print("C")
#     elif 70>=n>60:
#         print("D")
#     elif 60>=n>50:
#         print("E")
#     else:
#         print("F")

# year = int(input("Enter a year: "))
# if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
#     print(f"{year} is a leap year.")
# else:
#     print(f"{year} is not a leap year.")
    
# x=int(input("enter a number:"))
# y=int(input("enter a number:"))
# #x,y=y,x
# m=x
# x=y
# y=m
# print(x)
# print(y)

# import pyttsx3
# engine= pyttsx3.init()
# engine.say("Hey I am good")
# engine.runAndWait()

# n=int(input("enter the value of n: "))
#print(' Good morning'*n)

# class Student:
#     cllg="USAR"
#     year="1st"
#     def __init__(self,name,rollno):
#         self.name=name
#         self.rollno=rollno
#         print(f"Student {self} having name: {name}, rollno: {rollno} has been created!")
#     def welcome(self):
#         print(f"Welcome {self.name}!")
#         self.__greet()

#     def __greet(self):
#         print("How are you?")

#     @staticmethod
#     def hwcnihlpu():
#         print("How can I help you?")
    
#     @classmethod
#     def lala(cls,year,course):
#         cls.year="2nd"
#         cls.course="AR"

#     def changecllg(self,cllg):
#         self.cllg=cllg
#         Student.cllg=cllg
#         self.__class__.cllg="lala"

# s1=Student("Rahul",89)
# s1.welcome()
# s1.hwcnihlpu()
# s1.lala

# class Student:
#     def __init__(self,name,m1,m2,m3):
#         self.name=name
#         self.m1=m1
#         self.m2=m2
#         self.m3=m3
#     #     self.avg=(self.m1+self.m2+self.m3)/3
#     # def average(self):
#     #     print(self.avg)
#     def avgg(self):
#         self.avg=(self.m1+self.m2+self.m3)/3
#         print(self.avg)
# s1=Student("lala",89,90,98)
# s1.avgg()
# s1.m1=80
# print(s1.m1)
# s1.avgg()

# class Account:
#     def __init__(self,accno,balance):
#         self.accno=accno
#         self.balance=balance
#     def debit(self,amount):
#         self.balance-=amount
#     def credit(self,amount):
#         self.balance+=amount
#     def printbalance(self):
#         print(f"Balance in account number {self.accno}: {self.balance}")
# acc1=Account(12345,150000)
# acc1.printbalance()
# acc1.debit(9000)
# acc1.printbalance()
# acc1.credit(50000)
# acc1.printbalance()

# class Account:
#     def __init__(self,accno,accpass):
#         self.accno=accno
#         self.__accpass=accpass
#     def __getpass(self):
#         print(self.__accpass)
#     def reset(self):
#         self.__getpass()
#         print(self.__accpass)
# acc1=Account(1234,"hulllaaa")
# print(acc1.accno)
# # print(acc1.__accpass)
# #acc1.__getpass()
# acc1.reset()

# class car:
#     def __init__(self,color):
#         self.color=color
#     @staticmethod
#     def start():
#         print("Car has started...")
#     @staticmethod
#     def stop():
#         print("Car has stopped...")
# class Toyota(car):
#     def __init__(self):
#         pass
#     # def __init__(self,type,color):
#     #     super().__init__(color)
#     #     self.type=type
# class prius(Toyota):
#     def __init__(self,mlg,type,color):
#         # super().__init__(type,color)
#         super().__init__(color)
#         self.mlg=mlg
# pr1=prius(87,"petrol","blue")
# print(pr1.color)
# print(pr1.mlg)
# print(pr1.type)
# pr1.start()

# i=0
# while i<5:
#     if(i==3):
#         i+=1
#         continue
#     print(i) 
#     i+=1

# str="HElloPRIYANSHU"
# print("PRIYaNSHU" in str)

# l=[7,8,9,6,5,4,3,2]
# print(2 not in l)

# l=[1,2,3,4,5,6,7]
# n=7
# for i in l:
#     if(i==n):
#         print(f"{n} found")
#         print(n,"found")
#         break
# else:
#     print(n,"not found")

# class car:
#     def __init__(self,color):
#         self.color=color
#     @staticmethod
#     def start():
#         print("Car has started...")
#     @staticmethod
#     def stop():
#         print("Car has stopped...")
#     def __str__(self):
#         return f"Color: {self.color}"
# class Toyota(car):
#     def __init__(self,type,color):
#         super().__init__(color)
#         self.type=type
# class prius(Toyota):
#     def __init__(self,mlg,type,color):
#         super().__init__(type,color)
#         self.mlg=mlg
#     def __str__(self):
#         print("Car Details:")
#         return f"Name: Prius | Type: {self.type} | Mileage: {self.mlg} | {super().__str__()}"
# pr1=prius(87,"petrol","blue")
# print(pr1.color)
# print(pr1.mlg)
# print(pr1.type)
# pr1.start()
# print(pr1)
# pr1.stop()

# class car:
#     def __init__(self,color,speed):
#         self.color=color
#         self.speed=speed
#     @staticmethod
#     def start():
#         print("Car has started...")
#     @staticmethod
#     def stop():
#         print("Car has stopped...")
# class Toyota(car):
#     def __init__(self,*args):
#         super().__init__(*args)
#         #self.type=type
# class prius(Toyota):
#     def __init__(self,mlg,*args):
#         super().__init__(*args)
#         self.mlg=mlg
# pr1=prius(87,"petrol","blue")
# print(pr1.color)
# print(pr1.mlg)
# print(pr1.type)
# pr1.start()

# class ElectronicDevice:
#     def __init__(self, brand, voltage, material, weight,*args):
#         self.brand = brand
#         self.voltage = voltage
#         self.material = material
#         self.weight = weight

# class Computer(ElectronicDevice):
#     def __init__(self, processor, ram, storage, os, *args):
#         # Passes the remaining 4 arguments (brand, voltage, etc.) to ElectronicDevice
#         super().__init__(*args)
#         self.processor = processor
#         self.ram = ram
#         self.storage = storage
#         self.os = os

# class Laptop(Computer):
#     def __init__(self, battery_life, screen_size, webcam_res, keyboard_type, *args):
#         # Passes the remaining 8 arguments up to Computer
#         super().__init__(*args)
#         self.battery_life = battery_life
#         self.screen_size = screen_size
#         self.webcam_res = webcam_res
#         self.keyboard_type = keyboard_type

#     def __str__(self):
#         return f"{self.brand} Laptop with {self.processor} and {self.ram} RAM."

# # Note the strict order: Laptop specific -> Computer specific -> Device specific
# my_laptop = Laptop("10hrs", "14 inch", "1080p", "Mechanical", 
#                    "i7", "16GB", "512GB", "Windows", 
#                    "HP", "220V", "Aluminium", "1.5kg","hello")

# print(my_laptop)

# class University:
#     def __init__(self, uni_name, location, established, ranking, **kwargs):
#         self.uni_name = uni_name
#         self.location = location
#         self.established = established
#         self.ranking = ranking

# class Department(University):
#     def __init__(self, dept_name, hod, budget, labs, **kwargs):
#         # Forwards all unknown keyword arguments (like uni_name) to University
#         super().__init__(**kwargs)
#         self.dept_name = dept_name
#         self.hod = hod
#         self.budget = budget
#         self.labs = labs

# class Student(Department):
#     def __init__(self, name, roll_no, cgpa, branch, **kwargs):
#         # Forwards everything else to Department
#         super().__init__(**kwargs)
#         self.name = name
#         self.roll_no = roll_no
#         self.cgpa = cgpa
#         self.branch = branch

#     def __str__(self):
#         return f"Student {self.name} ({self.branch}) at {self.uni_name}. CGPA: {self.cgpa}"

# # Order doesn't matter for the named arguments!
# s1 = Student(name="Nandini", roll_no=101, cgpa=8.3, branch="AR",
#              dept_name="Robotics", hod="Dr. Smith", budget="50L", labs=5,
#              uni_name="Technical University", location="Delhi", established=1995, ranking=10,b="j")

# print(s1)

# class rect:
#     def __init__(self,width,height):
#         self.width=width
#         self.height=height
#     @classmethod
#     def square(cls,side):
#         return cls(side,side)
#     def __str__(self):
#         return f"Rectangle with width={self.width} & height={self.height}"
#     def __repr__(self):
#         return f"rect({self.width},{self.height})"
# r1=rect(4,5)
# r2=rect.square(6)
# print(r1)
# print(r2)
# print(repr(r1))
# print(repr(r2))

# class Student:
#     def __init__(self,name):
#         self.name=name
#     def __repr__(self):
#         return f"Student(name={self.name})"
# s1=Student("Riya")
# print(repr(s1))
# print(getattr(s1,"marks","NA"))
# setattr(s1,"marks",89)
# print(getattr(s1,"marks"))
# print(s1.marks)

# class Temp:
#     @property
#     def celsius(self):    #getter
#         return self._celsius
#     @celsius.setter
#     def celsius(self,f):   #setter
#         self._celsius=f
#     @property
#     def fahrenheit(self):    #getter
#         return self._celsius*(9/5)+32
#     @fahrenheit.setter
#     def fahrenheit(self,f):   #setter
#         self._celsius=(f-32)*(5/9)
# t1=Temp()
# t1.celsius=0
# print(t1.celsius)
# print(t1.fahrenheit)
# t2=Temp()
# t2.fahrenheit=212
# print(t2.celsius)
# print(t2.fahrenheit)

# class BankAccount:
#     def __init__(self,balance):
#         self._balance=balance
#     @property
#     def balance(self):
#         return self._balance
#     def deposit(self,amount):
#         print(f"Amount deposited: {amount}")
#         self._balance+=amount
#         print(f"Current balance: {self._balance}")
#     def withdraw(self,amount):
#         if(self._balance-amount<0):
#             raise ValueError("Insufficient balance!")
#         else:
#             print(f"Amount withdrawn: {amount}")
#             self._balance-=amount
#             print(f"Current balance: {self._balance}")
# a1=BankAccount(250000)
# print(a1.balance)
# a1.deposit(50000)
# print(a1.balance)
# a1.withdraw(40000)
# print(a1.balance)

# class Book:
#     def __init__(self,title,author):
#         self.title=title
#         self.author=author
#     def __str__(self):
#         return f"'{self.title}' by {self.author}"
#     def __repr__(self):
#         return f"Book(title='{self.title}', author='{self.author}')"
# b1=Book("Harry Potter","J.K. Rowling")
# print(b1)
# print(repr(b1))

# class ComplexNo:
#     def __init__(self,real,img):
#         self.img=img
#         self.real=real
#     def __str__(self):
#         return f"{self.real}+{self.img}i"
#     def __repr__(self):
#         return f"ComplexNo(real={self.real},img={self.img})"
#     def __add__(self, other):
#         return ComplexNo(self.real+other.real,self.img+other.img)
#     def __eq__(self, other):
#         return self.real==other.real and self.img==other.img
#     @property
#     def magnitude(self):    #getter
#         return ((self.real**2)+(self.img**2))**(1/2)
#     @classmethod
#     def zero(cls):
#         return cls(0,0)

# class Person:
#     def __init__(self,name):
#         self.name=name
#     @property
#     def name(self):
#         return self._name
#     @name.setter
#     def name(self,value):
#         if not isinstance(value,str):
#             raise TypeError("Name must be a string!")
#         if not value.strip():
#             raise ValueError("Name cant be empty!")
#         self._name=value.title()
#     def __repr__(self):
#         return f"Person(name='{self._name}')"
#     @classmethod
#     def from_full_name(clss,full_name):
#         parts=full_name.split()
#         return clss(parts[0])

# def replvow(strr):
#     str1=""
#     for i in strr:
#         if i in "aeiouAEIOU":
#             str1+="*"
#         else:
#             str1+=i
#     return str1
# s=input("Enter a string: ")
# print(replvow(s))

# def revstr(strr):
#     rev=""
#     for i in range(len(strr)-1,-1,-1):
#         rev+=strr[i]
#     return rev
# s=input("Enter a string: ")
# print(revstr(s))

# l=[7,8,9,3,4,2,1,0,10,15,16,32,87,43]
# even=odd=0
# for i in l:
#     if i%2==0:
#         even+=1
#     else:
#         odd+=1
# print("List =",l)
# print("Total even numbers presnt in the list:",even)
# print("Total odd numbers presnt in the list:",odd)
# print()
# l1=[7,8,9,6]
# l2=[1,6,7,4]
# print("Adding two lists:")
# l3=l1+l2
# print(l1,"+",l2,"=",l3)
# print()
# print("Adding elements of two lists:")
# l3=[]
# for i,j in zip(l1,l2):
#     l3.append(i+j)
# print(l1,"+",l2,"=",l3)
# print()
# print("Subtracting elements of two lists:")
# l3=[]
# for i,j in zip(l1,l2):
#     l3.append(i-j)
# print(l1,"-",l2,"=",l3)
# print()
# print("Subtracting two lists:")
# l3=[]
# for i in l1:
#     if i not in l2:
#         l3.append(i)
# print(l1,"-",l2,"=",l3)
# print()
# print("Comparing elements of two lists:")
# l1=[1,2,3,4,5]
# l2=[6,1,7,2,5]
# l3=[]
# for i,j in zip(l1,l2):
#     if(i>j):
#         l3.append(">")
#     elif(j>i):
#         l3.append("<")
#     else:
#         l3.append("=")
# for i,j,k in zip(l1,l3,l2):
#     print(i,j,k)
# print()
# print("Original list:",l1)
# l1.reverse()
# print("Reversed list:",l1)
# print()
# print("Original list:",l2)
# l2.extend([7,8])
# print("Extended list:",l2)
# print()
# print("List =",l2)
# n=int(input("Enter the element you want to pop: "))
# l2.pop(n)
# print("New list =",l2)

# def quiz(qno,ans,score):
#     answers={1:"B",2:"C",3:"D",4:"B"}
#     if(answers[qno]==ans):
#         score+=1
#     return score
# score=0
# print("      \t\t____MCQ QUIZ____      ")
# print()
# print("Q1. What is the output of print(2 ** 3) in Python?")
# print('A) 6\tB) 8\tC) 9\tD) 23')
# a=((input("Enter your choice: ")).upper()).strip()
# print()
# score=quiz(1,a,score)
# print("Q2. Which keyword is used to define a function in Python?")
# print('A) func\tB) define\tC) def\tD) function')
# a=((input("Enter your choice: ")).upper()).strip()
# print()
# score=quiz(2,a,score)
# print("Q3. What data type is the result of: type([1, 2, 3])?")
# print('A) tuple\tB) array\tC) dict\tD) list')
# a=((input("Enter your choice: ")).upper()).strip()
# print()
# score=quiz(3,a,score)
# print("Q4. Which of the following is used to take input from the user?")
# print('A) scan()\tB) input()\tC) read()\tD) get()')
# a=((input("Enter your choice: ")).upper()).strip()
# print()
# score=quiz(4,a,score)
# print(f"You scored: {score}/4")

# class Animal():
#     def __init__(self,name):
#         self.name=name
#     def speak(self):
#         return "..."
# class Dog(Animal):
#     def __init__(self,name):
#         super().__init__(name)
#     def speak(self):
#         return("Woof!")
# class Cat(Animal):
#     def __init__(self,name):
#         super().__init__(name)
#     def speak(self):
#         return("Meow!")

# class Circle:
#     def __init__(self,radius):
#         self.radius=radius
#     @property
#     def radius(self):
#         return self._radius
#     @radius.setter
#     def radius(self,radius):
#         if radius<0:
#             raise ValueError("Radius must be positive!")
#         elif(radius==0):
#             raise ValueError("Radius cant be zero!")
#         self._radius=radius
#     @staticmethod
#     def is_valid_radius(r):
#         return r>0
#     def __repr__(self):
#         return f"Circle({self._radius})"

# class Playlist:
#     def __init__(self):
#         self.songs=[]
#     def add(self,song):
#         self.songs.append(song)
#     def __len__(self):
#         return len(self.songs)
#     def __contains__(self, song):
#         return song in self.songs
#     def __iter__(self):
#         return iter(self.songs)
#     def __getitem__(self,index):
#         return self.songs[index]

# class Vehicle:
#      def __init__(self,brand,speed):
#           self.brand=brand
#           self.speed=speed
#      @classmethod
#      def from_dict(cls,d):
#           return cls(**d)

#      def __repr__(self):
#           return f"Vehicle(Brand='{self.brand}',Speed='{self.speed}')"
# class Car(Vehicle):
#      def __init__(self,brand,speed,num_doors):
#           super().__init__(brand,speed)
#           self.num_doors=num_doors
#      def __repr__(self):
#           return f"Car(Brand='{self.brand}',Speed='{self.speed}',Number of doors='{self.num_doors}')"

# from abc import ABC,abstractmethod
# class Employee(ABC):
#     @abstractmethod
#     def salary(self):
#         pass
#     @abstractmethod
#     def role(self):
#         pass
# class FullTime(Employee):
#     def __init__(self,base_salary):
#         self.base_salary=base_salary
#     def salary(self):
#         return self.base_salary
#     def role(self):
#         return "FullTimer"
#     def __repr__(self):
#         return f"FullTime(base_salary='{self.base_salary}')"
# class Freelancer(Employee):
#     def __init__(self,hourly_rate,hours_worked):
#         self.hourly_rate=hourly_rate
#         self.hours_worked=hours_worked
#     def salary(self):
#         return self.hourly_rate*self.hours_worked
#     def role(self):
#         return "FreeLancer"
#     def __repr__(self):
#         return f"FreeLancer(hourly_rate='{self.hourly_rate}',hours_worked='{self.hours_worked}')"
# employees=[FullTime(20000),Freelancer(2000,8)]
# for e in employees:
#     print(f"Role='{e.role()}', Salary='{e.salary()}'")

# class Stack:
#     def __init__(self):
#         self.l=[]
#     def push(self,item):
#         self.l.append(item)
#     def pop(self,index=-1):
#         if len(self.l)==0:
#             raise IndexError("Stack is empty!")
#         self.l.pop(index)
#     def __len__(self):
#         return len(self.l)
#     def peek(self):
#         if len(self.l)==0:
#             raise IndexError("Stack is empty!")
#         return self.l[-1]
#     def __iter__(self):
#         return iter(self.l)
#     def __repr__(self):
#         return f"Stack({self.l})"
#     def __contains__(self, item):
#         return item in self.l
#     @staticmethod
#     def is_empty_stack(s):
#         return len(s)==0
# s1=Stack()
# s1.push(2)
# s1.push(8)
# s1.push(3)
# s1.push(9)
# s1.pop()
# print(s1.peek())

# class Teacher:
#     def __init__(self,name,subject):
#         self.name=name
#         self.subject=subject
#     def __repr__(self):
#         return f"Teacher(name='{self.name}',subject='{self.subject}')"
# class Classroom:
#     def __init__(self,room_no,teacher):
#         self.students=[]
#         self.room_no=room_no
#         self.teacher=teacher    
#     def __repr__(self):
#         return f"Classroom(room_no='{self.room_no}',name='{self.teacher.name}',subject='{self.teacher.subject}')"
#     def __len__(self):
#         return len(self.students)
#     def __contains__(self,student):
#         return student in self.students
#     def add_student(self,student):
#         self.students.append(student)
    
# class Student:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
#     def __repr__(self):
#         return f"Student(name='{self.name}',age='{self.age}')"
#     @classmethod
#     def from_dict(cls,d):
#         return cls(**d)

# class Matrix:
#     def __init__(self,data):
#         if len(set(len(row for row in data)))>1:
#             raise ValueError("All rows must have equal no. of columns!")
#         self.data=data
#         self.rows=len(data)
#         self.cols=len(data[0])
#     def getitem(self,index):
#         return self.data[index]
#     def __repr__(self):
#         return f"Matrix({self.data})"
#     def __str__(self):
#         return "\n".join(" ".join(str(n) for n in row) for row in self.data)
#     def __add__(self,other):
#         if self.rows!=other.rows or self.cols!=other.cols:
#             raise ValueError("Matrices must be of same size to add!")
#         result=[]
#         for i in range(self.rows):
#             row=[]
#             for j in range(self.cols):
#                 row.append(self.data[i][j]+other.data[i][j])
#             result.append(row)
#         return Matrix(result)
#     def __sub__(self,other):
#         if self.rows!=other.rows or self.cols!=other.cols:
#             raise ValueError("Matrices must be of same size to subtract!")
#         result=[]
#         for i in range(self.rows):
#             row=[]
#             for j in range(self.cols):
#                 row.append(self.data[i][j]-other.data[i][j])
#             result.append(row)
#         return Matrix(result)
#     def __eq__(self,other):
#         return self.data==other.data
#     def __mul__(self,scalar):
#         if not isinstance(scalar,(int,float)):
#             raise TypeError("Can only multiply by a number!")
#         result=[]
#         for i in range(self.rows):
#             row=[]
#             row.append(round(x*scalar,6) for x in row)
#             result.append(row)
#         return Matrix(result)
#     def __rmul__(self,scalar):
#         return self.__mul__(scalar)
#     def dot(self,other):
#         if self.cols!=other.rows:
#             raise ValueError(f"Matrices of size {self.rows}x{self.cols} and {other.rows}x{other.cols} cannot be multiplied!")
#         result=[]
#         for i in range(self.rows):
#             row=[]
#             for j in range(other.cols):
#                 total=0
#                 for k in range(self.cols):
#                     total+=self.data[i][k]+other.data[k][j]
#                 row.append(total)
#             result.append(row)
#         return Matrix(result)
#     def transpose(self):
#         result=[]
#         for i in range(self.cols):
#             row=[]
#             for j in range(self.rows):
#                 row.append(self.data[j][i])
#             result.append(row)
#         return Matrix(result)
#     def determinant(self):
#         if not Matrix.is_square(self):
#             raise ValueError("Determinant only exists for square matrices!")
#         return self.det(self.data)
#     def det(self,data):
#         n=len(data)
#         if n==1:
#             return data[0][0]
#         if n==2:
#             return data[0][0]*data[1][1]-data[0][1]*data[1][0]
#         for i in range(n):
#             sub=[row[:i]+row[i+1:] for row in data[1:]]
#             sign=(-1)**i
#             det+=data[0][i]*sign*self.det(sub)
#         return det
#     def inverse(self):
#         if not Matrix.is_square(self):
#             raise ValueError("Inverse only exists for square matrices!")
#         det=self.det(self.data)
#         if det==0:
#             raise ValueError("Matrix is singular--Inverse doesn't exist!")
#         n=self.rows
#         cofactors=[]
#         for i in range(n):
#             row=[]
#             for j in range(n):
#                 sub=[r[:j]+r[j+1:] for k,r in enumerate(self.data) if k!=i]
#                 sign=(-1)**(i+j)
#                 row.append(sign*self.det(sub))
#             cofactors.append(row)
#         adjugate=Matrix(cofactors).transpose()
#         result=[]
#         for row in adjugate.data:
#             result.append([round(x,4) for x in row])
#         return Matrix(result)

class Matrix:
    def __init__(self,data):
        if len(set(len(row) for row in data))>1:
            raise ValueError("All rows must have same number of columns!")
        self.data=data
        self.rows=len(data)
        self.cols=len(data[0])
    def __getitem__(self,index):
        return self.data[index]
    def __eq__(self,other):
        return self.data==other.data
    def __repr__(self):
        return f"Matrix({self.data})"
    def __str__(self):
        return "\n".join(" ".join(str(n) for n in row) for row in self.data)
    def __mul__(self,scalar):
        if not isinstance(scalar,(int,float)):
            raise TypeError("Can only multiply by a number!")
        result=[]
        for row in self.data:
            result.append([round(scalar*x,4) for x in row])
        return Matrix(result)
    def __rmul__(self,scalar):
        return self.__mul__(scalar)
    def __add__(self, other):
        if self.rows!=other.rows or self.cols!=other.cols:
            raise ValueError("Matrices of diff size cannot be added!")
        result=[]
        for i in range(self.rows):
            row=[]
            for j in range(self.cols):
                row.append(self.data[i][j]+other.data[i][j])
            result.append(row)
        return Matrix(result)
    def __sub__(self, other):
        if self.rows!=other.rows or self.cols!=other.cols:
            raise ValueError("Matrices of diff size cannot be subtracted!")
        result=[]
        for i in range(self.rows):
            row=[]
            for j in range(self.cols):
                row.append(self.data[i][j]-other.data[i][j])
            result.append(row)
        return Matrix(result)
    def dot(self,other):
        if self.cols!=other.rows:
            raise ValueError(f"Cant multiply {self.rows}x{self.cols} and {other.rows}x{other.cols}")
        result=[]
        for i in range(self.rows):
            row=[]
            for j in range(other.cols):
                total=0
                for k in range(self.cols):
                    total+=self.data[i][k]*other.data[k][j]
                row.append(total)
            result.append(row)
        return Matrix(result)
    def transpose(self):
        result=[]
        for i in range(self.cols):
            row=[]
            for j in range(self.rows):
                row.append(self.data[j][i])
            result.append(row)
        return Matrix(result)
    def determinant(self):
        if not Matrix.is_square(self):
            raise ValueError("Determinant exists only for square matrices!")
        return self._det(self.data)
    def _det(self,data):
        n=len(data)
        if n==1:
            return data[0][0]
        if n==2:
            return data[0][0]*data[1][1]-data[0][1]*data[1][0]
        det=0
        for i in range(n):
            sub=[row[:i]+row[i+1:] for row in data[1:]]
            sign=(-1)**(i)
            det+=data[0][i]*self._det(sub)*sign
        return det
    def inverse(self):
        if not Matrix.is_square(self):
            raise ValueError("Inverse only exists for square matrices!")
        det=self._det(self.data)
        if det==0:
            raise ValueError("Matrix is singular-inverse doesn't exist!")
        n=self.rows
        cofactors=[]
        for i in range(n):
            row=[]
            for j in range(n):
                sign=(-1)**(i+j)
                sub=[r[:j]+r[j+1:] for k,r in enumerate(self.data) if k!=i]
                row.append(sign*self._det(sub))
            cofactors.append(row)
        t=Matrix(cofactors).transpose()
        result=[]
        for row in t.data:
            result.append([round(x/det,4) for x in row])
        return Matrix(result)
    @staticmethod
    def is_square(self):
        return self.rows==self.cols
    @staticmethod
    def is_symmetric(self):
        if not Matrix.is_square(self):
            return False
        t=self.transpose()
        return t==self
    @staticmethod
    def is_skew_symmetric(self):
        if not Matrix.is_square(self):
            return False
        t=self.transpose()
        for i in range(self.rows):
            for j in range(self.cols):
                if self.data[i][j]!=-t.data[i][j]:
                    return False
        return True
    @staticmethod
    def is_orthogonal(self):
        if not Matrix.is_square(self):
            return False
        t=self.transpose()
        product=self.dot(t)
        i=Matrix.identity(len(self.data))
        rounded=[[round(x,4) for x in row] for row in product.data]
        return rounded==i.data
    @classmethod
    def identity(cls,size):
        result=[]
        for i in range(size):
            row=[]
            for j in range(size):
                row.append(1 if i==j else 0)
            result.append(row)
        return cls(result)
    @classmethod
    def zero(cls,rows,cols):
        data=[[0]*cols for _ in range(rows)]
        return cls(data)