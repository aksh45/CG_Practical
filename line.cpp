// C++ Implementation for drawing line 
#include <graphics.h> 
#include<iostream>
using namespace std;
// driver code 
int main() 
{ 
	// gm is Graphics mode which is a computer display 
	// mode that generates image using pixels. 
	// DETECT is a macro defined in "graphics.h" header file 
	int gd = DETECT, gm; 


	initgraph(&gd, &gm, NULL); 

	line(150, 150, 450, 150); 
 	circle(350, 350, 50); 
	int in = 0;

   	 while (in == 0) {
        	cin>>in;
    	}

 

	// closegraph function closes the graphics 
	// mode and deallocates all memory allocated 
	// by graphics system . 
	closegraph(); 
} 

