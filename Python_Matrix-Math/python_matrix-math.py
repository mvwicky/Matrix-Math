# MATRIX MATH PORT TO PYTHON

import math
import os

Pi = 3.141592
DEG_TO_RAD = (Pi / 180)
a = [1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9]
c = [1 , 2 , 4 , 4 , 5 , 6 , 7 , 8 , 9]
ops = ["Addition" , "Subtraction" , "Multiplication" , 
	   "Division" , "Exponentation" , 
	   "Area of a Triangle" , "Perimeter of a Triangle" , 
	   "Area of a Square" , "Perimeter of a Square" , 
	   "Area of a Rectangle" , "Perimeter of a Rectangle" , 
	   "Area of a Circle" , "Circumference of a Circle" , 
	   "Area of an N-Gon" , "Perimeter of an N-Gon" , 
	   "Arc Length" , "Area of a Segment of a Circle" , 
	   "Unit Conversions"]

op_ins = ["Number 1 =" , "Number 2 =" , "Dividend =" , 
	 	  "Divisor =" , "Side =" , "Side 1 =" , 
	 	  "Side 2 =" , "Side 3 =" , "Base =" , "Power =" ,
	 	  "Height =" , "Radius =" , "Number of Sides =" , 
	 	  "Length of Sides =" , "Central Angle =" ] # 14

op_outs = ["Sum =" , "Difference =" , "Product =" , 
		   "Quotient =" , "Result =" , "Area =" , 
		   "Perimeter =" , "Circumference =" , 
		   "Arc Length =" , "Segment Area ="] # 10

log = open("log.txt" , "a")

def show_functions(o):
	n = 1
	while n <= o:
		print n , ops[n]
		n += 1

def board(a):
	print "| " , a[0] , " | " , a[1] , " | " , a[2] , " |"
	print "| " , a[3] , " | " , a[4] , " | " , a[5] , " |"
	print "| " , a[6] , " | " , a[7] , " | " , a[8] , " |"
	
def spa():
	print ""

def initialize_matrix(a):
	n = 0
	while n <= 8:
		a[n] = 0
		n += 1
	return a

def assign_values(a , s , v):
	a[s] = v
	
def assign_all_values(a , v):
	n = 0
	while n <= 8:
		a[n] = v
		n += 1
	return a

def addition(x , y):
	sum = x + y
	log_sum = sum;
	log.write("Form:Add = ")
	log.write(str(log_sum))
	log.write("\n")
	log.flush()
	return sum
	
def subtraction(x , y):
	difference = x + y
	log_diff = difference
	log.write("Form:Sub = ")
	log.write(str(log_diff))
	log.write("\n")
	log.flush()
	return difference

def multiplication(x , y):
	product = x * y
	log_prod = product
	log.write("Form:Mult = ")
	log.write(str(log_prod))
	log.write("\n")
	log.flush()
	return product
	
def division(x , y):
	quotient = float(x) / float(y)
	log_quot = quotient
	log.write("Form:Div = ")
	log.write(str(log_quot))
	log.write("\n")
	log.flush()
	return quotient

def exponentation(x , y):
	result = math.pow(x , y)
	log_exp = result
	log.write("Form:Exp = ")
	log.write(str(log_exp))
	log.write("\n")
	log.flush()
	return result
	
def area_tri(B , H):
	area = (B * H) / 2
	log_area = area
	log.write("Form:A_Tri = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return area
	
def perim_tri(s1 , s2 , s3):
	valid_triangle = 0
	if s1 + s2 < s3:
		valid_triangle = 0
	if s2 + s3 < s1:
		valid_triangle = 0
	if s1 + s3 < s2:
		valid_triangle = 0
	if s1 + s2 > s3 & s2 + s3 > s1 & s1 + s3 > s2:
		valid_triangle = 1
	if valid_triangle == 1:
		perim = s2 + s2 + s3
		log_perim = perim
		log.write("Form:P_Tri = ")
		log.write(str(log_perim))
		log.write("\n")
		log.flush()
		return perim
	if valid_triangle == 0:
		log_perim = -1
		log.write("Form:P_Tri = ")
		log.write(str(log_perim))
		log.write("\n")
		log.flush()
		return -1
		
def area_square(s):
	area = s * s
	log_area = area
	log.write("Form:S_Area = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return area

def perim_square(s):
	perim = s * 4
	log_perim = perim
	log.write("Form:S_Perim = ")
	log.write(str(log_perim))
	log.write("\n")
	log.flush()
	return perim

def area_rectangle(s1, s2):
	area = s1 * s2
	log_area = area
	log.write("Form:R_Area = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return area

def perim_rectangle(s1 , s2):
	perim = (2 * s1) + (2 * s2)
	log_perim = perim
	log.write("Form:R_Perim = ")
	log.write(str(log_perim))
	log.write("\n")
	log.flush()
	return perim
	
def area_circle(r):
	area = Pi * (r * r)
	log_area = area
	log.write("Form:C_Area = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return area
	
def circumference(r):
	cir = (2 * r) * Pi
	log_circ = cir
	log.write("Form:C_Circ = ")
	log.write(str(log_circ))
	log.write("\n")
	log.flush()
	return cir

def area_ngon(n , l):
	area = (.25 * (n * (l * l)) * (1 / math.tan(Pi / n)))
	log_area = area
	log.write("Form:A_N-Gon = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return area

def perim_ngon(n , l):
	perim = n * l
	log_perim = perim
	log.write("Form:P_N-Gon = ")
	log.write(str(log_perim))
	log.write("\n")
	log.flush()
	return perim

def arc_length(t , r):
	l = t * r
	log_length = l
	log.write("Form:A_Length = ")
	log.write(str(log_length))
	log.write("\n")
	log.flush()
	return l

def segment_area(t , r):
	a = ((r**2) / 2 ) * ( (DEG_TO_RAD * t) - math.sin(DEG_TO_RAD * t) ) 
	log_area = a
	log.write("Form:S_Area = ")
	log.write(str(log_area))
	log.write("\n")
	log.flush()
	return a

def adding_columns(a , c):
	if c == 1:
		sum = a[0] + a[3] + a[6]
	if c == 2:
		sum = a[1] + a[4] + a[7]
	if c == 3:
		sum = a[2] + a[5] + a[8]
	return sum
	
def sub_columns(a , c):
	if c == 1:
		diff = a[0] - a[3] - a[6]
	if c == 2:
		diff = a[1] - a[4] - a[7]
	if c == 3:
		diff = a[2] - a[5] - a[8]
	return diff

def mult_columns(a , c):
	if c == 1:
		prod = a[0] * a[3] * a[6]
	if c == 2:
		prod = a[1] * a[4] * a[7]
	if c == 3:
		prod = a[2] * a[5] * a[8]
	return prod
	
def div_columns(a , c):
	if c == 1:
		quot = a[0] / a[3] / a[6]
	if c == 2:
		quot = a[1] / a[4] / a[7]
	if c == 3:
		quot = a[2] / a[5] / a[8]
	return quot
	
def adding_rows(a , r):
	if r == 1:
		sum = a[0] + a[1] + a[2]
	if r == 2:
		sum = a[3] + a[4] + a[5]
	if r == 3:
		sum = a[6] + a[7] + a[8]
	return sum
	
def sub_rows(a , r):
	if r == 1:
		diff = a[0] - a[1] - a[2]
	if r == 2:
		diff = a[3] - a[4] - a[5]
	if r == 3:
		diff = a[6] - a[7] - a[8]
	return diff
	
def mult_rows(a , r):
	if r == 1:
		prod = a[0] * a[1] * a[2]
	if r == 2:
		prod = a[3] * a[4] * a[5]
	if r == 3:
		prod = a[6] * a[7] * a[8]
	return prod

def div_rows(a , r):
	if r == 1:
		quot = a[0] / a[1] / a[2]
	if r == 2:
		quot = a[3] / a[4] / a[5]
	if r == 3:
		quot = a[6] / a[7] / a[8]
	return quot

def adding_diag(a , d):
	if d == 1:
		sum = a[0] + a[4] + a[8]
	if d == 2:
		sum = a[2] + a[4] + a[6]
	return sum

def sub_diag(a , d):
	if d == 1: 
		diff = a[0] - a[4] - a[8]
	if d == 2:
		diff = a[2] - a[4] - a[6]
	return diff

def mult_diag(a , d):
	if d == 1:
		prod = a[0] * a[4] * a[8]
	if d == 2:
		prod = a[2] * a[4] * a[6]
	return prod

def div_diag(a , d):
	if d == 1:
		quot = a[0] / a[4] / a[8]
	if d == 2:
		quot = a[2] / a[4] / a[6]
	return quot
	
def unit_conversions():
	print "1. Length"
	print "2. Mass/Weight"
	print "3. Volume"
	print "4. Temperature"
	print "5. Currency"
	i = input()
	if i == 1: # Length
		print "Starting Unit"
		print "1. Meter       3. Foot"
		print "2. Kilometer   4. Yard"
		print "               5. Mile"
		q = input()
		if q == 1 | q == "Meter":
			print "Converting To"
			print "1. Kilometer"
			print "2. Foot"
			print "3. Yard"
			print "4. Mile"
			h = input()
			if h == 1 | h == "Kilometer":
				print "conversion here"
				os.system('pause')
			os.system('pause')
		if q == 2 | q == "Kilometer":
			print "Converting To"
			print "1. Meter"
			print "2. Foot"
			print "3. Yard"
			print "4. Mile"
			h = input()
			os.system('pause')
	if i == 2: # Mass/Weight
		print "Milligram   Ounce"
		print "Gram        Pound"
		print "Kilogram    Ton"
		print "Metric Ton  Troy Ounce"
	if i == 3: # Volume
		print "Ounce       "
		print "Pint"
		print "Quart"
		print "Gallon"
	if i == 4: # Temperature
		print "Farenheit"
		print "Celsius"
		print "Kelvin"
		print "Rankine"
		print "Delisle"
		print "Newton"
	if i == 5: # Currency
		print "USD"
		print "EUR"
		print "GBP"
		print "CAD"
		print "JPY"
		print "CNY"

def do_things():
	stay_d = 1
	while stay_d == 1:
		print "1. Columns"
		print "2. Rows"
		print "3. Diagonals"
		print "4. Formulas"
		print "5. Matrix Editing"
		c = input()
		os.system('cls')
		stay_c = 1
		if c == 1: # Columns
			while stay_c == 1:
				show_functions(4)
				ic = input()
				spa()
				if ic == 1: # Adding Columns
					print "Column = "
					f = input()
					print adding_columns(a , f)
					log_sum = adding_columns(a , f)
					log.write("Column:Add =  ")
					log.write(str(log_sum))
					log.write("\n")
					os.system('pause')
				if ic == 2: # Subtracting Columns
					print "Column = "
					f = input()
					print sub_columns(a , f)
					log_diff = sub_columns(a , f)
					log.write("Column:Sub =  ")
					log.write(str(log_diff))
					log.write("\n")
					os.system('pause')
				if ic == 3: # Multiplying Columns
					print "Column = "
					f = input()
					print mult_columns(a , f)
					log_prod = mult_columns(a , f)
					log.write("Column:Mult =  ")
					log.write(str(log_prod))
					log.write("\n")
					os.system('pause')
				if ic == 4: # Dividing Columns
					print "Column = "
					f = input()
					print div_columns(a , f)
					log_quot = div_columns(a , f)
					log.write("Column:Div =  ")
					log.write(str(log_quot))
					log.write("\n")
					os.system('pause')
				os.system('cls')
				print "Stay in Columns?"
				stay_c = input()
				os.system('cls')
		stay_r = 1
		if c == 2: # Rows
			while stay_r == 1:
				show_functions(4)
				r = input()
				spa()
				if r == 1: # Adding Rows
					print "Row = "
					f = input()
					print adding_rows(a , f)
					log_sum = adding_rows(a , f)
					log.write("Row:Add =  ")
					log.write(str(log_sum))
					log.write("\n")
					os.system('pause')
				if r == 2: # Subtracting Rows
					print "Row = "
					f = input()
					print sub_rows(a , f)
					log_diff = sub_rows(a , f)
					log.write("Row:Sub =  ")
					log.write(str(log_diff))
					log.write("\n")
					os.system('pause')
				if r == 3: # Multiplying Rows
					print "Row ="
					f = input()
					print mult_rows(a , f)
					log_prod = mult_rows(a , f)
					log.write("Row:Mult =  ")
					log.write(str(log_prod))
					log.write("\n")
					os.system('pause')
				if r == 4: # Dividing Rows
					print "Row = "
					f = input()
					print div_rows(a , f)
					log_quot = div_rows(a , f)
					log.write("Row:Div =  ")
					log.write(str(log_quot))
					log.write("\n")
					os.system('pause')
				os.system('cls')
				print "Stay in Rows?"
				stay_r = input()
				os.system('cls')
		stay_d = 1
		if c == 3: # Diagonals
			while stay_d == 1:
				show_functions(4)
				d = input()
				spa()
				if d == 1: # Adding Diagonals
					print "Diagonal = "
					f = input()
					print adding_diag(a , f)
					log_sum = adding_diag(a , f)
					log.write("Diag:Add =  ")
					log.write(str(log_sum))
					log.write("\n")
					os.system('pause')
				if d == 2: # Subtracting Diagonals
					print "Diagonal = "
					f = input()
					print sub_diag(a , f)
					log_diff = sub_diag(a , f)
					log.write("Diag:Sub =  ")
					log.write(str(log_diff))
					log.write("\n")
					os.system('pause')
				if d == 3: # Multiplying Diagonals
					print "Diagonal = "
					f = input()
					print mult_diag(a , f)
					log_prod = mult_diag(a , f)
					log.write("Diag:Mult =  ")
					log.write(str(log_prod))
					log.write("\n")
					os.system('pause')
				if d == 4: # Dividing Diagonals
					print "Diagonal = "
					f = input()
					print div_diag(a , f)
					log_quot = div_diag(a , f)
					log.write("Diag:Div =  ")
					log.write(str(log_quot))
					log.write("\n")
					os.system('pause')
				os.system('cls')
				print "Stay in Diagonals?"
				stay_d = input()
				os.system('cls')
		stay_f = 1
		if c == 4: # Formulas
			while stay_f == 1:
				n = 1
				num_ops = 18
				while n <= num_ops:
					print n, ops[n-1]
					n += 1  
				f = input()
				os.system('cls')
				if f == 1: # Addition
					print ops[0]
					print op_ins[0]
					s1 = input()
					print op_ins[1]
					s2 = input()
					print op_outs[0] , addition(s1, s2)
					os.system('pause')
				if f == 2: # Subtraction
					print op_ins[0]
					s1 = input()
					print op_ins[1]
					s2 = input()
					print op_outs[1] , subtraction(s1 , s2)
					os.system('pause')
				if f == 3: # Multiplication
					print op_ins[0]
					s1 = input()
					print op_ins[1]
					s2 = input()
					print op_outs[2] , multiplication(s1 , s2)
					os.system('pause')
				if f == 4: # Division
					print op_ins[2]
					s1 = input()
					print op_ins[3]
					s2 = input()
					print op_outs[3] , division(s1 , s2)
					os.system('pause')
				if f == 5: # Exponentation
					print op_ins[8]
					s1 = input()
					print op_ins[9]
					s2 = input()
					print op_outs[4] , exponentation(s1 , s2)
					os.system('pause')
				if f == 6: # Area Triangle
					print op_ins[8]
					s1 = input()
					print op_ins[10]
					s2 = input()
					print op_outs[5] , area_tri(s1 , s2)
					os.system('pause')
				if f == 7: # Perim Triangle
					print op_ins[5]
					s1 = input()
					print op_ins[6]
					s2 = input()
					print op_ins[7]
					s3 = input()
					print op_outs[6] , perim_tri(s1 , s2 , s3)
					os.system('pause')
				if f == 8: # Area Square
					print op_ins[4]
					s1 = input()
					print op_outs[5] , area_square(s1)
					os.system('pause')
				if f == 9: # Perim Square
					print op_ins[4]
					s1 = input()
					print op_outs[6] , perim_square(s1)
					os.system('pause')
				if f == 10: # Area Rectangle
					print op_ins[5]
					s1 = input()
					print op_ins[6]
					s2 = input()
					print op_outs[5] , area_rectangle(s1 , s2)
					os.system('pause')
				if f == 11: # Perim Recatangle
					print op_ins[5]
					s1 = input()
					print op_ins[6]
					s2 = input()
					print op_outs[6] , perim_rectangle(s1 , s2)
					os.system('pause')
				if f == 12: # Area Circle
					print op_ins[11]
					s1 = input()
					print op_outs[5] , area_circle(s1)
					os.system('pause')
				if f == 13: # Circumference Circle
					print op_ins[11]
					s1 = input()
					print op_outs[7] , circumference(s1)
					os.system('pause')
				if f == 14: # Area N-Gon
					print op_ins[12]
					s1 = input()
					print op_ins[13]
					s2 = input()
					print op_outs[5] , area_ngon(s1 , s2)
					os.system('pause')
				if f == 15: # Perim N-Gon 
					print op_ins[12]
					s1 = input()
					print op_ins[13]
					s2 = input()
					print op_outs[6] , perim_ngon(s1 , s2)
					os.system('pause')
				if f == 16: # Arc Length
					print op_ins[14]
					t = input()
					print op_ins[11]
					r = input()
					print op_outs[8] , arc_length(t , r)
					os.system('pause')
				if f == 17: # Segment Circle
					print op_ins[14]
					t = input()
					print op_ins[11]
					r = input()
					print op_outs[9] , segment_area(t , r)
					os.system('pause')
				if f == 18:
					print ""
					unit_conversions()
				os.system('cls')
				print "Stay in Formulas?"
				stay_f = input()
				os.system('cls')
		os.system('cls')
		stay_e = 1
		if c == 5: # Matrix Editing
			while stay_e == 1:
				print "1. Initialize Matrix to 0"
				print "2. Assign one value to all spots"
				print "3. Assign a value to one spot"
				e = input()
				os.system('cls')
				if e == 1: # initialize matrix
					print ""
					initialize_matrix(a)
					board(a)
					os.system('pause')
					log.write("Matrix Initialized")
					log.write("\n")
				if e == 2: # assign all values
					os.system('cls')
					print "Value = "
					v = input()
					assign_all_values(a , v)
					board(a)
					os.system('pause')
					log.write("All spots set to ")
					log.write(str(v))
					log.write("\n")
				if e == 3: # assign value
					os.system('cls')
					print "Spot = "
					s = input()
					print "Value = "
					v = input()
					assign_values(a , s , v)
					board(a)
					os.system('pause')
					log.write("Spot ")
					log.write(str(s))
					log.write(" set to ")
					log.write(str(v))
					log.write("\n")
				os.system('cls')
				print "Stay in Matrix Edit Mode?"
				stay_e = input()
				os.system('cls')
		print "Stay on?"
		stay_d = input()
		os.system('cls')

do_things()