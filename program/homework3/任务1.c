#include<stdio.h>
#include<math.h>
#include<string.h>

float calculate_Area( float a)
{
	float area=pow(a,2);
	return area;
}

float calculate_Perimeter(float a)
{
	float perimeter=4*a;
	return perimeter;
}

int main()
{
	float a;
	scanf("%f",&a);
	printf("Area=%.2f\nPerimeter=%.2f",calculate_Area(a),calculate_Perimeter(a));
	return 0;
}


