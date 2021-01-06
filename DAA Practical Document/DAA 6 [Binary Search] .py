
Name : Ritik Sharma
Roll No.: 1816110164
Year : 3rd
Section : C
Branch : CSE



n=int(input('enter the size of list'))
l=[]
for i in range(0,n):
    a=int(input('enter element'))
    l.append(a)
beg=0
end=n-1
mid=int((beg+end)/2)
b=int(input("enter the search element"))
while(beg<end and b!=l[mid]):
    if(b<l[mid]):
        end=mid-1
        mid=int((beg+end)/2)
    else:
        beg=mid+1
        mid=int((beg+end)/2)
if(b==l[mid]):
    print("position of the search element =",mid+1)
else:
    print('not found') 
