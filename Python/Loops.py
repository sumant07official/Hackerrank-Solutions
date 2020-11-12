if __name__ == '__main__':
    n = int(input())
    ls=[]
    for i in range(0,n):
        ls.append(str(i*i))

    print("\n".join(ls))
