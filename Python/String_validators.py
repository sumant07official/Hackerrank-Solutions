if __name__ == '__main__':
    s = input()
    ls=['False','False','False','False','False']
    for c in s:
      if c.isalnum()==True:
        ls[0]='True'
      if c.isalpha()==True:
        ls[1]='True'
      if c.isdigit()==True:
        ls[2]='True'
      if c.islower()==True:
        ls[3]='True'
      if c.isupper()==True:
        ls[4]='True'
      
    print("\n".join(ls))
      

        
