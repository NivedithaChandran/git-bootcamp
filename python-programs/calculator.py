print("Student Result Analyzer")

def calculate_total(m1, m2, m3):
    total = m1 + m2 + m3
    return total

def calculate_average(total):
    average = total / 2
    return average

def find_grade(avg):
    if avg >= 90:
        return "A"
    elif avg >= 75:
        return "B"
    elif avg >= 50:
        return "C"
    else:
        return "Fail"

def check_pass(m1, m2, m3):
    if m1 and m2 and m3 >= 40:
        return True
    else:
        return False

mark1 = input("Enter mark 1: ")
mark2 = input("Enter mark 2: ")
mark3 = input("Enter mark 3: ")

total = calculate_total(mark1, mark2, mark3)
average = calculate_average(total)
grade = find_grade(average)

if check_pass(mark1, mark2, mark3):
    print("Total:", total)
    print("Average:", average)
    print("Grade:", grade)
else:
    print("Student Failed")