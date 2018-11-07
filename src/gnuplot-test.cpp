#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("src/test.gp");

    out << "set xlabel 'X'" << endl;
    out << "set ylabel 'Y'" << endl;
    out << "set key spacing 1.5" << endl;
    out << "set xrange [-20.0:-3.1]" << endl;
    out << "set key left" << endl;
    out << "plot(sin(2*x)/(x*x))w li lw 2 lt rgb 'red' ti 'sin(2x)/(x^2)'" << endl;
    out << "pause -1" << endl;
    system("gnuplot src/test.gp");

    return 0;
}