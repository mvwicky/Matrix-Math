import math 
import os
from sys import stdout
from time import sleep

def show_graph():
	z = [
0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1, 0 , 
0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 
1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 
0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 
0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 
0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0
]
	c = 0
	while c <= 9:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 19:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 29:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 39:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 49:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 59:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 69:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 79:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 89:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	while c <= 99:
		print z[c] ,
		c += 1
		sleep(.01)
	print ""
	c = 0
	r = 0
	while c <= 99:
		print z[c] , 
		c += 1
		sleep(.01)
show_graph()