#include "mygraphics.h"
#include <cmath>

using namespace std;

//Function to return the y value of sin(x)
double y(int x){
	return 10*log(x)+200;			//Change sin(x) to log(x) to get logarithmic curve. Multiply by 10 to make it taller, add 200 so it starts below the 0 axis of the screen
}

int main ()
{
	double x;

	//Loop to draw our sin
	for (x=1; x<=100; x++){
		drawPixel(x*10, y(x));					// !!Change x=0 to x=1 for logarithmic curve!! Multiply by 10 to make it wider

		drawLine(x*10, y(x), (x+1)*10, y(x+1))	//Optimisation to draw line between each point and the next one
	}


	//-------------------------------------
	updateGraphics();
	cout << "Press any key to continue...";
	cin.get();
	return 0;
}