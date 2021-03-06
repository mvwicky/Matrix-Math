// Created on Tue Jun 26 2012

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <time.h>

#define PI 3.141592
#define MATRICIES float a[9], float b[9], float c[9], float d[9], float e[9], float f[9], float g[9], float h[9], float i[9], float j[9]
#define MCHOOSE a , b , c , d , e , f , g , h , i , j	


using namespace std;


void board(float a[9]);
void text (string words);
void text_sl (string words);
void spa();
void numout (float num);
void initialize_matrix0(float a[9]);
float initialize_matrixN(float a[] , int msize);
float addition(float number1 , float number2); 
float subtraction(float number1 , float number2);
float muliplication(float number1 , float number2);
float division(float number1 , float number2);
float exponentation(float base , float power);
float formulas(int form);
float A_Tri (float triHeight , float triBase);
float P_Tri (float triSide1 , float triSide2 , float triSide3);
float A_Sqaure (float squareSide);
float P_Sqaure (float squareSide);
float A_Rec (float recSide1 , float recSide2);
float P_Rec (float recSide1 , float recSide2);
float A_Circle (float radius);
float C_Circle (float radius);
float A_NGon (float Number_Sides_NGon , float Length_Sides_NGon);
float P_NGon (float Number_Sides_NGon , float Length_Sides_NGon);
void assign_values(float a[9] , int s , float value);
float adding_columns(float a[9] , int c);
float adding_rows(float a[9] , int r);
float adding_diagonals(float a[9] , int d);
float subtract_columns(float a[9] , int c);
float subtract_rows(float a[9] , int r);
float subtract_diagonals(float a[9] , int d);
float mult_columns(float a[9] , int c);
float mult_rows(float a[9] , int r);
float mult_diagonals(float a[9] , int r);
float div_columns(float a[9] , int c);
float div_rows(float a[9] , int r);
float div_diagonals(float a[9] , int d);
float numtmatrix(float a[9] , float n);
float matrix_add(float A[9] , float B[9]);
float matrix_sub(float A[9] , float B[9]);
float matrix_mult(float A[9] , float B[9]);
string matrixChooseS(string whichMatrix);
float matrixChooseF(float whichMatrix);
float matrixChoose9(int whichMatrix, MATRICIES);


int main() 
{
	
	float a[9];
	float b[9];
	float c[9];
	float d[9];
	float e[9];
	float f[9];
	float g[9];
	float h[9];
	float i[9];
	float j[9];
	int test = 0;
	int swmatrix;
	string whichMatrixS;
	float whichMatrixF;
//	float choose[4];
	//initialize_matrixN(choose , 20);
	
	//	int n = 0;
	while (test == 1)
	{
		text_sl("String");
		cin >> whichMatrixS;
		matrixChooseS(whichMatrixS);
		text_sl("Number");
		cin >> whichMatrixF;
		matrixChooseF(whichMatrixF);
	}	
	initialize_matrix0(a);
	initialize_matrix0(b);
	initialize_matrix0(c);
	initialize_matrix0(d);
	initialize_matrix0(e);
	initialize_matrix0(f);
	initialize_matrix0(g);
	initialize_matrix0(h);
	initialize_matrix0(i);
	initialize_matrix0(j);
	int start_over = 1;
	int stillin = 1;
	int mmode;
	int wmatrix;
	int wspace;
	float value;
	int sinmatrix = 1;
	int showboard;
	int wop;
	int wmath;
	while (start_over == 1)
	{
		text("There are 10 matrices in memory");
		text("They are indexed from 0-9");
		text("1: Matrix Edit Mode");
		text("2: Matrix Math Mode");
		text("3: Arithmetic/Formula Mode");
		
		cin >>mmode;
		spa();
		if (mmode == 1)
		{
			text("Matrix Edit Mode");
			spa();
			while (stillin == 1)
			{
				sinmatrix = 1;
				text("Press the Number for what matrix will be edited. Indexed from 0-9");
				cin >>wmatrix;
				spa();
				if (wmatrix == 0)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 0 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(a , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(a);
						}
						text("Stay in matrix 0?");
						cin >> sinmatrix;
					}
					
				}
				if (wmatrix == 1)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 1 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(b , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(b);
						}
						text("Stay in matrix 1?");
						cin >> sinmatrix;
					}	
				}
				if (wmatrix == 2)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 2 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(c , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(c);
						}
						text("Stay in matrix 2?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 3)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 3 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(d , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(d);
						}
						text("Stay in matrix 3?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 4)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 4 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(e , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(e);
						}
						text("Stay in matrix 4?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 5)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 5 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(f , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(f);
						}
						text("Stay in matrix 5?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 6)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 6 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(g , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(g);
						}
						text("Stay in matrix 6?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 7)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 7 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(h , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(h);
						}
						text("Stay in matrix 7?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 8)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 8 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(i , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(i);
						}
						text("Stay in matrix 8?");
						cin >> sinmatrix;
					}
				}
				if (wmatrix == 9)
				{
					while (sinmatrix == 1)
					{
						text("Matrix 10 selected");
						text("Spaces are indexed from 0-8");
						cin >> wspace;
						spa();
						text("Value?");
						cin >> value;
						assign_values(j , wspace , value);
						spa();
						text("Show matrix?");
						cin >> showboard;
						if (showboard == 1)
						{
							board(j);
						}
						text("Stay in matrix 9?");
						cin >> sinmatrix;
					}
				}
				text("Stay in Matrix Edit Mode?");
				cin >> stillin;
			}
		}
		int chooseM1;
		int chooseM2;
		if (mmode == 2)
		{
			stillin = 1;
			while (stillin == 1)
			{
				text("Matrix Math Mode");
				spa();
				text("1: Column Operations");
				text("2: Row Operations");
				text("3: Diagonal Operations");
				text("4: Matrix Operations");
				cin >> wop;
				spa();
				if (wop == 1) // columns
				{
					text("1: Add");
					text("2: Subtract");
					text("3: Multiply");
					text("4: Divide");
					cin >> wmath;
					spa();
					if (wmath == 1)
					{
						text("Adds down the rows");
						text("Rows are numbered left to right and 1-3");
						text_sl("Which matrix? (0-9)" );
						cin >> chooseM1;
						text_sl("Which row? ");
						cin >> chooseM2;
						cout << matrixChoose9(chooseM1 , MCHOOSE ) << endl;
					}
					if (wmath == 2)
					{
						
					}
					if (wmath == 3)
					{
						
					}
					if (wmath == 4)
					{
						
					}
				}
				if (wop == 2) // rows
				{
					text("1: Add");
					text("2: Subtract");
					text("3: Multiply");
					text("4: Divide");
					cin >> wmath;
					spa();
					if (wmath == 1)
					{
						
					}
					if (wmath == 2)
					{
						
					}
					if (wmath == 3)
					{
						
					}
					if (wmath == 4)
					{
						
					}
				}
				if (wop == 3) // diags
				{
					text("1: Add");
					text("2: Subtract");
					text("3: Multiply");
					text("4: Divide");
					cin >> wmath;
					spa();
					if (wmath == 1)
					{
						
					}
					if (wmath == 2)
					{
						
					}
					if (wmath == 3)
					{
						
					}
					if (wmath == 4)
					{
						
					}
				}
				if (wop == 4) // matrix stuff
				{
					text("1: Add Two Matricies");
					text("2: Subtract Two Matricies");
					text("3: Multiply a Number Through a Matrix");
					text("4: Mulitpy Two Matricies");
					cin >> wmath;
					spa();
					
				}
				text("Stay in Matrix Math Mode?");
				cin >> stillin;
			}
			
		}
		int stayform = 1;
		if (mmode == 3)
		{
		
			text("Arithmetic/Formula Mode");
			int wform;
			float variable1;
			float variable2;
			float variable3;
			while (stayform == 1)
			{
				int toom = time(NULL);
				text("1: Addition");
				text("2: Subtraction");
				text("3: Multiplication");
				text("4: Division");
				text("5: Exponentation");
				text("6: Area of a Triangle");
				text("7: Perimeter of a Triangle");
				text("8: Area of a Square");
				text("9: Perimeter of a Square");
				text("10: Area of a Rectangle");
				text("11: Perimeter of a Rectangle");
				text("12: Area of a Circle");
				text("13: Circumference of a Circle");
				text("14: Area of an N-Gon");
				text("15: Perimeter of an N-Gon");
				cin >> wform;
				spa();
				if (wform == 1)
				{
					text("This adds two numbers together");
					text_sl("First input = ");
					cin >> variable1;
					text_sl("Second input = ");
					cin >> variable2;
					spa();
					cout << "Sum = " << addition(variable1 ,  variable2) << endl;
					spa();
					
				}
				if (wform == 2)
				{
					text("The first input minus the second");
					text_sl("First input = ");
					cin >> variable1;
					text_sl("Second input = ");
					cin >> variable2;
					spa();
					cout << "Difference = " << subtraction(variable1 ,  variable2) << endl;
					spa();
					
				}
				if (wform == 3)
				{
					text("This multiplies two numbers together");
					text_sl("First input = ");
					cin >> variable1;
					text_sl("Second input = ");
					cin >> variable2;
					spa();
					cout << "Product = " << muliplication(variable1 ,  variable2) << endl;
					spa();
					
				}
				if (wform == 4)
				{
					text("The first input divided by the second");
					text_sl("First input = ");
					cin >> variable1;
					text_sl("Second input = ");
					cin >> variable2;
					spa();
					cout << "Quotient = " << division(variable1 , variable2) << endl;
					spa();
					
				}
				if (wform == 5)
				{
					text("Two inputs");
					text_sl("Base = ");
					cin >> variable1;
					text_sl("Power = ");
					cin >> variable2;
					spa();
					cout << "Answer = " << exponentation(variable1 , variable2) << endl;
					spa();
					
				}
				if (wform == 6)
				{
					text("Two inputs");
					text_sl("Base = ");
					cin >> variable1;
					text_sl("Height = ");
					cin >> variable2;
					spa();
					cout << "Area = " << A_Tri(variable1 , variable2) << endl;
					spa();
					
					
				}
				if (wform == 7)
				{
					text("Three inputs");
					text_sl("1st side = ");
					cin >> variable1;
					text_sl("2nd side = ");
					cin >> variable2;
					text_sl("3rd side = ");
					cin >> variable3;
					P_Tri(variable1 , variable2 , variable3);
					spa();
					if (P_Tri(variable1 , variable2 , variable3) == 0)
					{
						text("Not a valid Triangle");
					}
					if (P_Tri(variable1 , variable2 , variable3) != 0)
					{
						cout << "Perimeter = " << P_Tri(variable1 , variable2 , variable3) << endl;
					}
					spa();
					
				}
				if (wform == 8)
				{
					text("One input");
					text_sl("Side length = ");
					cin >> variable1;
					spa();
					cout << "Area = " << A_Sqaure(variable1) << endl;
					spa();
					
				}
				if (wform == 9)
				{
					text("One input");
					text_sl("Side length = ");
					cin >> variable1;
					spa();
					cout << "Perimeter = " << A_Sqaure(variable1) << endl;
					spa();
					
				}
				if (wform == 10)
				{
					text("Two inputs");
					text_sl("Length = ");
					cin >> variable1;
					text_sl("Width = ");
					cin >> variable2;
					spa();
					cout << "Area = " << A_Rec(variable1 , variable2) << endl;
					spa();
					
				}
				if (wform == 11)
				{
					text("Two inputs");
					text_sl("Length = ");
					cin >> variable1;
					text_sl("Width = ");
					cin >> variable2;
					spa();
					cout << "Perimeter = " << P_Rec(variable1 , variable2) << endl;
					spa();
					
				}
				if (wform == 12)
				{
					text("One input");
					text_sl("Radius = ");
					cin >> variable1;
					spa();
					cout << "Area = " << A_Circle(variable1) << endl;
					spa();
					
					
				}
				if (wform == 13)
				{
					text("One input");
					text_sl("Radius = ");
					cin >> variable1;
					spa();
					cout << "Circumference = " << C_Circle(variable1) << endl;
					spa();
					
				}
				if (wform == 14)
				{
					text("Two inputs");
					text_sl("Number of sides = ");
					cin >> variable1;
					text_sl("Length of sides = ");
					cin >> variable2;
					spa();
					cout << "Area = " << A_NGon(variable1 , variable2) << endl;
					spa();
					
				}
				if (wform == 15)
				{
					text("Two inputs");
					text_sl("Number of sides = ");
					cin >> variable1;
					text_sl("Length of sides = ");
					cin >> variable2;
					spa();
					cout << "Perimeter = " << P_NGon(variable1 , variable2) << endl;
					spa();
					
				}
				text("Stay Here?");
				cin >> stayform;
			}
		}
	}
	return 0;
	
	
}

__inline void text(string words)
{
	cout << words << endl;
}

void text_sl(string words)
{
	cout << words;
}

void spa()
{
	text("");
}

void numout(float num)
{
	cout << num << endl;
}

void board(float a[9])
{
	cout << "| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
	cout << "-------------" << endl;
	cout << "| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
	cout << "-------------" << endl;
	cout << "| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
}

void initialize_matrix0(float a[9])
{
	int n = 0;
	while (n <= 8)
	{
		a[n] = 0;
		n = n + 1;
	}
}

float initialize_matrixN(float a[] , int msize)
{
	int n = 0;
	while (n <= (msize - 1))
	{
		a[n] = n;
		cout << a[n] << endl;
		n = n + 1;
	}
}

float addition(float number1 , float number2)
{
	float result;
	result = number1 + number2;
//	cout << "Sum = " << result << endl;
	return result;
}

float subtraction(float number1 , float number2)
{
	float result;
	result = number1 - number2;
//	cout << "Difference = " << result << endl;
	return result;
}

float muliplication(float number1 , float number2)
{
	float result;
	result = number1 * number2;
//	cout << "Product = " << result << endl;
	return result;
}

float division(float number1 , float number2)
{
	float result;
	result = number1 / number2;
//	cout << "Quotient = " << result << endl;
	return result;
}

float exponentation(float base , float power)
{
	float result;
	result = pow(base , power);
	return result;
}
float A_Tri (float triHeight , float triBase)
{
	float area;
	area = (triHeight * triBase) / 2;
	return area;
}
float P_Tri (float triSide1 , float triSide2 , float triSide3)
{
	float Valid_Triangle = 0;
	float perimeter = 0;
	if (triSide1 + triSide2 < triSide3)
	{
		Valid_Triangle = 0;
	}
	if (triSide2 + triSide3 < triSide1)
	{
		Valid_Triangle = 0;
	}
	if (triSide1 + triSide3 < triSide2)
	{
		Valid_Triangle = 0;
	}
	if (triSide1 + triSide2 > triSide3 && triSide2 + triSide3 > triSide1 && triSide1 + triSide3 > triSide2)
	{
		Valid_Triangle = 1;
	}
	if (Valid_Triangle == 1)
	{
		perimeter = triSide1 + triSide2 + triSide3;
	}
	if (Valid_Triangle == 1)
	{
		return perimeter;
	}
	if (Valid_Triangle == 0)
	{
		return 0;
	}
}
float A_Sqaure (float squareSide)
{
	float area;
	area = pow(squareSide , 2);
	return area;
}
float P_Sqaure (float squareSide)
{
	float perimeter;
	perimeter = squareSide * 4;
	return perimeter;
}
float A_Rec (float recSide1 , float recSide2)
{
	float area;
	area = recSide1 * recSide2;
	return area;
}
float P_Rec (float recSide1 , float recSide2)
{
	float perimeter;
	perimeter = (2 * recSide1) + (2 * recSide2);
	return perimeter;
}
float A_Circle (float radius)
{
	float area;
	area = (2 * PI) * (pow(radius , 2));
	return area;
}
float C_Circle (float radius)
{
	float circumference;
	circumference = 2 * PI * radius;
	return circumference;
}
float A_NGon (float Number_Sides_NGon , float Length_Sides_NGon)
{
	float area;
	area = ( .25 * (Number_Sides_NGon * ( pow(Length_Sides_NGon , 2) ) * (1 / tan (PI / Number_Sides_NGon) ) ) );
	return area;
	
}
float P_NGon (float Number_Sides_NGon , float Length_Sides_NGon)
{
	float perimeter;
	perimeter = Number_Sides_NGon * Length_Sides_NGon;
	return perimeter;
}

void assign_values(float a[9] , int s , float value)
{
	a[s] = value;
}

float adding_columns(float a[9] , int c)
{
	float sum = 0;
	if (c == 1)
	{
		sum = a[0] + a[3] + a[6];
	}
	if (c == 2)
	{
		sum = a[1] + a[4] + a[7];
	}
	if (c == 3)
	{
		sum = a[2] + a[5] + a[8];
	}
	text_sl("Sum = ");
	numout(sum);
	return sum;
}

float adding_rows(float a[9] , int r)
{
	float sum = 0;
	if (r == 1)
	{
		sum = a[0] + a[1] + a[2];
	}
	if (r == 2)
	{
		sum = a[3] + a[4] + a[5];
	}
	if (r == 3)
	{
		sum = a[6] + a[7] + a[8];
	}
	text_sl("Sum = ");
	numout(sum);
	return sum;
}

float adding_diagonals(float a[9] , int d)
{
	float sum = 0;
	if (d == 1) 
	{
		sum = a[0] + a[4] + a[8];
	}
	if (d == 2)
	{
		sum = a[2] + a[4] + a[6];
	}
	text_sl("Sum = ");
	numout(sum);
	return sum;
}

float subtract_columns(float a[9] , int c)
{
	float diff = 0;
	if (c == 1)
	{
		diff = a[0] - a[3] - a[6];
	}
	if (c == 2)
	{
		diff = a[1] - a[4] - a[7];
	}
	if (c == 3)
	{
		diff = a[2] - a[5] - a[8];
	}
	text_sl("Difference = ");
	numout(diff);
	return diff;
}

float subtract_rows(float a[9] , int r)
{
	float diff = 0;
	if (r == 1)
	{
		diff = a[0] - a[1] - a[2];
	}
	if (r == 2)
	{
		diff = a[3] - a[4] - a[5];
	}
	if (r == 3)
	{
		diff = a[6] - a[7] - a[8];
	}
	text_sl("Difference = ");
	numout(diff);
	return diff;
}

float subtract_diagonals(float a[9] , int d)
{
	float diff = 0;
	if (d == 1) 
	{
		diff = a[0] - a[4] - a[8];
	}
	if (d == 2)
	{
		diff = a[2] - a[4] - a[6];
	}
	text_sl("Difference = ");
	numout(diff);
	return diff;
}

float mult_columns(float a[9] , int c)
{
	float prod = 0;
	if (c == 1)
	{
		prod = a[0] * a[3] * a[6];
	}
	if (c == 2)
	{
		prod = a[1] * a[4] * a[7];
	}
	if (c == 3)
	{
		prod = a[2] * a[5] * a[8];
	}
	text_sl("Product = ");
	numout(prod);
	return prod;
}

float mult_rows(float a[9] , int r)
{
	float prod = 0;
	if (r == 1)
	{
		prod = a[0] * a[1] * a[2];
	}
	if (r == 2)
	{
		prod = a[3] * a[4] * a[5];
	}
	if (r == 3)
	{
		prod = a[6] * a[7] * a[8];
	}
	text_sl("Product = ");
	numout(prod);
	return prod;
}

float mult_diagonals(float a[9] , int d)
{
	float prod = 0;
	if (d == 1) 
	{
		prod = a[0] * a[4] * a[8];
	}
	if (d == 2)
	{
		prod = a[2] * a[4] * a[6];
	}
	text_sl("Product = ");
	numout(prod);
	return prod;
}

float div_columns(float a[9] , int c)
{
	float quot = 0;
	if (c == 1)
	{
		quot = a[0] / a[3] / a[6];
	}
	if (c == 2)
	{
		quot = a[1] / a[4] / a[7];
	}
	if (c == 3)
	{
		quot = a[2] / a[5] / a[8];
	}
	text_sl("Quotient = ");
	numout(quot);
	return quot;
}
float div_rows(float a[9] , int r)
{
	float quot = 0;
	if (r == 1)
	{
		quot = a[0] / a[1] / a[2];
	}
	if (r == 2)
	{
		quot = a[3] / a[4] / a[5];
	}
	if (r == 3)
	{
		quot = a[6] / a[7] / a[8];
	}
	text_sl("Quotient = ");
	numout(quot);
	return quot;
}
float div_diagonals(float a[9] , int d)
{
	float quot = 0;
	if (d == 1) 
	{
		quot = a[0] / a[4] / a[8];
	}
	if (d == 2)
	{
		quot = a[2] / a[4] / a[6];
	}
	text_sl("Quotient = ");
	numout(quot);
	return quot;
	
}

float numtmatrix(float a[9] , int r)
{
	float c[9];
	c[0] = a[0] * r;
	c[1] = a[1] * r;
	c[2] = a[2] * r;
	c[3] = a[3] * r;
	c[4] = a[4] * r;
	c[5] = a[5] * r;
	c[6] = a[6] * r;
	c[7] = a[7] * r;
	c[8] = a[8] * r;
	text("Result = ");
	board(c);
	return c[9];
}

float matrix_add(float A[9] , float B[9])
{
	float C[9];
	C[0] = A[0] + B[0];
	C[1] = A[1] + B[1];
	C[2] = A[2] + B[2];
	C[3] = A[3] + B[3];
	C[4] = A[4] + B[4];
	C[5] = A[5] + B[5];
	C[6] = A[6] + B[6];
	C[7] = A[7] + B[7];
	C[8] = A[8] + B[8];
	text("Result = ");
	board(C);
	return C[9];
}

float matrix_sub(float A[9] , float B[9])
{
	float C[9];
	C[0] = A[0] - B[0];
	C[1] = A[1] - B[1];
	C[2] = A[2] - B[2];
	C[3] = A[3] - B[3];
	C[4] = A[4] - B[4];
	C[5] = A[5] - B[5];
	C[6] = A[6] - B[6];
	C[7] = A[7] - B[7];
	C[8] = A[8] - B[8];
	text("Result = ");
	board(C);
	return C[9];
}

float matrix_mult(float A[9] , float B[9])
{
	float C[9];
	C[0] = ((A[8] * B[0]) + (A[7] * B[0]) + (A[6] * B[0]));
	C[1] = ((A[5] * B[1]) + (A[4] * B[1]) + (A[3] * B[1]));
	C[2] = ((A[2] * B[2]) + (A[1] * B[2]) + (A[0] * B[2]));
	C[3] = ((A[8] * B[3]) + (A[7] * B[3]) + (A[6] * B[3]));
	C[4] = ((A[5] * B[4]) + (A[4] * B[4]) + (A[3] * B[4]));
	C[5] = ((A[2] * B[5]) + (A[1] * B[5]) + (A[0] * B[5]));
	C[6] = ((A[8] * B[6]) + (A[7] * B[6]) + (A[6] * B[6]));
	C[7] = ((A[5] * B[7]) + (A[4] * B[7]) + (A[3] * B[7]));
	C[8] = ((A[2] * B[8]) + (A[1] * B[8]) + (A[0] * B[8]));
	text("Result =");
	board(C);
	return C[9];
}

string matrixChooseS(string whichMatrix)
{
	int n = 0;
	string choose[10] = {"a" , "b" , "c", "d" , "e", "f", "g", "h", "i", "j"};
	int matrixChosen = 0;
	while (matrixChosen == 0)
	{
		while (choose[n] != whichMatrix)
		{
			if (choose[n] == whichMatrix) 
			{
				break;
				break;
			}
			text("Not it");
			n = n + 1;
		}
		matrixChosen = 1;
		
	}
	text("Done");
	return choose[n];
}

float matrixChooseF(float whichMatrix)
{
	int n = 0;
	float choose[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int matrixChosen = 0;
	while (matrixChosen == 0)
	{
		while (choose[n] != whichMatrix)
		{
			if (choose[n] == whichMatrix) 
			{
				break;
				break;
			}
			text("Not it");
			n = n + 1;
		}
		matrixChosen = 1;
		
	}
	text("Done");
	return choose[n];
}

float matrixChoose9(int whichMatrix, MATRICIES)
{
	if (whichMatrix == 0)
	{
		return a[9];
	}
	if (whichMatrix == 1)
	{
		return b[9];
	}
	if (whichMatrix == 2)
	{
		return c[9];
	}
	if (whichMatrix == 3)
	{
		return d[9];
	}
	if (whichMatrix == 4)
	{
		return e[9];
	}
	if (whichMatrix == 5)
	{
		return f[9];
	}
	if (whichMatrix == 6)
	{
		return g[9];
	}
	if (whichMatrix == 7)
	{
		return h[9];
	}
	if (whichMatrix == 8)
	{
		return i[9];
	}
	if (whichMatrix == 9)
	{
		return j[9];
	}
	if (whichMatrix > 9)
	{
		return 0;
	}
}

