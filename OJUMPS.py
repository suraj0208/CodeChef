n = int(raw_input());

n=n%6;

i=1;

while(n>0 and i<=3):
	n=n-i;
	if n <= 0:
		break
	i+=1;

if n<0:
	print "no"
elif n==0:
	print "yes"
else:
	print "no"
