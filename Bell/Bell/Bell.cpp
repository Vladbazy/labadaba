#include "Bell.h";

void Bell::sound() {
    if (isCalling) {
        cout << "ding" << endl;
    }
    else {
        cout << "dong" << endl;
    }

    isCalling = !isCalling;
}