#include <simplecpp>
int main() {
	initCanvas("hi",800,800);
	Circle c(400,400,100);
	c.setFill(true);
//	closeCanvas();
	for (int i = 220; i < 256; i+=10){
		for (int j = 220; j<256; j+=10) {
			for (int k = 220; k < 256; k+=10) {
				c.setColor(COLOR(i,j,k));
				c.setFill(true);
				wait(0.1);
				//wait(0.1);
			}
		}
	}
}

