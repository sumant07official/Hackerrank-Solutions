import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    if n%2!=0:
        print("Weird")
    elif n>=2 and 5>=n:
        print("Not Weird")
    elif n>=6 and 20>=n:
        print("Weird")
    else:
        print("Not Weird")

