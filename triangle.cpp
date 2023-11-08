#include <simplecpp>


main_program {
	float a;
	float b;
	float c;
	float angle1;
	float angle2;

	cout << "enter side 1:";
	cin >> a;
	cout <<"enter side 2:";
	cin >> b;
	cout << "enter side 3:";
	cin >> c;
	angle1=(acos((a*a+b*b-c*c)/(2*a*b)))*180/3.14159; //finding angles
	angle2=(acos((b*b+c*c-a*a)/(2*b*c)))*180/3.14159;
	turtleSim();
	forward(a);
	left(180-angle1);
	forward(b);
	left(180-angle2);
	forward(c);
	wait(5);

}

