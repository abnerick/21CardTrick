21 Card Trick
========================
This is a project written in C (gcc Linux) of the 21 Card Trick, you can learn about it in [wiki-how](http://www.wikihow.com/Do-a-21-Card-Card-Trick).

> This code does the trick! ;)

Compiling
=========
There is three files to compile executing  
     gcc -o trick Trick.h Trick.c main.c

Usage
=========
Just start the program   
      ./trick

Example
=========
Check this example where I choose the K♣
<img src="/21cardtrick.png">

Documentation
==============
Those methods are the heart of the program

*Layout(int * v, int n)*  
Lay out the cards, three across and seven down.

*Place(int * v, int n, int c)*  
Place the group selected in between the other two groups of cards
 
Tutorial 
==============
I write a post about this project in my [blog](http://abnerick.wordpress.com/2014/03/01/21-card-trick-project-on-github/)

Author
=========
Abner Díaz  [@abnerick](https://twitter.com/abnerick "abnerick")

License
=========
This project in under terms of the MIT License
