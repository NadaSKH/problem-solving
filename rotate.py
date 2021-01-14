
#Rotate an array to the right with k number of rotations


#test cases number
t = int(input())
for _ in range(t):
    #length of the array
    num = int(input())
    #k
    k = int(input())
    arr = []
    for _ in range(num):
        arr.append(int(input()))
    while k>0:
        arr = [arr[-1]] + arr[:-1]
        k-=1
    print(*arr)



