#include <simplecpp>
main_program {
	initCanvas("Spiral", 1000, 1000);
	Turtle t1;
	float i = 0.01;
	/*repeat(10) {
		repeat(100){
			t1.forward(i);                 this logic uses semi circles of increasing radius
			t1.left(180.0/100.0); }
		i = i + 0.5;
			
	
	}*/
	repeat(500){
      	 	t1.forward(i); // this logic uses the point that if I turn by some angle but move by a greater distance every single time, the 
			       // radius of curvature increases
                t1.left(3); 
                i = i + 0.05;}
	wait(5);
}
