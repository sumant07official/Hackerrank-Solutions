n,m=map(int,input().split())
arr=list(map(int,input().split()))
A=set(map(int,input().split()))
B=set(map(int,input().split()))

C = A | B
#Exclude all numbers which doesn't exit in both A & B
arr = (i for i in arr if i in C)
#Add 1 if number is in set A else subtract 1
print(sum(1 if i in A else -1 for i in arr ))
