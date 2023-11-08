#include <simplecpp>
main_program {
        initCanvas("Sine graph",750, 750);
        Line xaxis(50, 375, 750 , 375);
        Line yaxis(50, 0, 50, 750);
        Circle dot(50, 375, 10);
        dot.penDown();
        repeat(8) {
                dot.forward(80);
                dot.left(90);
                dot.forward(5);
                dot.forward(-5);
                dot.right(90);
        }
        dot.moveTo(50,375);
        dot.left(90);             //drawing axes x = 80 corresponds to PI/2 and y = 80 corresponds to 0.25
        repeat(4) {
                dot.forward(80);
                dot.left(90);
                dot.forward(5);
                dot.forward(-5);
                dot.right(90);
        }
        dot.moveTo(50,375);
        dot.right(180);
        repeat(4) {
                dot.forward(80);
                dot.left(90);
                dot.forward(-5);
                dot.forward(5);
                dot.right(90);


        }
        dot.moveTo(50,375);   //resetting position and orientation
        dot.left(90);
        float x = 1;
        dot.forward(1);
        while ( x <= 640 ) {

                float m;
                m = atan(320*(sine(90*x/80) - sine(90*(x-1)/80)))*(180/PI); //the dot is drawing straight lines between two consecutive points
                dot.left(m);
                dot.forward(1/cosine(m));
                dot.right(m);
                x = x + 1;


                }

wait(5);
}
