/*
21 Card Trick v1.0.0
(c) 2014 Abner Diaz. http://abnerick.wordpress.com
License: MIT
*/

struct card{
	unsigned int suit : 2;
        unsigned int rank : 4;
	char * face;
};

/* 
 * Get the selected card
 */
void Chosen(int * v, int n);
/* 
 * Print copyright
 */
void Copyright();
/* 
 * Create the card deck
 */
void Deck();
/* 
 * Lay out the cards, three across and seven down.
 */
void Layout(int *v, int n);
/* 
 * Place the group selected in between the other two groups of cards
 */
void Place(int * v, int n, int c);
/* 
 * Print the card deck
 */
void Print(int * v, int n);
/* 
 * Shuffle the card deck
 */
void Shuffle(int * v, int n);
/* 
 * Game instructions
 */
void Start();
/* 
 * Get colum where is the card selected
 */
int Select();
