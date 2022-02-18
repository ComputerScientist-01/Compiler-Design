# Code for productions where all terms are in left factoring.
# A->ab|ac|ag|a+c or A->abG|abC|ab+c etc work's perfectly.Non-left factoring productions messes the code.
#A->ab|ac|epsilon won't function
def leftFactoring(s):
    k=[]
    l=[]
    n=""
    k=s.split('->')
    l=k[1].split('|')
    for i in range(0,len(l)-1):  #0 1 2 
       for j in range(0,min(len(l[i]),len(l[i+1]))):  # 0 1 2
           if(l[i][j]==l[i+1][j]):
               if l[i][j] not in n:
                   n=n+l[i][j]

    print(k[0]+'->'+n+"R")
    m=k[1].split(n)
    print("R->",end="")
    for i in range(1,len(m)):
       print(m[i],end="")
    
s=input("Enter the production: ")
while(True):
    checkFactoring(s)
    leftFactoring(s)
    print("\ndo you have another production?")
    T=input("y/n:")
    if T=='y':
        s=input("Enter the production: ")
    elif T=='n':
        break
