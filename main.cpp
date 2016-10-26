#include "mygraphics.h"
#include <cmath>

using namespace std;


int main ()
{
	int sides=5; 					//Polygon sides. Change sides to 3 for a triangle, 4 for a square, 6 for a hexagon or to whatever for a whatever-a-gon :)

	int r=200;						//Polygon radius

	int x[sides-1], y[sides-1];		//Arrays to store polygon point coordinates

	int n;							//Array pointer

	double pi=3.14159265;			//Pie is a baked dish, made of a pastry dough crust that covers a filling of various sweet or savoury ingredients :P

	//Loop to calculate and store polgon point coordinates
	for (n=0; n<sides; n++){
		x[n] = r * cos(2*pi*n/sides) + 200;
		y[n] = r * sin(2*pi*n/sides) + 200;
	}

	//Loop to draw lines between one point and the next one in our arrays
	for(n=0; n<sides-1; n++){
		drawLine(x[n],y[n],x[n+1],y[n+1]);
	}

	//Draw line to close the polygon
	drawLine (x[sides-1],y[sides-1],x[0],y[0]);


	//-------------------------------------
	updateGraphics();
	cout << "Press any key to continue...";
	cin.get();
	return 0;
}