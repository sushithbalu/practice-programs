f = open("pdfs")
f = list(f)
a = [x[31:-2] for x in f]
for v in xrange (len(a)-1):
	print a[v]
