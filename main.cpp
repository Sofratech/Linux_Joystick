#include <iostream>
#include "joystick.h"

#define path "/dev/input/js0"
#define sigma 65534
#define value 32767

using namespace std;


int main ()
{
	static int x,y;

	bool select = false;

	Joystick joy(path);

    while(true)
    {
    	x = joy.getAxis(0);
    	y = joy.getAxis(1);

    	select = joy.getButton(0);

    	cout << x << " " << y << " " << select << endl;
    }
    joy.stop();
    return 0;
}
