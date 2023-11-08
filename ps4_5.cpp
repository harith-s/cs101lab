#include <simplecpp>
main_program {
	float x, y, r, x2;
	initCanvas("reflecting surface", 800, 800);
	cout << "enter x, y, r: "; cin >> x >> y >> r; 
	Circle sp(x, y, r);
	cout << "enter the x-coords of point source"; cin >> x2;
	float theta = -60;
	while (theta <=60) {
		float xpoc = x + r*cosine(theta/2), ypoc = y - r*sine(theta/2);
		Line li(x2, y, xpoc, ypoc);   
		li.imprint();
		float xf = x + abs((x2-x))*cosine(theta), yf = y - abs((x2-x))*sine(theta);
		Line lr(xpoc, ypoc, xf, yf);
		lr.imprint();
		theta = theta + 10;
		
	}
	wait(5);
}


