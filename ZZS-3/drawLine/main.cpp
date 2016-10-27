#include "mygraphics.h"
#include <cmath>

using namespace std;

double drawLineZeus(double x0, double y0, double x1, double y1){

	double xmod, ymod, len;

	//xmod and ymod are the pixel modifyers, adding small values to the pixel counters to make the line move from x0 to x1 and y0 to y1
	//Dividing by 100 to smooth out. Leave undivided and you'll get more pixelated lines
	xmod=abs(y0-y1)/abs(x0-x1)/100;
	ymod=abs(x0-x1)/abs(y0-y1)/100;

	//Length of the line by pythagorian theorem for the difference between the begining and end coordinates
	len=sqrt(abs(x0-x1)*abs(y0-y1));

	//Pixel drawer
	while (x0<=x1 && y0<=y1){
		drawPixel(x0, y0);
		y0+=ymod;
		x0+=xmod;
	}

	return len;
}

int main ()
{
	cout << "The length of the line is: " << drawLineZeus(137, 211, 550, 400) << " pixels." << endl;;

	//-------------------------------------
	updateGraphics();
	cout << "Press any key to continue...";
	cin.get();
	return 0;
}
