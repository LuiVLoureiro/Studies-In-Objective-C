// Write a C program that reads the lengths of three sides of a triangle
// (entered by the user) and determines if they can form a valid triangle.
// Equilateral (all sides are equal)
// Isosceles (two sides are equal)
// Scalene (all sides are different)

// Additionally, check if the triangle is a right triangle.
// Use the Pythagorean theorem (a² + b² = c²)

// Use decision structures such as if, else if, and else.
// The sum of any two sides must be greater than the third side.
// If the triangle is valid, classify it.
// Check if the triangle is a right triangle.

// Use conditions to check if the sides can form a triangle.
// Use nested decision structures to classify the triangle type.
// To check for a right triangle, determine the longest side
// and apply the Pythagorean theorem.


#include <stdio.h>

int main(){

	int a, b, c;
	setbuf(stdout, NULL);
	printf("Type the 'A', 'B' and 'C' side of triangle -> \n");
	scanf("%d %d %d", &a, &b, &c);

	// Check if this sides forms a valid triangle

	if ( ( a + b ) > c && ( a + c ) > b && ( b + c ) > a){
		printf("Is a Valid Triangle\n");
		// Type of Triangle

		if(a == b && b == c){
			printf("This is a Equilateral Triangle\n\n");
		} else if( a == b && c != b && c != a){
			printf("This is a Isosceles Triangle\n");
		} else if( a != b && a != c && b != c){
			printf("This is a Scalene Triangle\n");
		} else {
			printf("Don´t recognize this type of Triangle\n");
		}

		// Check the Triangle is a Right Triangle (Triangulo Retangulo)

		if (a > b && a > c){
			// Side "a" is an Hypotenuse
			if(((c * c) + (b * b)) == (a * a)){
				printf("This is a Right Triangle");
			}
			else {
				printf("This is not a Right Triangle");
			}
		} else if (b > a && b > c){
			// Side "b" is an Hypotenuse
			if (((a * a) + (c * c)) == (b * b)){
				printf("This is a Right Triangle");
			} else {
				printf("This is not a Right Triangle");
			}
		} else if ( c > a && c > b ){
			if (((a * a) + (b * b)) == (c * c)) {
				printf("This is a Right Triangle");
			} else {
				printf("This is not a Right Triangle");
			}
		}

	} else {
		printf("Please Try Again, This is not a Valid Triangle");
	}


	return 0;

}
