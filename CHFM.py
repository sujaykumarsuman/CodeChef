def mean(a):
    return sum(a[::])/len(a)

test_case = int(input())

while (test_case):
    n = int(input())
    ar = [int(x) for x in input().split(" ")]
    init_mean = mean(ar)
    c = n - 1
    r = c*init_mean
    diff = sum(ar[::]) - r
    if diff in ar:
        print(ar.index(diff)+1)
    else:
        print("Impossible")        
    test_case-=1
