if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    for i in range(n):
      marks=student_marks.get(query_name)
    
    
    a=sum(marks)/3
    print("%.2f" % a )