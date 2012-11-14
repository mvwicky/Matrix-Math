class operations:
	def __init__(self , x  , y , z , text):
		self.x = x
		self.y = y
		self.z = z
		self.description = text
	def addition(self):
		return self.x + self.y
	def subtraction(self):
		return self.x - self.y
	def multiplication(self):
		return self.x * self.y
	def division(self):
		return self.x / self.y
	def Exponentation(self):
		return self.x ** self.y
	def A_Tri(self):
		return (self.x * self.y)/2
 
dothing = operations(1 , 2 , 3 , " ")
print dothing.addition()
print dothing.description