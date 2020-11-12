def mutate_string(string, position, character):
    ls=list(string)
    ls[position]=character
    s="".join(ls)
    return s

