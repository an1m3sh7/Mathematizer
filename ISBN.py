# https://www.facebook.com/roshan.philipines/posts/2769055946717382
# Subscribed by Roshaen

#Implementation of ISBN number

def isbn(n):
    lst=[]
    j=0
    for i in range(len(n)):
        lst.insert(j,n[i])
        j+=1
    i=0
    sum=0
    for i in range(len(lst)):
        sum=sum+int(lst[i])*(10-i)
    if(sum%11==0):
        print("Valid ISBN number")
    else:
        print("Not a valid ISBN number")
        
inp=input("Enter isbn number: ")
isbn(inp)
