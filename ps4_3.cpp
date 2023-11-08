#include <simplecpp>
main_program {
	double scaler, dist;
        cout << "enter scaler :" ;
        cin >> scaler;
	initCanvas("projectile", 800, 800);
	int c1, c2; int x1, y1, x2, y2 = 0;;
	c1 = getClick();
	x1 = c1/65536 ; y1 = c1 % 65536;
	Circle proj(x1, y1, 10);
	proj.penDown();
	c2 = getClick();
	x2 = c2/65536 ; y2 = c2 % 65536;
	dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2)); //distance eqn
	float angle, v, t;				// v is velocity and t is time
	angle = atan(float((y1-y2))/(x2-x1))*(180/PI);   // y1-y2 because the scale is reversed
	v = (dist/25)*scaler; 
	float ux, uy;
	ux = v * cosine(angle);
	uy = v * sine(angle);
	t = 2*uy/10.0; 					//total time for the projectile
	float tact = 0;
	while (tact <= t) {
		proj.forward(ux * 0.01);		//moves in small time increments
		proj.left(90);
		proj.forward(uy * 0.01);
		proj.right(90);
		uy = uy - 0.1;
		tact = tact + 0.01;

	}
	wait(5);
}

