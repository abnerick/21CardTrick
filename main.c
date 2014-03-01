/*
21 Card Trick v1.0.0
(c) 2014 Abner Diaz. http://abnerick.wordpress.com
License: MIT
*/


#include <stdio.h>
#include "Trick.h"
#define n 21 

int main()
{	
        int i=0, opt= 0, a[n]= {0};
	
	Copyright();
	Deck();
	Shuffle(a, n);
	Start();

	while(i < 3){	
		Layout(a, n);
		Print(a, n);
 		opt = Select();
		//stop program if there's a error
		if(opt == -1) 
			return -1;
		Place(a, n, opt);		
		i++;
		
	}

	Chosen(a, n);

	return 0;
} 
