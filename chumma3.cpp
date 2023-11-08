#include<simplecpp>
main_program{
        initCanvas("Sin graph",3000,3000);
        Line xaxis(0,500,3000,500);
        Line yaxis(500,0,500,3000);
        float x1=0,x2=0.01;
        int x=1;
        while ( x<=1256 ) {
                Line l(500+100*x1,500-100*sin(x1),500+100*x2,500-100*sin(x2));
                l.imprint();
                x1+=0.01;
                x2+=0.01;
                x+=1;
        }
	wait(10);
}
