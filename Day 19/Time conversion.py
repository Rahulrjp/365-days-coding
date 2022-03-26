t=int(input("Enter time in seconds : "))
h=t//3600
m=(t%3600)//60
s= t - (h*3600) - (m*60)
print("Time =", h, "Hours", m, "minutes", s, "seconds")