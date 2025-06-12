with open('ex.txt','r') as f:
    print(f.read())
with open('ex1.txt','w') as f:
    print(f.write('Hello world!'))
with open('ex3.txt','a') as f:
    print(f.writelines('Hello\n'*10))
with open('ex.txt','a') as f:
    print(f.write('!'))