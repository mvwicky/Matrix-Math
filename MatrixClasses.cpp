#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

#define PI 3.141592
#define DEG_TO_RAD PI/180

class addOps {
	float *x;
	float *y;
	float *z;
public:
	addOps (float , float , float);
	~addOps();
	float addition() { return *x + *y; }
	float subtraction() {return *x - *y; }
	float p_Tri() {return *x + *y + *z;}
};

class multOps {
	int x;
	int y;
public:
	multOps(float , float);
	float multiplication(float , float);
	float division(float , float);
	float exponentation(float , float);
	float a_Tri(float , float);
};

class structOps {
	float spa();
	float text(string);
	float numout(float);

};

addOps::addOps(float a , float b , float c)
{
	x = new float;
	y = new float;
	z = new float;
	*x = a;
	*y = b;
	*z = c;
}

addOps::~addOps()
{
	delete x;
	delete y;
	delete z;
}
multOps::multOps(float a , float b)
{
	x = a;
	y = b;
}

float addition(float n , float m , float b);

int main()
{
	addition(1 , 2 , 3);
	addition(32 , 3 , 0);
	return 0;
}

float addition(float n , float m , float b)
{
	addOps adding(n , m , b);
	cout << adding.addition() << endl;
}