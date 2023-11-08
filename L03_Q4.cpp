#include <simplecpp>
main_program {
        initCanvas("Chess board", 800, 800);
        int i = 1, j = 1;
        repeat(8) {
                repeat(8) {
                        Rectangle temp(40 + 80*i ,40 + 80*j , 80, 80);
                        temp.imprint();
                        if ((i + j) % 2 == 0) {
                                temp.setColor(COLOR("blue")); // first iterates through the horizontal rows and then goes to the next layer
                                temp.setFill(COLOR("blue"));    // the i + j makes sure that no adjacent square is of the same color
                                temp.imprint();
                                }
                        else { temp.setColor(COLOR("red")); temp.setFill(COLOR("red")); temp.imprint();}

                        i = i + 1;

                }
                i = 1;
                j = j + 1;
        }
        wait(7);
}
