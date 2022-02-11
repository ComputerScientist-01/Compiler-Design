# removal of left recursion 
s= input("Enter the grammar:")
if s[0]!=s[3]:
    print("No left recursion")
if s[0]==s[3]:
    x=s[0]
    l=len(s)
    a=''
    c=''
    b=s[0]+"'"  
    
    for i in range(l):
        if s[i]=="|":
            a=a+s[i+1:]   
    for i in range(l):
        if s[i]=="|":
            c=c+s[4:i]   
    a=a+b
    c=c+b   
    print(s[0],"->",a)
    print(b,"->",c,"| e")
