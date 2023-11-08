#include <simplecpp>
using namespace std;

int main() {
    initCanvas("Square Rolling", 1000, 1000);
    float omega = PI/4;
    float dt = 0.0005;
    Turtle ground;
    ground.penUp();
    ground.moveTo(0, 800);
    ground.penDown();
    ground.moveTo(1000, 800);
    
    Rectangle r(100, 700, 200, 200);
    // r.imprint();
    // r.rotate(PI/4);
    // r.imprint();

    r.penUp();

    float theta = 45;

    for(int t=0; t<10; t+=dt) {
        theta -= omega*dt*180/PI;
        if (theta < -45) {
            theta = 45;
            r.moveTo(r.getX(), 700);
        }
        // cout << theta << endl;
        // cout << 100*sqrt(2)*omega*dt*cosine(theta) << ' ' << 1-100*sqrt(2)*omega*dt*sine(theta) << endl;
        r.move(100*sqrt(2)*omega*dt*cosine(theta), -100*sqrt(2)*omega*dt*sine(theta));
        r.rotate(omega*dt);
        wait(dt);
        if (r.getX() > 900) {
            break;
        }
    }
    wait(5);
}

