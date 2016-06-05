#include "RtMidi.h"
#include <iostream>
using namespace std;

/*
RtMidi
	1)UsbMidi -> properties -> Linker -> General -> Additional Dependencies Directory:
	Type a path to a lib directory that contains rtmidid.lib file
	2)UsbMidi -> properties -> Linker -> Input -> Additional Dependencies:
	Type:
		rtmidid.lib
		odbc32.lib
		odbccp32.lib
		winmm.lib

	3)UsbMidi -> properties -> C/C++ -> General -> Additional Includes Directory:
	Type a path to a directory with RtMidi.h file
*/
int main()
{
	RtMidiIn *midiin = 0;
	// RtMidiIn constructor
	try {
		midiin = new RtMidiIn();
	}
	catch (RtMidiError &error) {
		// Handle the exception here
		error.printMessage();
	}
	// Clean up
	delete midiin;
	int a;
	cin >> a;
}