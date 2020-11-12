N=int(input())
integers=list(map(int,input().split()))

def palindrome(i):
  if str(i)==str(i)[::-1]:
    return True
  else:
    return False

print(min(integers)>0 and any(palindrome(i) for i in integers))


