ops = ["Addition" , "Subtraction" , "Multiplication" , "Division" , "Exponentation" , "Area of a Triangle" , "Perimeter of a Triangle" , 
	   "Area of a Square" , "Perimeter of a Square" , "Area of a Rectangle" , "Perimeter of a Rectangle" , "Area of a Circle" , 
	   "Circumference of a Circle" , "Area of an N-Gon" , "Perimeter of an N-Gon" , "Arc-Length" , "Segment of a Circle"]
n = 1
num_ops = 17
while n <= num_ops:
	print n , ops[n-1]
	n += 1  