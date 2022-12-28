#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _point
{
	float x;
	float y;
} point;

float distance(point p1, point p2)
{
	return sqrt(pow((p2.y-p1.y),2)+pow((p2.x-p1.x), 2));
}

void absolute_value(point *p)
{
	if (p->x < 0)
		p->x = -p->x;
	if (p->y < 0)
		p->y = -p->y;
}

void hello()
{
	printf("Hello!!!!\n");
}

int main(void)
{
	point p1, p2, p3;

	hello();
	hello();
	hello();

	p1.x = 0.0;
	p1.y = 0.0;

	p2.x = 1.0;
	p2.y = 1.0;

	p3.x = -3.0;
	p3.y = 2.0;

	printf("The distance between the two points is: %f\n", distance(p1, p2));
	absolute_value(&p3);
	printf("The abs value of p3 is: %f (x), %f (y)\n", p3.x, p3.y);

	return 0;
}
