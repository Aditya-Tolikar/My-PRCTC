__author__ = 'phantomhieve and Ulterno'

for _ in range(input()):
    n, q = map(int, raw_input().split())
    array = list(map(int, raw_input().split()))
    array.sort()
    for _x in range(1, q):
        sn_size = input()
        l, size = len(array), array[-1] + (len(array))
        for i in range(1, n):
            if array[i] >= sn_size:
                index = i-1
                break
        indl = 0
        while (array[index] + index - indl - 1) >= sn_size :
            indl += array[index] + index - indl - 1 - sn_size
            index -= 1
        ans = n - index
        print
        ans
