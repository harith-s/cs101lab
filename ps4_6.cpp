#include <simplecpp>
main_program {
        float x, y, r, x2;
        initCanvas("reflecting surface", 1000, 1000);
        cout << "enter x, y, r: "; cin >> x >> y >> r;
        Circle sp(x, y, r);
        cout << "enter the x-coords of point source"; cin >> x2;
        float theta = -60;
        while (theta <=60) {
                float xpoc = x + r*cosine(theta/2), ypoc = y - r*sine(theta/2);
                Line li(x2, y, xpoc, ypoc);
                li.imprint();
                float xf = x + abs((x-x2))*cosine(theta), yf = y - abs((x-x2))*sine(theta);
                Line lr(xpoc, ypoc, xf, yf);
                lr.imprint();
                theta = theta + 10;
		Turtle t1; 
		t1.penUp();
		t1.moveTo(xpoc, ypoc);
		float angle = (atan((yf-ypoc)/(xf-xpoc))*180)/PI;
		t1.left((180 - angle));
		t1.penDown();
		repeat(50) { t1.forward(1); t1.penUp(); t1.forward(1); t1.penDown();}

        }

        wait(10);
}
