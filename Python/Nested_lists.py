if __name__ == '__main__':
        record=[]
        for _ in range(int(input())):
            item=[]
            name = input()
            score = float(input())
            item.append(name)
            item.append(score)
            record.append(item)

  
        marks=[]
        for i in range(len(record)):
            marks.append(record[i][1])
            
        sorted_marks=sorted(set(marks))
        sec_low=sorted_marks[1]
            
        names=[]
        for r in range(marks.count(sec_low)):
            names.append(record[marks.index(sec_low)][0])
            marks[marks.index(sec_low)]="X"
                
        names.sort()
        print("\n".join(names))


