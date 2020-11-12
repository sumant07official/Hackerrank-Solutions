def print_formatted(number):
    for i in range(1,number+1):
        width=len(bin(number)[2::])
        decval=str(i).rjust(width)
        binval=bin(i)[2::].rjust(width)
        octval=oct(i)[2::].rjust(width)
        hexval=hex(i)[2::].upper().rjust(width)
        print(decval+" "+octval+" "+hexval+" "+binval)

