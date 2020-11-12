def swap_case(s):
    new_s=""
    for char in s:
      if ord(char)>=65 and ord(char)<=90:
        new_s+=chr(ord(char)+32)
      elif ord(char)>=97 and ord(char)<=172:
        new_s+=chr(ord(char)-32)
      else:
        new_s+=char

    return new_s