
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
    print(*(arr[num-(k%num):]+arr[:num-(k%num)]))
       



