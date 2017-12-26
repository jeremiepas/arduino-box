#include <iostream>
#include <cstdio>
#include <time.h>  // class needs this inclusion
#include <string>
#include <unistd.h>
#include <termios.h>
//////////////////////////////////////////
// class declaration:


class timer {
  public:
    timer();
    unsigned long  getTime();
  private:
    unsigned long timepasse1;
    unsigned long timepasse2;
};


//////////////////////////////////////////
// class implementation:


timer::timer() {

  timepasse1 = 200000;
  timepasse2 = (unsigned long) clock();

}



unsigned long timer::getTime() {

      timepasse2 = timepasse2 - (((unsigned long) clock() - timepasse2) / CLOCKS_PER_SEC);
      timepasse1 = timepasse1 - timepasse2;
      timepasse2 = (unsigned long) clock();
      return timepasse1;
}



char getch() {
    char buf = 0;
    struct termios old = { 0 };
    fflush(stdout);
    if (tcgetattr(0, &old) < 0) perror("tcsetattr()");
    old.c_lflag    &= ~ICANON;   // local modes = Non Canonical mode
    old.c_lflag    &= ~ECHO;     // local modes = Disable echo.
    old.c_cc[VMIN]  = 1;         // control chars (MIN value) = 1
    old.c_cc[VTIME] = 0;         // control chars (TIME value) = 0 (No time)
    if (tcsetattr(0, TCSANOW, &old) < 0) perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0) perror("read()");
    old.c_lflag    |= ICANON;    // local modes = Canonical mode
    old.c_lflag    |= ECHO;      // local modes = Enable echo.
    if (tcsetattr(0, TCSADRAIN, &old) < 0) perror ("tcsetattr ~ICANON");
    return buf;
 }


int main() {
	bool quit = false;
	char choice;
	timer t;
	while(! quit) {
		std::cout << " s   start/stop " << std::endl;
		std::cout << " r   reset" << std::endl;
		std::cout << " v   view time" << std::endl;
		std::cout << " q   quit" << std::endl;
		std::cout << std::endl;
		choice = getch();
		switch(choice) {
			case 's':
				if(t.isRunning()) {
					t.stop();
					std::cout << "stopped" << std::endl;
				}
				else {
					t.start();
					std::cout << "started" << std::endl;
				}
				break;
			case 'r':
				t.reset();
				std::cout << "resetted" << std::endl;
				break;
			case 'v':
				std::cout << "time = " << t.getTime() << " ms" << std::endl;
				break;
			case 'q':
				quit = true;
				break;
		}
		std::cout << "------------------------------" << std::endl;
	}
}





//
// #include <iostream>
// #include <time.h>
// #include "Tictac.h"
// /*
// * class time end
// */
// int main() {
//     Tictac tictac();
//     tictac.start();
//      return 0;
// }
