###### --------------------------------- game of string
def common(s1,s):
    dic = {};
    c=0
    for x in s:
        if x in dic.keys():
            dic[x] = dic[x]+1
        else:
            dic[x]=1
    for x in s1:
        if x in dic.keys():
            c = c+dic[x]
    return c
    
s1 = input()
s2 = input()
s = input()
m = common(s1,s)
n = common(s2,s)
if m>n:
   print("WIN")
else:
   print("LOSE")
	   
###### --------------------------------  help baby chef
t = int(input())
for x in range(0,t):
    size = int(input())
    arr = map(int,input().split())
    c = 1
    sumn =0
    for x in arr:
        sumn +=x
        print(sumn//c,end=" ")
        c=c+1
    print()
	      
##### ------------------------------------ maximum money 
t = int(input())
for x in range(0,t):
    n = int(input())
    arr = list(map(int,input().split()))
    m = int(input())
    i = 0
    j = m-1
    maxn = float("inf")
    arr.sort()
    while j<n:
        if (arr[j]-arr[i]<maxn):
            maxn = arr[j]-arr[i]
        j=j+1
        i=i+1
    print(maxn)
	      
##### --------------------------------- NEW DISH(wrong answer)
def ifpossible(s,u):
    if len(s)!=len(u):
        return "NO"
    combine = ''
    combine = s+s
    if combine.count(u)>0:
        return "YES"
    else:
        return "NO"
    
t = int(input())
for x in range(0,t):
    s = input()
    u = input()
    print(ifpossible(s,u))
	      
#--------------------------------------   MAX-PRODUCT(runtime error )
def maxProduct(arr,size):
    res = arr[0]
    cur_min = arr[0]
    cur_max = arr[0]
    for i in range(1,size):
        cur_min = cur_min * arr[i]
        cur_max = cur_max * arr[i]
        
        next_min = min(cur_min,min(cur_max,arr[i]))
        next_max = max(cur_min,max(cur_max,arr[i]))
        cur_min = next_min
        cur_max = next_max
        if cur_max >res:
            res = cur_max
    return res
    
size = int(input())
arr = list(map(int,input().split()))
print(maxProduct(arr,size)) 
