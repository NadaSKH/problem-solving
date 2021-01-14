
#Rotate an array to the right with k number of rotations


#test cases number
t = int(input())
for _ in range(t):
    #length of the array
    A = list( map( int, input().split()))
    num = A[0]
    #k
    k = A[1]
    arr =list(map(int, input().split()[:num]))
    while k>0:
        arr = [arr[-1]] + arr[:-1]
        k-=1
    print(*arr)


# A = list( map( int, input().split()))

# print(A[0])
# N = int(input())
	
# PQT =list(map(int, input().split()[:N]))
# print(*PQT)
