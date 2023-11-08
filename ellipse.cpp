#include <simplecpp>
main_program {
	float a, e;
	cin >> a >> e;
	initCanvas("Hi", 800, 800);
	float b = sqrt(1-(e*e))*a;
	Turtle t1;
	float angle = 1;
	wait(1);
	t1.move(a*20, 0);
	t1.left(90);
	t1.penDown();
	int t = 1;
	cout << "reached here";
	repeat(4) {
		while (angle <=360) {
			t1.forward(20*(b*sine(angle) - b*sine(angle-1)));
			t1.right(90);
			t1.forward(20*(a*cosine(angle) - a*cosine(angle-1)));
			t1.left(90);
			angle = angle + 1;
			cout << "got inside the loop";
		}
		t1.penUp();
		t1.right(90);
		t1.moveTo(400, 400);
		t1.right(90);
		if (t == 1) {
			t1.right(60);
			t = 2;
		}
		else {
			t1.right(30);
		}
		t1.forward(a*20);
		angle = 1;
		t1.left(90);
		t1.penDown();
	}

	wait(10);

}
