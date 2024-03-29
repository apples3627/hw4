#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

const float PI = 3.1415926;

int main() {
    float A=10,t, f0 = 440, T = (1 / f0) * 44, dt = (1 / f0) / 100;

    ofstream hwFile;
    hwFile.open("data.txt");

    if (!hwFile) {
        cout << "can't open" << endl;
        return 1;
    }

    for (t = 0.0; t < T; t += dt) {
        hwFile << t << "\t"; //line 1
        hwFile << A*10 * cos(20 * PI * t) * cos(220 * PI * t) << "\t"; // line 2
        hwFile << A*6 * sin(240 * PI * t) + A*8 * sin(220 * PI * t) << "\t"; //line 3
        hwFile << endl;
    }
    hwFile.close(); 
    return 0;
}