# Linux_Joystick

This is a simple C++ class dedicated to work with Linux OS.
It's useful if you want to pilot a camera, or playing with some graphics and interract with tracking camera.

# Software usage

Just add the headers, the path of your joystick and the full scale and midpoint values like this:

```
#include <iostream>
#include "joystick.h"

#define path "/dev/input/js0"
#define sigma 65534
#define value 32767
```
Once it's done, just call the class. Straightforward !

```
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
```
Enjoy !


