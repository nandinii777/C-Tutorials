# ============================================================
#  PROGRAM 1 — User-Defined MCQ Quiz (4 Questions)
# ============================================================

# def run_quiz():
#     questions = [
#         {
#             "question": "What is the output of print(2 ** 3) in Python?",
#             "options":  ["A) 6", "B) 8", "C) 9", "D) 23"],
#             "answer":   "B"
#         },
#         {
#             "question": "Which keyword is used to define a function in Python?",
#             "options":  ["A) func", "B) define", "C) def", "D) function"],
#             "answer":   "C"
#         },
#         {
#             "question": "What data type is the result of: type([1, 2, 3])?",
#             "options":  ["A) tuple", "B) array", "C) dict", "D) list"],
#             "answer":   "D"
#         },
#         {
#             "question": "Which of the following is used to take input from the user?",
#             "options":  ["A) scan()", "B) input()", "C) read()", "D) get()"],
#             "answer":   "B"
#         }
#     ]

#     score = 0
#     print("\n========== MCQ QUIZ ==========")
#     for i, q in enumerate(questions, 1):
#         print(f"\nQ{i}. {q['question']}")
#         for opt in q["options"]:
#             print(f"    {opt}")
#         ans = input("Your Answer (A/B/C/D): ").strip().upper()
#         if ans == q["answer"]:
#             print("✔  Correct!")
#             score += 1
#         else:
#             print(f"✘  Wrong! Correct answer: {q['answer']}")

#     print(f"\n--- You scored {score} out of {len(questions)} ---\n")

# run_quiz()


# # ============================================================
# #  PROGRAM 2 — List Operations
# # ============================================================

# def list_operations():
#     print("\n========== LIST OPERATIONS ==========")

#     list1 = [int(x) for x in input("Enter elements of List 1 (space-separated): ").split()]
#     list2 = [int(x) for x in input("Enter elements of List 2 (space-separated): ").split()]

#     # Count odd and even in list1
#     odd_count  = sum(1 for x in list1 if x % 2 != 0)
#     even_count = sum(1 for x in list1 if x % 2 == 0)
#     print(f"\nList 1          : {list1}")
#     print(f"Odd  numbers    : {odd_count}")
#     print(f"Even numbers    : {even_count}")

#     # Add (element-wise) — works if both lists have the same length
#     if len(list1) == len(list2):
#         added = [a + b for a, b in zip(list1, list2)]
#         print(f"\nElement-wise Sum: {added}")
#     else:
#         print("\n(Element-wise addition skipped — lists have different lengths)")

#     # Compare content
#     print(f"\nList 1 == List 2 : {list1 == list2}")

#     # Reverse list1
#     reversed_list = list1[::-1]
#     print(f"Reversed List 1  : {reversed_list}")

#     # Extend list1 with list2
#     list1.extend(list2)
#     print(f"After extend()   : {list1}")

#     # Pop last element
#     popped = list1.pop()
#     print(f"Popped element   : {popped}")
#     print(f"List after pop() : {list1}")

# list_operations()


# # ============================================================
# #  PROGRAM 3 — Reverse a String Using a User-Defined Function
# # ============================================================

# def reverse_string(s):
#     """Returns the reverse of the input string."""
#     return s[::-1]

# def string_reversal():
#     print("\n========== STRING REVERSAL ==========")
#     original = input("Enter a string: ")
#     reversed_str = reverse_string(original)   # result stored in new variable
#     print(f"Original String : {original}")
#     print(f"Reversed String : {reversed_str}")

# string_reversal()


# # ============================================================
# #  PROGRAM 4 — Replace All Vowels with '*'
# # ============================================================

# def replace_vowels(s):
#     """Replaces every vowel (a, e, i, o, u) in the string with '*'."""
#     vowels = "aeiouAEIOU"
#     result = ""
#     for ch in s:
#         result += "*" if ch in vowels else ch
#     return result

# def vowel_replacement():
#     print("\n========== VOWEL REPLACEMENT ==========")
#     text = input("Enter a string: ")
#     modified = replace_vowels(text)
#     print(f"Original : {text}")
#     print(f"Modified : {modified}")

# vowel_replacement()

 # ============================================================
# #  PROGRAM 5 — Teacher class
# # ============================================================

# class Teacher:
#     def __init__(self, name, subjects):
#         self.name = name
#         self.subjects = subjects      # list of subjects

#     def add_subject(self, subject):
#         self.subjects.append(subject)

#     def __repr__(self):
#         return f"Teacher(name='{self.name}', subjects={self.subjects})"


# class Student:
#     _counter = 0
#     _all_students = []               # master list of ALL students ever created

#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#         Student._counter += 1
#         self.student_id = Student._counter
#         Student._all_students.append(self)   # register in master list

#     def __eq__(self, other):
#         return self.student_id == other.student_id   # compare by unique id

#     def __repr__(self):
#         return f"Student(id={self.student_id}, name='{self.name}', age={self.age})"

#     @classmethod
#     def from_dict(cls, d):
#         return cls(**d)

#     @classmethod
#     def total_created(cls):
#         return cls._counter

#     @classmethod
#     def all_students(cls):
#         return [s.name for s in cls._all_students]


# class Classroom:
#     def __init__(self, room_no):
#         self.room_no = room_no
#         self.teachers = []           # list of teachers — one class can have many
#         self.students = []

#     def add_teacher(self, teacher):
#         self.teachers.append(teacher)

#     def add_student(self, student):
#         self.students.append(student)
    
#     # number of teachers
#     def teacher_count(self):
#         return len(self.teachers)

#     # is this teacher present?
#     def has_teacher(self, teacher):
#         return teacher in self.teachers
    
#     def __len__(self):
#         return len(self.students)       # len(c) = students ✅

#     def __contains__(self, item):
#         if isinstance(item, Student):
#             return item in self.students   # student in c ✅
#         elif isinstance(item, Teacher):
#             return item in self.teachers   # teacher in c ✅

#     def __len__(self):
#         return len(self.students)

#     def __contains__(self, student):
#         return student in self.students

#     def __repr__(self):
#         teacher_names = [t.name for t in self.teachers]
#         student_names = [s.name for s in self.students]
#         return f"Classroom(room_no={self.room_no}, teachers={teacher_names}, students={student_names})"

#     def who_is_present(self):
#         return [s.name for s in self.students]


# # ---- helper function ----
# def who_is_not_assigned(*classrooms):
#     all_assigned = []
#     for c in classrooms:
#         all_assigned += c.students        # combine all classroom lists
#     not_assigned = [s.name for s in Student._all_students if s not in all_assigned]
#     return not_assigned


# # ---- Usage ----
# # Teachers
# t1 = Teacher("Mr. Sharma", ["Robotics", "Physics"])
# t2 = Teacher("Ms. Priya", ["Math"])
# t2.add_subject("Chemistry")              # adding subject dynamically

# # Students
# s1 = Student("Riya", 20)
# s2 = Student("Rahul", 21)
# s3 = Student("Arjun", 22)
# s4 = Student("Nandini", 20)
# s5 = Student.from_dict({"name": "Riya", "age": 20})  # same name as s1!

# # Classrooms
# c1 = Classroom(101)
# c2 = Classroom(102)

# # Add teachers
# c1.add_teacher(t1)
# c1.add_teacher(t2)
# c2.add_teacher(t1)                       # Mr. Sharma teaches in both!

# # Add students
# c1.add_student(s1)
# c1.add_student(s2)
# c2.add_student(s3)
# c2.add_student(s4)
# # s5 not added to any class

# # ---- Queries ----
# print("Total students created:", Student.total_created())   # 5
# print("All students:", Student.all_students())

# print("\nClass 101 present:", c1.who_is_present())
# print("Class 102 present:", c2.who_is_present())
# print("Not in any class:", who_is_not_assigned(c1, c2))

# print("\nIs Riya(s1) in c1?", s1 in c1)    # True
# print("Is Riya(s5) in c1?", s5 in c1)      # False — different Riya!

# print("\nTeachers in c1:", [t.name for t in c1.teachers])
# print("Mr. Sharma's subjects:", t1.subjects)

# print("\n", repr(c1))
# print(repr(s1))
# print(repr(s5))    # same name/age but different id!

# ============================================================
# #  PROGRAM 6 — Matrix class
# # ============================================================

# class Matrix:
#     def __init__(self, data):
#         # validate all rows have same length
#         if len(set(len(row) for row in data)) > 1:
#             raise ValueError("All rows must have same number of columns!")
#         self.data = data
#         self.rows = len(data)
#         self.cols = len(data[0])

#     def __getitem__(self, index):
#         return self.data[index]          # m[0] → first row, m[0][1] → element

#     def __eq__(self, other):
#         return self.data == other.data

#     def __add__(self, other):
#         if self.rows != other.rows or self.cols != other.cols:
#             raise ValueError(f"Can't add {self.rows}x{self.cols} and {other.rows}x{other.cols} matrix!")
#         result = []
#         for i in range(self.rows):
#             row = []
#             for j in range(self.cols):
#                 row.append(self.data[i][j] + other.data[i][j])
#             result.append(row)
    #     return Matrix(result)

    # def __repr__(self):
    #     return f"Matrix({self.data})"

    # def __str__(self):                   # nicely formatted grid
    #     rows_str = []
    #     for row in self.data:
    #         rows_str.append(" ".join(str(n) for n in row))
    #     return "\n".join(rows_str)

    # @classmethod
    # def identity(cls, size):
    #     data = []
    #     for i in range(size):
    #         row = []
    #         for j in range(size):
    #             if i == j:
    #                 row.append(1)        # diagonal → 1
    #             else:
    #                 row.append(0)        # everywhere else → 0
    #         data.append(row)
    #     return cls(data)

    # @classmethod
    # def zero(cls, rows, cols):           # bonus — all zeros matrix of any size
    #     data = [[0] * cols for _ in range(rows)]
    #     return cls(data)

    # @staticmethod
    # def is_square(matrix):
    #     return matrix.rows == matrix.cols
    
# class Matrix:
#     def __init__(self, data):
#         if len(set(len(row) for row in data)) > 1:
#             raise ValueError("All rows must have same number of columns!")
#         self.data = data
#         self.rows = len(data)
#         self.cols = len(data[0])

#     def __getitem__(self, index):
#         return self.data[index]

#     def __eq__(self, other):
#         return self.data == other.data

#     def __repr__(self):
#         return f"Matrix({self.data})"

#     def __str__(self):
#         return "\n".join(" ".join(str(n) for n in row) for row in self.data)

#     # ✅ already done
#     def __add__(self, other):
#         if self.rows != other.rows or self.cols != other.cols:
#             raise ValueError("Matrices must be same size to add!")
#         result = []
#         for i in range(self.rows):
#             row = []
#             for j in range(self.cols):
#                 row.append(self.data[i][j] + other.data[i][j])
#             result.append(row)
#         return Matrix(result)

#     # ✅ subtraction — same logic as add, just minus!
#     def __sub__(self, other):
#         if self.rows != other.rows or self.cols != other.cols:
#             raise ValueError("Matrices must be same size to subtract!")
#         result = []
#         for i in range(self.rows):
#             row = []
#             for j in range(self.cols):
#                 row.append(self.data[i][j] - other.data[i][j])
#             result.append(row)
#         return Matrix(result)

#     # ✅ scalar multiplication — multiply every element by a number
#     def __mul__(self, scalar):
#         if isinstance(scalar, (int, float)):
#             result = []
#             for row in self.data:
#                 result.append([n * scalar for n in row])
#             return Matrix(result)
#         raise TypeError("Can only multiply by a number!")
    
#     # def __mul__(self, scalar):       # handles a * 3
#     # if isinstance(scalar, (int, float)):
#     #     result = []
#     #     for row in self.data:
#     #         result.append([n * scalar for n in row])
#     #     return Matrix(result)

#     def __rmul__(self, scalar):      # handles 3 * a
#         return self.__mul__(scalar)  # just calls __mul__! same logic
    
#     # def __mul__(self, other):
#     #     if isinstance(other, (int, float)):
#     #         pass # scalar multiplication
#     #     elif isinstance(other, Matrix):
#     #         pass # matrix multiplication

#     # ✅ matrix multiplication
#     def dot(self, other):
#         # cols of first must equal rows of second
#         if self.cols != other.rows:
#             raise ValueError(f"Can't multiply {self.rows}x{self.cols} with {other.rows}x{other.cols}!")
#         result = []
#         for i in range(self.rows):
#             row = []
#             for j in range(other.cols):
#                 total = 0
#                 for k in range(self.cols):
#                     total += self.data[i][k] * other.data[k][j]
#                 row.append(total)
#             result.append(row)
#         return Matrix(result)

#     # ✅ transpose — rows become columns, columns become rows
#     def transpose(self):
#         result = []
#         for j in range(self.cols):
#             row = []
#             for i in range(self.rows):
#                 row.append(self.data[i][j])
#             result.append(row)
#         return Matrix(result)

#     # ✅ determinant — only for square matrices
#     def determinant(self):
#         if not Matrix.is_square(self):
#             raise ValueError("Determinant only exists for square matrices!")
#         return self._det(self.data)

#     def _det(self, data):           # helper method — recursive!
#         n = len(data)
#         if n == 1:
#             return data[0][0]
#         if n == 2:                  # base case — 2x2 formula ad-bc
#             return data[0][0]*data[1][1] - data[0][1]*data[1][0]
#         det = 0
#         for j in range(n):
#             # get submatrix by removing row 0 and column j
#             sub = [row[:j] + row[j+1:] for row in data[1:]]
#             sign = (-1) ** j
#             det += sign * data[0][j] * self._det(sub)
#         return det

#     # ✅ inverse — only for square matrices with non-zero determinant
#     def inverse(self):
#         if not Matrix.is_square(self):
#             raise ValueError("Inverse only exists for square matrices!")
#         det = self.determinant()
#         if det == 0:
#             raise ValueError("Matrix is singular — inverse doesn't exist!")
#         # cofactor matrix approach
#         n = self.rows
#         cofactors = []
#         for i in range(n):
#             row = []
#             for j in range(n):
#                 sub = [r[:j] + r[j+1:] for k, r in enumerate(self.data) if k != i]
#                 sign = (-1) ** (i + j)
#                 row.append(sign * self._det(sub))
#             cofactors.append(row)
#         # transpose cofactors to get adjugate, then divide by det
#         adjugate = Matrix(cofactors).transpose()
#         result = []
#         for row in adjugate.data:
#             result.append([round(x / det, 6) for x in row])
#         return Matrix(result)

#     # ---- checks ----

#     @staticmethod
#     def is_square(matrix):
#         return matrix.rows == matrix.cols

#     # ✅ symmetric — matrix equals its transpose
#     @staticmethod
#     def is_symmetric(matrix):
#         if not Matrix.is_square(matrix):
#             return False
#         return matrix.data == matrix.transpose().data

#     # ✅ skew symmetric — matrix equals negative of its transpose
#     @staticmethod
#     def is_skew_symmetric(matrix):
#         if not Matrix.is_square(matrix):
#             return False
#         t = matrix.transpose()
#         for i in range(matrix.rows):
#             for j in range(matrix.cols):
#                 if matrix.data[i][j] != -t.data[i][j]:
#                     return False
#         return True

#     # ✅ orthogonal — matrix * transpose = identity
#     @staticmethod
#     def is_orthogonal(matrix):
#         if not Matrix.is_square(matrix):
#             return False
#         product = matrix.dot(matrix.transpose())
#         identity = Matrix.identity(matrix.rows)
#         # round to handle floating point errors
#         rounded = [[round(x, 6) for x in row] for row in product.data]
#         return rounded == identity.data

#     @classmethod
#     def identity(cls, size):
#         data = []
#         for i in range(size):
#             row = []
#             for j in range(size):
#                 row.append(1 if i == j else 0)
#             data.append(row)
#         return cls(data)

#     @classmethod
#     def zero(cls, rows, cols):
#         return cls([[0] * cols for _ in range(rows)])
def __add__(self, other):
    if other == 0:          # handle 0 + matrix or matrix + 0
        return self
    if self.rows != other.rows or self.cols != other.cols:
        raise ValueError("Matrices of diff size cannot be added!")
    ...
def __add__(self, other):
    if not isinstance(other, Matrix):
        raise TypeError(f"Can't add Matrix and {type(other).__name__}!")
    ...
def __radd__(self, other):
    if other == 0:                # handles sum() which starts with 0 + matrix
        return self
    return self.__add__(other)

def __neg__(self):                # -matrix → negates all elements
    result = []
    for row in self.data:
        result.append([-x for x in row])
    return Matrix(result)

def __pow__(self, n):             # matrix ** n → repeated dot product
    if not Matrix.is_square(self):
        raise ValueError("Power only exists for square matrices!")
    if n < 0:
        raise ValueError("Use inverse() for negative powers!")
    if n == 0:
        return Matrix.identity(self.rows)   # anything^0 = identity
    result = self
    for _ in range(n - 1):
        result = result.dot(self)
    return result

def trace(self):                  # sum of diagonal elements
    if not Matrix.is_square(self):
        raise ValueError("Trace only exists for square matrices!")
    total = 0
    for i in range(self.rows):
        total += self.data[i][i]  # diagonal → where i==j
    return total

def rank(self):                   # number of non-zero rows in row echelon form
    # copy data to avoid modifying original
    mat = [row[:] for row in self.data]
    rank = 0
    row_idx = 0
    for col in range(self.cols):
        # find pivot row
        pivot = None
        for r in range(row_idx, self.rows):
            if mat[r][col] != 0:
                pivot = r
                break
        if pivot is None:
            continue                        # no pivot in this column, skip
        mat[row_idx], mat[pivot] = mat[pivot], mat[row_idx]   # swap rows
        # eliminate all other rows
        for r in range(self.rows):
            if r != row_idx and mat[r][col] != 0:
                factor = mat[r][col] / mat[row_idx][col]
                for c in range(self.cols):
                    mat[r][c] -= factor * mat[row_idx][c]
                    mat[r][c] = round(mat[r][c], 10)   # handle floating point
        rank += 1
        row_idx += 1
    return rank

def nullity(self):                # nullity = cols - rank (rank-nullity theorem)
    return self.cols - self.rank()