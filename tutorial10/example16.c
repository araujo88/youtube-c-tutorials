#include <stdio.h>

typedef struct _point {
	float x;
	float y;
} point;

typedef struct _triangle {
	point a;
	point b;
	point c;
} triangle;

int main(void)
{
	point *p1;
	point p2;

	p1 = &p2;
	p2.x = 1.;
	p2.y = 2.;

	printf("p1->x = %f, p1->y = %f\n", p1->x, p1->y);

	triangle t;

	t.a.x = 0.;
	t.a.y = 0.;
	t.b.x = 1.;
	t.b.y = 1.;
	t.c.x = 3.;
	t.c.y = 0.;

	printf("Coordinates for A - x: %f, y: %f\n", t.a.x, t.a.y);

	return 0;
}
