/*
21 Card Trick v1.0.0
(c) 2014 Abner Diaz. http://abnerick.wordpress.com
License: MIT
*/


#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <time.h> 

#include "Trick.h"

#define size 52 


struct card deck[size];

void Deck(){
	
	int i=0, j=0, c= 0;
	char *suit[4] = {"♠","♥","♣","♦"};
	char *rank[13] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};

	for(i = 0; i < 4; i++){
		for(j = 0; j < 13; j++){
			
			deck[c].suit = i;
			deck[c].rank = j;

			char * s= NULL;
			asprintf(&s, "%s%s", rank[j], suit[i]);

			deck[c].face = s;
			c++;
		}
	}
}

void Chosen(int * v, int n){
	printf("\n Your card is %s \n", deck[v[10]].face);
}

void Copyright(){

	printf("21 Card Trick v1.0.0 \n");
	printf("(c)2014 Abner Diaz. http://abnerick.wordpress.com \n");
	printf("License: MIT \n");
}

void Layout(int *v, int n){
	int i=0, c=0, a[n];

	memcpy(a, v, sizeof(a));

	for(i = 0 ;i < 7 ; i++){
		v[i]= a[c];
		v[i+7] = a[c+1];
		v[i+14] = a[c+2];
		c = c + 3;
	}
}


void Print(int v[], int n){ 
  int i=0;

  printf("\n [1] \t [2] \t [3] \n");
  for(i=0; i< 7; i++)
      printf(" %s \t %s \t %s \n", deck[v[i]].face, deck[v[i+7]].face, deck[v[i+14]].face);
}

void Shuffle(int * v, int n){
  int i=0, r, c, selected[52]={0};

  srand(time(NULL));
  for(i=0; i< n; i++){

      do{
        r = rand() % 52;
      }while(selected[r]);
  
      selected[r] = 1;
      v[i]= r;
  }
}

void Place(int v[], int n, int c){
	int i=0, aux;

	if(c == 0 || c == 2){
		for(i=0; i< 7; i++){
			aux = v[i + 7*c];
			v[i + 7*c] = v[7+i];
			v[7+i] = aux;
		}
	}
}

void Start(){
	printf("\n Please choose a card  \n");
}

int Select(){
	int opt = 1;
	int bytes_read;
	int nbytes = 100;
	char *str;

	printf ("\n Please enter the column where your card is in: ");
	str = (char *) malloc (nbytes + 1);
	bytes_read = getline (&str, &nbytes, stdin);

	if (bytes_read == -1)
	{
		printf ("Error: Can't read option \n");
		return bytes_read;
	}
	else
	{
		//just a dirty cast
		int opt = str[0] - 48;
		if(opt >=1 && opt <4) 			
			return opt-1;		
		else{
			//just another c exception    
			printf ("Error: Invalid option \n");
			return -1; 
		}
	}
}


