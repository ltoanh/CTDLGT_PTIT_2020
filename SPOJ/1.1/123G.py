#wr
def base_to_dec(num,inp):
    num=num[::-1]
    res=0
    for i in range(len(num)):
        ans = num[i]
        if ans.isdigit(): 
            ans=int(ans)
        else: 
            if ans.islower():
                ans=ord(ans)-ord('a')+36
            else:
                ans=ord(ans)-ord('A')+10
        res+=ans*(inp**i)
    return res
    
def dec_to_base(num,base):  
	base_num = ""
	while num > 0:
		dig=int(num%base)
		if dig<10:
			base_num += str(dig)
		elif dig <36:
			base_num += chr(ord('A')+dig-10)
		else:
			base_num += chr(ord('a')+dig-36)
		num //= base
	base_num = base_num[::-1]
	return base_num
	
for _ in range(int(input())):
    inp, out, num = map(str, input().split())
    inp=int(inp); out=int(out)
    print(inp, num)
    print(out, dec_to_base(base_to_dec(num,inp),out))
    print('\n')