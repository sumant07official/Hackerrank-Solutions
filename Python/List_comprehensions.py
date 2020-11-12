if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    list1=[]

    for i in range(x+1):
        for j in range(y+1):
            for k in range(z+1):
                list2=[]
                list2.append(i)
                list2.append(j)
                list2.append(k)
                list1.append(list2)
                
    list2=[]
    for item in list1:
        suml=0
        for r in range(3):
            suml+=item[r]
        else:
            if suml!=n:
                list2.append(item)

    print(list2)
        
        
