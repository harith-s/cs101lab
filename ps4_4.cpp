#include <simplecpp>
main_program {
 	int c1, c2, c3; int x1, y1, x2, y2, x3, y3 = 0;
	float x, y, radius;
	initCanvas("Circle", 800, 800);
	c1 = getClick();
       	x1 = c1/65536 ; y1 = c1 % 65536;
	Circle p1(x1, y1, 5);
	c2 = getClick();
	x2 = c2/65536 ; y2 = c2 % 65536;
	Circle  p2(x2, y2, 5);
	c3 = getClick();
        x3 = c3/65536 ; y3 = c3 % 65536;
	Circle p3(x3, y3, 5);
	x = float(((x1*x1 - x3*x3 + y1*y1 - y3*y3)*(2*(y1-y2)) -(x1*x1 - x2*x2 + y1*y1 - y2*y2)*(2*(y1-y3))))/(4*(((x2-x1)*(y1-y3))-((x3-x1)*(y1-y2))));			//formula for x which is the center of the circle
	y= float((2*x*(x1-x2) + x2*x2-x1*x1 +  y2*y2 - y1*y1))/(2*(y2-y1)); //formula for the y coordinate of the circle

	radius = sqrt(pow((x-x1),2) + pow((y - y1), 2));		//formula for radius
	Circle circle(x, y, radius);
	wait(5);
}
