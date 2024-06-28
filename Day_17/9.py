def bs(a,l,r,t):
    mid = len(a)//2

    if a[mid] == t:
        return mid
    elif a[mid] > t:
        return bs(a,mid+1,r,t)
    else :
        return bs(a,l,mid,t)
    
a = [3,4,6,-9,10,8,9,30]
t = 10

print(bs(a,0,len(a),t)) 