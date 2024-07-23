//============================================================================
// Name        : game.cpp
// Author      : Mahnoor Akhtar
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of LUDO...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"

#include <iostream>
#include<string>
#include<cmath> 
#include<cstdlib>
#include<ctime>
using namespace std;

void DICE(int x);
int greenscore=0;
int orangescore=0;
int redscore=0;
int bluescore=0;
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
       
}

int randomno()
{srand(time(0));
 int x=rand() % 6 + 1;
 DICE(x);
return x;
}
 

//this function is to move the red token from the rest point
void NewtokenR(int playerno,int Player1[4][2])
{ 

  int PlX=435,PlY=95;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[BLACK]);
  Player1[playerno][0]=PlX;                                                              
  Player1[playerno][1]=PlY;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}
void NewtokenO(int playerno,int Player3[4][2])
{ 

  int PlX=569,PlY=899;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[BLACK]);
  Player3[playerno][0]=PlX;
  Player3[playerno][1]=PlY;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
void NewtokenG(int playerno,int Player4[4][2])
{ 

  int PlX=904,PlY=430;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[BLACK]);
  Player4[playerno][0]=PlX;
  Player4[playerno][1]=PlY;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
  cout<<"1111"<<endl;
}
void NewtokenB(int playerno,int Player2[4][2])
{ 

  int PlX=100,PlY=564;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLACK]);
  Player2[playerno][0]=PlX;
  Player2[playerno][1]=PlY;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//******************RED PLAYER***********
//this function is to move the red token to upward
void moveupR(int playerno,int Player1[4][2])
{ 
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
  Player1[playerno][1]+=67;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}



//this function is to move the red token to left
void moveleftR(int playerno,int Player1[4][2])
{
 
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
  Player1[playerno][0]-=67;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//this function is to move the red token to right
void moverightR(int playerno,int Player1[4][2])
{
 
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
  Player1[playerno][0]+=67;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//this function is to move the red token to downward
void movedownR(int playerno,int Player1[4][2])
{ 
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
  Player1[playerno][1]-=67;
  DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
  cout<<Player1[playerno][1]<<endl;
}

//this function is to change its position from upward to left
void cornerleftR(int playerno,int Player1[4][2])
{
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
 Player1[playerno][0]-=67;
 Player1[playerno][1]+=67;
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//this function is to change the position of token from right to upward
void cornerupR(int playerno,int Player1[4][2])
{
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
 Player1[playerno][0]+=67;
 Player1[playerno][1]+=67;
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//this function is to change the position of token from downward to right
void cornerrightR(int playerno,int Player1[4][2])
{
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
 Player1[playerno][0]+=67;
 Player1[playerno][1]-=67;
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//this function is to change the position of token from left to left to downward 
void cornerdownR(int playerno,int Player1[4][2])
{
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[WHITE]);
 Player1[playerno][0]-=67;
 Player1[playerno][1]-=67;
 DrawCircle(Player1[playerno][0],Player1[playerno][1],25,colors[RED]);
}

//*******************BLUE TOKEN*************

//this function is to move the red token to upward
void moveupB(int playerno,int Player2[4][2])
{ 
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
  Player2[playerno][1]+=67;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to move the red token to left
void moveleftB(int playerno,int Player2[4][2])
{
 
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
  Player2[playerno][0]-=67;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to move the red token to right
void moverightB(int playerno,int Player2[4][2])
{

  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
  Player2[playerno][0]+=67;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to move the red token to downward
void movedownB(int playerno,int Player2[4][2])
{ 
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
  Player2[playerno][1]-=67;
  DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}

//this function is to change its position from upward to left
void cornerleftB(int playerno,int Player2[4][2])
{
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
 Player2[playerno][0]-=67;
 Player2[playerno][1]+=67;
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to change the position of token from right to upward
void cornerupB(int playerno,int Player2[4][2])
{
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
 Player2[playerno][0]+=67;
 Player2[playerno][1]+=67;
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to change the position of token from downward to right
void cornerrightB(int playerno,int Player2[4][2])
{
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
 Player2[playerno][0]+=67;
 Player2[playerno][1]-=67;
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//this function is to change the position of token from left to left to downward
void cornerdownB(int playerno,int Player2[4][2])
{
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[WHITE]);
 Player2[playerno][0]-=67;
 Player2[playerno][1]-=67;
 DrawCircle(Player2[playerno][0],Player2[playerno][1],25,colors[BLUE]);
}
//*******ORANGE TOKEN***********

//this function is to move the red token to upward
void moveupO(int playerno,int Player3[4][2])
{ 
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
  Player3[playerno][1]+=67;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to move the red token to left
void moveleftO(int playerno,int Player3[4][2])
{

  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
  Player3[playerno][0]-=67;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to move the red token to right
void moverightO(int playerno,int Player3[4][2])
{
 
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
  Player3[playerno][0]+=67;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to move the red token to dOwnward
void movedownO(int playerno,int Player3[4][2])
{ 
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
  Player3[playerno][1]-=67;
  DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to change its position from upward to left
void cornerleftO(int playerno,int Player3[4][2])
{
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
 Player3[playerno][0]-=67;
 Player3[playerno][1]+=67;
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to change the position of token from right to upward
void cornerupO(int playerno,int Player3[4][2])
{
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
 Player3[playerno][0]+=67;
 Player3[playerno][1]+=67;
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to change the position of token from downward to right
void cornerrightO(int playerno,int Player3[4][2])
{
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
 Player3[playerno][0]+=67;
 Player3[playerno][1]-=67;
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//this function is to change the position of token from left to left to downward
void cornerdownO(int playerno,int Player3[4][2])
{
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[WHITE]);
 Player3[playerno][0]-=67;
 Player3[playerno][1]-=67;
 DrawCircle(Player3[playerno][0],Player3[playerno][1],25,colors[DARK_ORANGE]);
}
//***********GREEN TOKEN*********

//this function is to move the red token to upward
void moveupG(int playerno,int Player4[4][2])
{ 
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
  Player4[playerno][1]+=67;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to move the red token to left
void moveleftG(int playerno,int Player4[4][2])
{

  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
  Player4[playerno][0]-=67;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to move the red token to right
void moverightG(int playerno,int Player4[4][2])
{
 
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
  Player4[playerno][0]+=67;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to move the red token to dOwnward
void movedownG(int playerno,int Player4[4][2])
{ 
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
  Player4[playerno][1]-=67;
  DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to change its position from upward to left
void cornerleftG(int playerno,int Player4[4][2])
{
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
 Player4[playerno][0]-=67;
 Player4[playerno][1]+=67;
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to change the position of token from right to upward
void cornerupG(int playerno,int Player4[4][2])
{
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
 Player4[playerno][0]+=67;
 Player4[playerno][1]+=67;
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to change the position of token from downward to right
void cornerrightG(int playerno,int Player4[4][2])
{
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
 Player4[playerno][0]+=67;
 Player4[playerno][1]-=67;
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}
//this function is to change the position of token from left to left to downward
void cornerdownG(int playerno,int Player4[4][2])
{
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[WHITE]);
 Player4[playerno][0]-=67;
 Player4[playerno][1]-=67;
 DrawCircle(Player4[playerno][0],Player4[playerno][1],25,colors[GREEN]);
}

//Board *b;
void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
 DrawSquare( 0 , 0 ,1000,colors[BLACK]);
 DrawString( 260, 920, "___ WELCOME TO THE LUDO STAR___ ", colors[WHITE]);

 DrawString( 260, 800, ">> PRESS (m) MENUE", colors[STEEL_BLUE]);

 DrawString( 260, 600, ">> PRESS (h) HIGHSCORE", colors[TOMATO]);

 DrawString( 260, 400, ">> PRESS (g) GAME BOARD", colors[LIME]);

 DrawString( 260, 200, ">> PRESS EXIT TO END GAME", colors[ORANGE]);
 
 
 


glutSwapBuffers(); // do not modify this line..
 }
//_______________________________________________________________________________________
void backspace()
{DrawSquare( 0 , 0 ,1000,colors[BLACK]);
 DrawString( 260, 920, "___ WELCOME TO THE LUDO STAR___ ", colors[WHITE]);

 DrawString( 260, 800, ">> PRESS (m) MENUE", colors[STEEL_BLUE]);

 DrawString( 260, 600, ">> PRESS (h) HIGHSCORE", colors[TOMATO]);

 DrawString( 260, 400, ">> PRESS (g) GAME BOARD", colors[LIME]);

 DrawString( 260, 200, ">> PRESS EXIT TO END GAME", colors[ORANGE]);
}

//_________________________________________________________________________________________
void menue()
{
 DrawSquare( 0 , 0 ,1400,colors[BLACK]);
 DrawString( 400, 860, "HOW MANY PLAYERS WANT TO PLAY", colors[WHITE]);

 DrawString( 400, 700, "PRESS 2 FOR ONLY TWO PLAYER", colors[STEEL_BLUE]);

 DrawString( 400, 500, "PRESS 3 FOR THREE PLAYER", colors[TOMATO]);

 DrawString( 400, 300, "PRESS 4 FOUR PLAYER PLAYER", colors[LIME]);

 DrawString( 400, 160, "PRESS (B) TO RETURN TO MENUE", colors[ORANGE]);
}
//________________________________________________________________________________________________
void highscore()
{
 DrawSquare( 0 , 0 ,1400,colors[BLACK]);
 DrawString( 360, 860, ">>TOP 10 HIGHSCORES<<", colors[PINK]);
 DrawString( 360, 810, "1)AIMA MALIK : 2500", colors[CYAN]);
 DrawString( 360, 760, "2)GOLD SMITH : 2450", colors[CYAN]);
 DrawString( 360, 710, "3)JENNIFER : 2400", colors[CYAN]);
 DrawString( 360, 660, "4)JACKIE CHGAIN : 2390", colors[CYAN]);
 DrawString( 360, 610, "5)MINAL KHAN : 2350", colors[CYAN]);
 DrawString( 360, 560, "6)ARMAGHAN : 2300", colors[CYAN]);
 DrawString( 360, 510, "7)BILAL : 2280", colors[CYAN]);
 DrawString( 360, 460, "8)USWA ASAD : 2250", colors[CYAN]);
 DrawString( 360, 410, "9)ALIA : 2100", colors[CYAN]);
 DrawString( 360, 360, "10)ENGIN ALTAN : 2050", colors[CYAN]);

}
//___________________________________________________________________________________________________
void gameboard()
{
 DrawSquare( 0 , 0 ,1000,colors[WHITE]);//background of ludo canvas

        //to fill the inner small squares to tomato color
	DrawSquare( 400 , 67 ,67,colors[TOMATO]); 
        DrawSquare( 468, 67,67,colors[TOMATO]); 
        DrawSquare( 468 , 134 ,67,colors[TOMATO]); 
        DrawSquare( 468 ,201 ,67,colors[TOMATO]);
        DrawSquare( 468 ,268,67,colors[TOMATO]);
	DrawSquare( 468 , 335 ,67,colors[TOMATO]); 
        DrawSquare( 534 , 134,67,colors[TOMATO]); 

        //to fill the inner small squares to orange color
        DrawSquare( 400 , 805 ,67,colors[ORANGE]); 
        DrawSquare( 468, 872,67,colors[ORANGE]); 
        DrawSquare( 468 , 805 ,67,colors[ORANGE]); 
        DrawSquare( 468 ,738 ,67,colors[ORANGE]);
        DrawSquare( 468 ,672,67,colors[ORANGE]);
	DrawSquare( 468 , 604 ,67,colors[ORANGE]); 
        DrawSquare( 534 , 872,67,colors[ORANGE]);

        //to fill the inner small squares to steel blue colour
        DrawSquare( 134 , 400 ,67,colors[STEEL_BLUE]); 
        DrawSquare( 67, 467,67,colors[STEEL_BLUE]); 
        DrawSquare( 134 , 467 ,67,colors[STEEL_BLUE]); 
        DrawSquare( 201 ,467 ,67,colors[STEEL_BLUE]);
        DrawSquare( 268 ,467,67,colors[STEEL_BLUE]);
	DrawSquare( 335 , 467 ,67,colors[STEEL_BLUE]); 
        DrawSquare( 67 , 534,67,colors[STEEL_BLUE]); 

        //to fill the inner small squares to lime 
        DrawSquare( 872 , 400 ,67,colors[LIME]); 
        DrawSquare( 872, 467,67,colors[LIME]); 
        DrawSquare( 805 , 467 ,67,colors[LIME]); 
        DrawSquare( 738 ,467 ,67,colors[LIME]);
        DrawSquare( 670 ,467,67,colors[LIME]);
	DrawSquare( 604 , 467 ,67,colors[LIME]); 
        DrawSquare( 805 , 534,67,colors[LIME]); 
            
        //these squares are the background of result
        DrawSquare( 1000 ,0,400,colors[CYAN]);
	DrawSquare( 1000 , 300 ,400,colors[CYAN]); 
        DrawSquare( 1000 , 600, 400,colors[CYAN]);
    
        
       

        //these lines are to distinguished the blocks
       DrawLine( 0 , 67 ,  1000 , 67 , 3 , colors[BLACK] );	
       DrawLine( 0 , 134 , 1000 , 134 , 3 , colors[BLACK] );	
       DrawLine( 0 , 201,  1000,  201 , 3 , colors[BLACK] );	
       DrawLine( 0 , 268 , 1000 , 268, 3 , colors[BLACK] );
       DrawLine( 0 , 335 , 1000 , 335 , 3 , colors[BLACK] );	
      	
      
        
       DrawLine( 0 , 400 ,  1000 , 400 , 3 , colors[BLACK] );	
       DrawLine( 0 , 467 ,  1000 , 467 , 3 , colors[BLACK] );	
       DrawLine( 0 , 535,  1000, 535 , 3 , colors[BLACK] );	
       DrawLine( 0 , 603 ,  1000 , 603 , 3 , colors[BLACK] );

       DrawLine( 0 , 670 ,  1000 , 670 , 3 , colors[BLACK] );	
       DrawLine( 0 , 737 ,  1000 , 737 , 3 , colors[BLACK] );	
       DrawLine( 0 , 804,  1000, 804 , 3 , colors[BLACK] );	
       DrawLine( 0 , 871 ,  1000 , 871 , 3 , colors[BLACK] );
       DrawLine( 0 , 938 ,  1000 , 938 , 3 , colors[BLACK] );

       DrawLine( 400 , 1000 ,  400 , 0 , 3 , colors[BLACK] );	
       DrawLine( 467 , 1000 , 467,0 , 3 , colors[BLACK] );	
       DrawLine( 535 , 1000,   535 ,0, 3,colors[BLACK] );	
       DrawLine( 603 , 1000 ,  603 , 0 , 3 , colors[BLACK] );

       DrawLine( 67 , 1000 ,  67 , 0 , 3 , colors[BLACK] );	
       DrawLine( 135 , 1000 , 135,0 , 3 , colors[BLACK] );	
       DrawLine( 201, 1000,   201 ,0, 3,colors[BLACK] );	
       DrawLine( 268 , 1000 ,  268 , 0 , 3 , colors[BLACK] );
       DrawLine( 335 , 1000 ,  335 , 0 , 3 , colors[BLACK] );
    
       DrawLine( 670 , 1000 ,  670 , 0 , 3 , colors[BLACK] );	
       DrawLine( 737 , 1000 , 737,0 , 3 , colors[BLACK] );	
       DrawLine( 804 , 1000,   804 ,0, 3,colors[BLACK] );	
       DrawLine( 871 , 1000 ,  871 , 0 , 3 , colors[BLACK] );
       DrawLine( 937 , 1000 ,  937 , 0 , 3 , colors[BLACK] );
      
      
        //these squares are the main big squares of game
 
	DrawSquare( 0 , 0 ,400,colors[TOMATO]); 
        DrawSquare( 0, 600,400,colors[STEEL_BLUE]); 
        DrawSquare( 600 , 0 ,400,colors[LIME]); 
        DrawSquare( 600 ,600 ,400,colors[ORANGE]);

        DrawSquare( 400 , 400,200,colors[WHEAT]);//THis one is the middle one 
        
        //These white squares are inside the main bid squares
	DrawSquare( 50 , 50,300,colors[WHITE]); 
        DrawSquare( 50 , 650,300,colors[WHITE]); 
        DrawSquare( 650 , 50,300,colors[WHITE]); 
        DrawSquare( 650 , 650,300,colors[WHITE]);
         
        //these small squares are inside the big tomato square 
        
        DrawSquare( 70 , 70,120,colors[TOMATO]); 
        DrawSquare( 70 , 210,120,colors[TOMATO]); 
        DrawSquare( 210 , 70,120,colors[TOMATO]); 
        DrawSquare( 210 , 210,120,colors[TOMATO]); 
        //these small squares are inside the big steel_blue square
        DrawSquare( 70 , 670,120,colors[STEEL_BLUE]); 
        DrawSquare( 70 , 810,120,colors[STEEL_BLUE]); 
        DrawSquare( 210 , 670,120,colors[STEEL_BLUE]); 
        DrawSquare( 210 , 810,120,colors[STEEL_BLUE]); 
        //these small squares are inside the big lime square
        DrawSquare( 670 , 70,120,colors[LIME]); 
        DrawSquare( 670 , 210,120,colors[LIME]); 
        DrawSquare( 810 , 70,120,colors[LIME]); 
        DrawSquare( 810 , 210,120,colors[LIME]); 
        //these small squares are inside the big orange square
        DrawSquare( 670 , 670,120,colors[ORANGE]); 
        DrawSquare( 670 , 810,120,colors[ORANGE]); 
        DrawSquare( 810 , 670,120,colors[ORANGE]); 
        DrawSquare( 810 , 810,120,colors[ORANGE]);
       //these triangles are drawn inside the middle triangle
       DrawTriangle( 400, 400 , 500, 500 , 600 , 400 , colors[TOMATO] );
       DrawTriangle( 400, 400 , 500, 500 , 400 , 600 , colors[STEEL_BLUE] ); 
       DrawTriangle( 400, 600 , 500, 500 , 600 , 600 , colors[ORANGE] ); 
       DrawTriangle( 600, 600 , 500, 500 , 600 , 400 , colors[LIME]); 
       //these line are for the separation between the triangles colors
       DrawLine( 500 , 500 ,  400 ,400 , 5 , colors[BLACK] );	
       DrawLine( 500 , 500 ,  400 , 600 , 5 , colors[BLACK] );	
       DrawLine( 500 , 500, 600, 600 , 5 , colors[BLACK] );	
       DrawLine( 500 , 500 ,  600 , 400 , 5 , colors[BLACK] ); 
       //this circle is drawn in the middle of luddo
       DrawCircle(500,500,10,colors[BLACK]);
       //these lines are borders of ludo canvas and big squares
       DrawLine( 0 , 0 ,  1000 , 0 , 5 , colors[BLACK] );	
       DrawLine( 0 , 400 ,  1000 , 400 , 5 , colors[BLACK] );	
       DrawLine( 0 , 600,  1000, 600 , 5 , colors[BLACK] );	
       DrawLine( 0 , 999 ,  1000 , 999 , 5 , colors[BLACK] );
       //these lines are borders of ludo canvas and big squares
       DrawLine( 0 , 0 ,  0 ,1000  , 5 , colors[BLACK] );	
       DrawLine( 400 , 0 ,  400 , 1000 , 5 , colors[BLACK] );	
       DrawLine( 600 , 0,  600, 1000 , 5 , colors[BLACK] );	
       DrawLine( 999 ,0 ,  999 , 1000 , 5 , colors[BLACK] );
       
	//these strings are written on the side empty space of canvas
	DrawString( 1100, 900, "-(LUDO STAR)-", colors[BLACK]);
        DrawString( 1010, 420, "-(PLAYER-1)-", colors[TOMATO]);
        DrawString( 1210, 420, "-(PLAYER-2)-", colors[STEEL_BLUE]);
        DrawString( 1010,200, "-(PLAYER-3)-", colors[ORANGE]);
        DrawString( 1210, 200, "-(PLAYER-4)-", colors[LIME]);

        //these squares are to display the square
        DrawSquare( 1020 , 250,150,colors[TOMATO]); 
        DrawSquare( 1220 , 250,150,colors[STEEL_BLUE]); 
        DrawSquare( 1020 , 15 ,150,colors[ORANGE]); 
        DrawSquare( 1220 , 15,150,colors[LIME]);

        //these strings show the score of the player

        DrawString( 1030, 360, "SCORE :", colors[BLACK]);
        DrawString( 1230, 360, "SCORE :", colors[BLACK]);
        DrawString( 1030,130, "SCORE :", colors[BLACK]);
        DrawString( 1230, 130, "SCORE :", colors[BLACK]);
 
      //these strings show the score of each player

         
        DrawString( 1050, 320, Num2Str(redscore), colors[BLACK]);
        DrawString( 1250, 320, Num2Str(bluescore), colors[BLACK]);
        DrawString( 1050,90, Num2Str(orangescore) , colors[BLACK]);
        DrawString( 1250, 90, Num2Str(greenscore), colors[BLACK]);
        


	//these are circles are inside the same tomato color squares 
	DrawCircle(130,130,30,colors[BLACK]);
	DrawCircle(268,130,30,colors[BLACK]);
	DrawCircle(130,268,30,colors[BLACK]);
        DrawCircle(268,268,30,colors[BLACK]);
       
        //these are circles are tokens of tomato color player 
	DrawCircle(130,130,25,colors[RED]);
	DrawCircle(268,130,25,colors[RED]);
	DrawCircle(130,268,25,colors[RED]);
        DrawCircle(268,268,25,colors[RED]);

        //these are circles are inside the same steel blue color squares
        DrawCircle(130,730,30,colors[BLACK]);
	DrawCircle(268,730,30,colors[BLACK]);
	DrawCircle(130,868,30,colors[BLACK]);
        DrawCircle(268,868,30,colors[BLACK]);

        //these are circles are tokens of steel_blue color player
        DrawCircle(130,730,25,colors[BLUE]);
	DrawCircle(268,730,25,colors[BLUE]);
	DrawCircle(130,868,25,colors[BLUE]);
        DrawCircle(268,868,25,colors[BLUE]);

        //these are circles are inside the same lime color squares
        DrawCircle(730,130,30,colors[BLACK]);
	DrawCircle(868,130,30,colors[BLACK]);
	DrawCircle(730,268,30,colors[BLACK]);
        DrawCircle(868,268,30,colors[BLACK]);

        //these are circles are tokens of lime color player
        DrawCircle(730,130,25,colors[GREEN]);
	DrawCircle(868,130,25,colors[GREEN]);
	DrawCircle(730,268,25,colors[GREEN]);
        DrawCircle(868,268,25,colors[GREEN]);

        //these are circles are inside the same orange color squares
        DrawCircle(730,730,30,colors[BLACK]);
	DrawCircle(868,730,30,colors[BLACK]);
	DrawCircle(730,868,30,colors[BLACK]);
        DrawCircle(868,868,30,colors[BLACK]);
    
        //these are circles are tokens of orange color player
        DrawCircle(730,730,25,colors[DARK_ORANGE]);
	DrawCircle(868,730,25,colors[DARK_ORANGE]);
	DrawCircle(730,868,25,colors[DARK_ORANGE]);
        DrawCircle(868,868,25,colors[DARK_ORANGE]);


       DrawString( 1150 , 800,"DICE",colors[BLACK]);



}

//____________________________________________________________________________________
void orangetoken1()
{
 int Player3[4][2]={730,730,868,730,730,868,868,868};
 int playerno=0;
  int random=randomno();
 if(random==6 && Player3[playerno][0]==730 && Player3[playerno][1]==730)
 {NewtokenO(playerno,Player3);}

 
  for(int i=0;i<random;i++)
  {
   //this check is to move the tokens up
   if(Player3[playerno][0]==435 && Player3[playerno][1]<363 && Player3[playerno][1]>=28)
   {moveupO(playerno,Player3);}

   //this check is to move the token from corner to left
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==363)
   {cornerleftO(playerno,Player3);}
  
   //this check is to move the token left
   else if (Player3[playerno][0]<=368 && Player3[playerno][0]>33 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]==33 && Player3[playerno][1]==430)
   {moveupO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]>=33 && Player3[playerno][1]>430 && Player3[playerno][1]<564)
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==33  && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token right
   else if (Player3[playerno][0]<368 && Player3[playerno][0]>33 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}
   
   //this check is to move the token from corner to up
   else if (Player3[playerno][0]==368 && Player3[playerno][1]==564)
   {cornerupO(playerno,Player3);}
  
   //this check is to move the token up
   else if (Player3[playerno][0]==435 && Player3[playerno][1]>=631 && Player3[playerno][1]<966 )
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==966)
   {moverightO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]<=502 && Player3[playerno][1]<=966 && Player3[playerno][1]>564)
   {movedownO(playerno,Player3);}
   
   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==966)
   {movedownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]>631 && Player3[playerno][1]<966 )
   {movedownO(playerno,Player3);}
   
   //this check is to move the token from corner to right
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==631)
   {cornerrightO(playerno,Player3);}
 
   //this check is to move the token right
   else if (Player3[playerno][0]>=636 && Player3[playerno][0]<971 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==564)
   {movedownO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==497 )
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token left
    else if (Player3[playerno][0]<971 && Player3[playerno][0]>636 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token corner to down
   else if (Player3[playerno][0]==636 && Player3[playerno][1]==430)
   {cornerdownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]<=363 && Player3[playerno][1]>28)
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==28)
   {moveleftO(playerno,Player3);}
  
   //this check is to move the token left

   else if (Player3[playerno][0]==502 && Player3[playerno][1]==28 )
   {moveleftO(playerno,Player3);}
  } 
 

  orangescore+=random;
}
//____________________________________________________________________________________
void orangetoken2()
{
 int Player3[4][2]={730,730,868,730,730,868,868,868};
 int playerno=1;
 int random=randomno();
 if(random==6 && Player3[playerno][0]==868 && Player3[playerno][1]==730)
 {NewtokenO(playerno,Player3);}
 

   
 
  for(int i=0;i<random;i++)
  {
   //this check is to move the tokens up
   if(Player3[playerno][0]==435 && Player3[playerno][1]<363 && Player3[playerno][1]>=28)
   {moveupO(playerno,Player3);}

   //this check is to move the token from corner to left
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==363)
   {cornerleftO(playerno,Player3);}
  
   //this check is to move the token left
   else if (Player3[playerno][0]<=368 && Player3[playerno][0]>33 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]==33 && Player3[playerno][1]==430)
   {moveupO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]>=33 && Player3[playerno][1]>430 && Player3[playerno][1]<564)
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==33  && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token right
   else if (Player3[playerno][0]<368 && Player3[playerno][0]>33 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}
   
   //this check is to move the token from corner to up
   else if (Player3[playerno][0]==368 && Player3[playerno][1]==564)
   {cornerupO(playerno,Player3);}
  
   //this check is to move the token up
   else if (Player3[playerno][0]==435 && Player3[playerno][1]>=631 && Player3[playerno][1]<966 )
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==966)
   {moverightO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]<=502 && Player3[playerno][1]<=966 && Player3[playerno][1]>564)
   {movedownO(playerno,Player3);}
   
   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==966)
   {movedownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]>631 && Player3[playerno][1]<966 )
   {movedownO(playerno,Player3);}
   
   //this check is to move the token from corner to right
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==631)
   {cornerrightO(playerno,Player3);}
 
   //this check is to move the token right
   else if (Player3[playerno][0]>=636 && Player3[playerno][0]<971 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==564)
   {movedownO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==497 )
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token left
    else if (Player3[playerno][0]<971 && Player3[playerno][0]>636 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token corner to down
   else if (Player3[playerno][0]==636 && Player3[playerno][1]==430)
   {cornerdownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]<=363 && Player3[playerno][1]>28)
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==28)
   {moveleftO(playerno,Player3);}
  
   //this check is to move the token left

   else if (Player3[playerno][0]==502 && Player3[playerno][1]==28 )
   {moveleftO(playerno,Player3);}
   
 }

 orangescore+=random;
}
//____________________________________________________________________________________
void orangetoken3()
{
 int Player3[4][2]={730,730,868,730,730,868,868,868};
 int playerno=2;
 
 int random=randomno();
 if(random==6 && Player3[playerno][0]==730 && Player3[playerno][1]==868)
 {NewtokenO(playerno,Player3);}

   
 
  for(int i=0;i<random;i++)
  {
   //this check is to move the tokens up
   if(Player3[playerno][0]==435 && Player3[playerno][1]<363 && Player3[playerno][1]>=28)
   {moveupO(playerno,Player3);}

   //this check is to move the token from corner to left
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==363)
   {cornerleftO(playerno,Player3);}
  
   //this check is to move the token left
   else if (Player3[playerno][0]<=368 && Player3[playerno][0]>33 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]==33 && Player3[playerno][1]==430)
   {moveupO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]>=33 && Player3[playerno][1]>430 && Player3[playerno][1]<564)
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==33  && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token right
   else if (Player3[playerno][0]<368 && Player3[playerno][0]>33 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}
   
   //this check is to move the token from corner to up
   else if (Player3[playerno][0]==368 && Player3[playerno][1]==564)
   {cornerupO(playerno,Player3);}
  
   //this check is to move the token up
   else if (Player3[playerno][0]==435 && Player3[playerno][1]>=631 && Player3[playerno][1]<966 )
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==966)
   {moverightO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]<=502 && Player3[playerno][1]<=966 && Player3[playerno][1]>564)
   {movedownO(playerno,Player3);}
   
   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==966)
   {movedownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]>631 && Player3[playerno][1]<966 )
   {movedownO(playerno,Player3);}
   
   //this check is to move the token from corner to right
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==631)
   {cornerrightO(playerno,Player3);}
 
   //this check is to move the token right
   else if (Player3[playerno][0]>=636 && Player3[playerno][0]<971 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==564)
   {movedownO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==497 )
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token left
    else if (Player3[playerno][0]<971 && Player3[playerno][0]>636 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token corner to down
   else if (Player3[playerno][0]==636 && Player3[playerno][1]==430)
   {cornerdownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]<=363 && Player3[playerno][1]>28)
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==28)
   {moveleftO(playerno,Player3);}
  
   //this check is to move the token left

   else if (Player3[playerno][0]==502 && Player3[playerno][1]==28 )
   {moveleftO(playerno,Player3);}
   
 } 

 orangescore+=random;
}
//____________________________________________________________________________________
void orangetoken4()
{
 int Player3[4][2]={730,730,868,730,730,868,868,868};
 int playerno=3;
 
 int random=randomno();
 if(random==6 && Player3[playerno][0]==868 && Player3[playerno][1]==868)
 {NewtokenO(playerno,Player3);}

   
 
  for(int i=0;i<random;i++)
  {
   //this check is to move the tokens up
   if(Player3[playerno][0]==435 && Player3[playerno][1]<363 && Player3[playerno][1]>=28)
   {moveupO(playerno,Player3);}

   //this check is to move the token from corner to left
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==363)
   {cornerleftO(playerno,Player3);}
  
   //this check is to move the token left
   else if (Player3[playerno][0]<=368 && Player3[playerno][0]>33 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]==33 && Player3[playerno][1]==430)
   {moveupO(playerno,Player3);}

   //this check is to move the token up
   else if (Player3[playerno][0]>=33 && Player3[playerno][1]>430 && Player3[playerno][1]<564)
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==33  && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token right
   else if (Player3[playerno][0]<368 && Player3[playerno][0]>33 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}
   
   //this check is to move the token from corner to up
   else if (Player3[playerno][0]==368 && Player3[playerno][1]==564)
   {cornerupO(playerno,Player3);}
  
   //this check is to move the token up
   else if (Player3[playerno][0]==435 && Player3[playerno][1]>=631 && Player3[playerno][1]<966 )
   {moveupO(playerno,Player3);}
   
   //this check is to move the token right
   else if (Player3[playerno][0]==435 && Player3[playerno][1]==966)
   {moverightO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]<=502 && Player3[playerno][1]<=966 && Player3[playerno][1]>564)
   {movedownO(playerno,Player3);}
   
   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==966)
   {movedownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]>631 && Player3[playerno][1]<966 )
   {movedownO(playerno,Player3);}
   
   //this check is to move the token from corner to right
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==631)
   {cornerrightO(playerno,Player3);}
 
   //this check is to move the token right
   else if (Player3[playerno][0]>=636 && Player3[playerno][0]<971 && Player3[playerno][1]==564)
   {moverightO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==564)
   {movedownO(playerno,Player3);}
  
   //this check is to move the token down
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==497 )
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==971 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token left
    else if (Player3[playerno][0]<971 && Player3[playerno][0]>636 && Player3[playerno][1]==430)
   {moveleftO(playerno,Player3);}

   //this check is to move the token corner to down
   else if (Player3[playerno][0]==636 && Player3[playerno][1]==430)
   {cornerdownO(playerno,Player3);}

   //this check is to move the token down
   else if (Player3[playerno][0]==569 && Player3[playerno][1]<=363 && Player3[playerno][1]>28)
   {movedownO(playerno,Player3);}

   //this check is to move the token left
   else if (Player3[playerno][0]==569 && Player3[playerno][1]==28)
   {moveleftO(playerno,Player3);}
  
   //this check is to move the token left

   else if (Player3[playerno][0]==502 && Player3[playerno][1]==28 )
   {moveleftO(playerno,Player3);}
 }

 orangescore+=random;
}
//___________________________________________________________________________________________
void bluetoken1()
{
  int Player2[4][2]={130,730,268,730,130,868,268,868};
  int playerno=0;
  int random=randomno();
  if(random==6 && Player2[playerno][0]==130 && Player2[playerno][1]==730)
 {NewtokenB(playerno,Player2);}

   
  
  for(int i=0;i<random;i++)
  { 
   //this check is to move token up
   if(Player2[playerno][0]==435 && Player2[playerno][1]<363 && Player2[playerno][1]>=28)
   {moveupB(playerno,Player2);}

   //this check is to move the token from corner to left
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==363)
   {cornerleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]<=368 && Player2[playerno][0]>33 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token up
   else if (Player2[playerno][0]==33 && Player2[playerno][1]==430)
   {moveupB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>=33  && Player2[playerno][1]==497 && Player2[playerno][0]<430)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token right
   else if (Player2[playerno][0]==33  && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}

   //this check is to move the token right
   else if (Player2[playerno][0]<368 && Player2[playerno][0]>33 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token corner to up
   else if (Player2[playerno][0]==368 && Player2[playerno][1]==564)
   {cornerupB(playerno,Player2);}
  
   //this check is to move the token up
   else if (Player2[playerno][0]==435 && Player2[playerno][1]>=631 && Player2[playerno][1]<966 )
   {moveupB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>435 && Player2[playerno][0]<569 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==966)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]>631 && Player2[playerno][1]<966 )
   {movedownB(playerno,Player2);}
   
   //this check is to move the token corner to right
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==631)
   {cornerrightB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]>=636 && Player2[playerno][0]<971 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==564)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]<564 && Player2[playerno][1]>430 )
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
    else if (Player2[playerno][0]<971 && Player2[playerno][0]>636 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token corner to down
   else if (Player2[playerno][0]==636 && Player2[playerno][1]==430)
   {cornerdownB(playerno,Player2);}

   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]<=363 && Player2[playerno][1]>28)
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==28)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==502 && Player2[playerno][1]==28 )
   {moveleftB(playerno,Player2);}
 } 
bluescore+=random;
}
//___________________________________________________________________________________________
void bluetoken2()
{
  int Player2[4][2]={130,730,268,730,130,868,268,868};
  int playerno=1;
 
  int random=randomno();
  if(random==6 && Player2[playerno][0]==268 && Player2[playerno][1]==730)
 {NewtokenB(playerno,Player2);}

    
  for(int i=0;i<random;i++)
  { 
   //this check is to move token up
   if(Player2[playerno][0]==435 && Player2[playerno][1]<363 && Player2[playerno][1]>=28)
   {moveupB(playerno,Player2);}

   //this check is to move the token from corner to left
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==363)
   {cornerleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]<=368 && Player2[playerno][0]>33 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token up
   else if (Player2[playerno][0]==33 && Player2[playerno][1]==430)
   {moveupB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>=33  && Player2[playerno][1]==497 && Player2[playerno][0]<430)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token right
   else if (Player2[playerno][0]==33  && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}

   //this check is to move the token right
   else if (Player2[playerno][0]<368 && Player2[playerno][0]>33 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token corner to up
   else if (Player2[playerno][0]==368 && Player2[playerno][1]==564)
   {cornerupB(playerno,Player2);}
  
   //this check is to move the token up
   else if (Player2[playerno][0]==435 && Player2[playerno][1]>=631 && Player2[playerno][1]<966 )
   {moveupB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>435 && Player2[playerno][0]<569 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==966)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]>631 && Player2[playerno][1]<966 )
   {movedownB(playerno,Player2);}
   
   //this check is to move the token corner to right
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==631)
   {cornerrightB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]>=636 && Player2[playerno][0]<971 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==564)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]<564 && Player2[playerno][1]>430 )
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
    else if (Player2[playerno][0]<971 && Player2[playerno][0]>636 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token corner to down
   else if (Player2[playerno][0]==636 && Player2[playerno][1]==430)
   {cornerdownB(playerno,Player2);}

   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]<=363 && Player2[playerno][1]>28)
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==28)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==502 && Player2[playerno][1]==28 )
   {moveleftB(playerno,Player2);}
}  

 bluescore+=random;
}
//___________________________________________________________________________________________
void bluetoken3()
{
  int Player2[4][2]={130,730,268,730,130,868,268,868};
  int playerno=2;
  
  int random=randomno();
  if(random==6 && Player2[playerno][0]==130 && Player2[playerno][1]==868)
 {NewtokenB(playerno,Player2);}

   
 
  for(int i=0;i<random;i++)
  { 
   //this check is to move token up
   if(Player2[playerno][0]==435 && Player2[playerno][1]<363 && Player2[playerno][1]>=28)
   {moveupB(playerno,Player2);}

   //this check is to move the token from corner to left
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==363)
   {cornerleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]<=368 && Player2[playerno][0]>33 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token up
   else if (Player2[playerno][0]==33 && Player2[playerno][1]==430)
   {moveupB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>=33  && Player2[playerno][1]==497 && Player2[playerno][0]<430)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token right
   else if (Player2[playerno][0]==33  && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}

   //this check is to move the token right
   else if (Player2[playerno][0]<368 && Player2[playerno][0]>33 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token corner to up
   else if (Player2[playerno][0]==368 && Player2[playerno][1]==564)
   {cornerupB(playerno,Player2);}
  
   //this check is to move the token up
   else if (Player2[playerno][0]==435 && Player2[playerno][1]>=631 && Player2[playerno][1]<966 )
   {moveupB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>435 && Player2[playerno][0]<569 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==966)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]>631 && Player2[playerno][1]<966 )
   {movedownB(playerno,Player2);}
   
   //this check is to move the token corner to right
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==631)
   {cornerrightB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]>=636 && Player2[playerno][0]<971 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==564)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]<564 && Player2[playerno][1]>430 )
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
    else if (Player2[playerno][0]<971 && Player2[playerno][0]>636 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token corner to down
   else if (Player2[playerno][0]==636 && Player2[playerno][1]==430)
   {cornerdownB(playerno,Player2);}

   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]<=363 && Player2[playerno][1]>28)
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==28)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==502 && Player2[playerno][1]==28 )
   {moveleftB(playerno,Player2);}
  }

 bluescore+=random;
}
//___________________________________________________________________________________________
void bluetoken4()
{
  int Player2[4][2]={130,730,268,730,130,868,268,868};
  int playerno=3;
  int random=randomno();
  if(random==6 && Player2[playerno][0]==268 && Player2[playerno][1]==868)
 {NewtokenB(playerno,Player2);}

  
  
  
  for(int i=0;i<random;i++)
  { 
   //this check is to move token up
   if(Player2[playerno][0]==435 && Player2[playerno][1]<363 && Player2[playerno][1]>=28)
   {moveupB(playerno,Player2);}

   //this check is to move the token from corner to left
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==363)
   {cornerleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]<=368 && Player2[playerno][0]>33 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token up
   else if (Player2[playerno][0]==33 && Player2[playerno][1]==430)
   {moveupB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>=33  && Player2[playerno][1]==497 && Player2[playerno][0]<430)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token right
   else if (Player2[playerno][0]==33  && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}

   //this check is to move the token right
   else if (Player2[playerno][0]<368 && Player2[playerno][0]>33 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token corner to up
   else if (Player2[playerno][0]==368 && Player2[playerno][1]==564)
   {cornerupB(playerno,Player2);}
  
   //this check is to move the token up
   else if (Player2[playerno][0]==435 && Player2[playerno][1]>=631 && Player2[playerno][1]<966 )
   {moveupB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]==435 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
  
   //this check is to move the token right
   else if (Player2[playerno][0]>435 && Player2[playerno][0]<569 && Player2[playerno][1]==966)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==966)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]>631 && Player2[playerno][1]<966 )
   {movedownB(playerno,Player2);}
   
   //this check is to move the token corner to right
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==631)
   {cornerrightB(playerno,Player2);}
 
   //this check is to move the token right
   else if (Player2[playerno][0]>=636 && Player2[playerno][0]<971 && Player2[playerno][1]==564)
   {moverightB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==564)
   {movedownB(playerno,Player2);}
   
   //this check is to move the token down
   else if (Player2[playerno][0]==971 && Player2[playerno][1]<564 && Player2[playerno][1]>430 )
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==971 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
    else if (Player2[playerno][0]<971 && Player2[playerno][0]>636 && Player2[playerno][1]==430)
   {moveleftB(playerno,Player2);}

   //this check is to move the token corner to down
   else if (Player2[playerno][0]==636 && Player2[playerno][1]==430)
   {cornerdownB(playerno,Player2);}

   //this check is to move the token down
   else if (Player2[playerno][0]==569 && Player2[playerno][1]<=363 && Player2[playerno][1]>28)
   {movedownB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==569 && Player2[playerno][1]==28)
   {moveleftB(playerno,Player2);}

   //this check is to move the token left
   else if (Player2[playerno][0]==502 && Player2[playerno][1]==28 )
   {moveleftB(playerno,Player2);}
  }
 
  bluescore+=random;
}
//________________________________________________________________________________________
void redtoken1()
{
 int Player1[4][2]={130,130,268,130,130,268,268,268};
 
 int playerno=0;
 
  int random=randomno();
 
 if(random==6 && Player1[playerno][0]==130 && Player1[playerno][1]==130)
 {NewtokenR(playerno,Player1);}

   
  
  
  for(int i=0;i<random;i++)
  {
    //this check is to move tokens up
   if(Player1[playerno][0]==435 && Player1[playerno][1]<363 && Player1[playerno][1]>=28)
   {
     moveupR(playerno,Player1);
       
  }
   //this variable is to move the tokens from corner to left
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==363)
   {
     cornerleftR(playerno,Player1);
    
 }
   //this check is to move the tokens left
   else if (Player1[playerno][0]<=368 && Player1[playerno][0]>33 && Player1[playerno][1]==430)
 {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]==33 && Player1[playerno][1]==430)
   { 
    moveupR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]>=33 && Player1[playerno][1]>430 && Player1[playerno][1]<564)
   { 
     moveupR(playerno,Player1);
   }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==33  && Player1[playerno][1]==564)
   {
     moverightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]<368 && Player1[playerno][0]>33 && Player1[playerno][1]==564)
   { 
    moverightR(playerno,Player1);
}
   //this check is to move the tokens from corner to up
   else if (Player1[playerno][0]==368 && Player1[playerno][1]==564)
   {
     cornerupR(playerno,Player1);
}
   //this check is to move the tokens to upward 
   else if (Player1[playerno][0]==435 && Player1[playerno][1]>=631 && Player1[playerno][1]<966 )
   {
    moveupR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
    }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>435 && Player1[playerno][0]<569 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
}   
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==966)
   {
     movedownR(playerno,Player1);
}
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]>631 && Player1[playerno][1]<966 )
   {
     
    movedownR(playerno,Player1);
}  
   //this check is used to move the tokens from corner to right
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==631)
   {
     cornerrightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>=636 && Player1[playerno][0]<971 && Player1[playerno][1]==564)
   {
    moverightR(playerno,Player1);
}
   //this function is to move the tokens down
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==564)
   {
    movedownR(playerno,Player1);
}   
    //this check is to move the variables down
    else if (Player1[playerno][0]==971 && Player1[playerno][1]<564 && Player1[playerno][1]>430 )
   { 
    movedownR(playerno,Player1); 
}
   //this check is to move the tokens left
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
    //this check is to move the tokens left
    else if (Player1[playerno][0]<971 && Player1[playerno][0]>636 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens from corner to down
   else if (Player1[playerno][0]==636 && Player1[playerno][1]==430)
   {
     cornerdownR(playerno,Player1);
}
    //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]<=363 && Player1[playerno][1]>28)
   
   { 
    movedownR(playerno,Player1);
}
   //this check is to move the tokens to left
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==28)
   {
   
    moveleftR(playerno,Player1);
   }

   else if (Player1[playerno][0]==502 && Player1[playerno][1]>=28 && Player1[playerno][1]<430)
   {moveupR(playerno,Player1);}
  }

 redscore+=random;
}
//________________________________________________________________________________________
void redtoken2()
{
 int Player1[4][2]={130,130,268,130,130,268,268,268};
 
 int playerno=1;
  int random=randomno();
 
 if(random==6 && Player1[playerno][0]==268 && Player1[playerno][1]==130)
 {NewtokenR(playerno,Player1);}

   
  
  for(int i=0;i<random;i++)
  {
    //this check is to move tokens up
   if(Player1[playerno][0]==435 && Player1[playerno][1]<363 && Player1[playerno][1]>=28)
   {
     moveupR(playerno,Player1);
       
  }
   //this variable is to move the tokens from corner to left
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==363)
   {
     cornerleftR(playerno,Player1);
    
 }
   //this check is to move the tokens left
   else if (Player1[playerno][0]<=368 && Player1[playerno][0]>33 && Player1[playerno][1]==430)
 {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]==33 && Player1[playerno][1]==430)
   { 
    moveupR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]>=33 && Player1[playerno][1]>430 && Player1[playerno][1]<564)
   { 
     moveupR(playerno,Player1);
   }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==33  && Player1[playerno][1]==564)
   {
     moverightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]<368 && Player1[playerno][0]>33 && Player1[playerno][1]==564)
   { 
    moverightR(playerno,Player1);
}
   //this check is to move the tokens from corner to up
   else if (Player1[playerno][0]==368 && Player1[playerno][1]==564)
   {
     cornerupR(playerno,Player1);
}
   //this check is to move the tokens to upward 
   else if (Player1[playerno][0]==435 && Player1[playerno][1]>=631 && Player1[playerno][1]<966 )
   {
    moveupR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
    }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>435 && Player1[playerno][0]<569 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
}   
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==966)
   {
     movedownR(playerno,Player1);
}
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]>631 && Player1[playerno][1]<966 )
   {
     
    movedownR(playerno,Player1);
}  
   //this check is used to move the tokens from corner to right
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==631)
   {
     cornerrightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>=636 && Player1[playerno][0]<971 && Player1[playerno][1]==564)
   {
    moverightR(playerno,Player1);
}
   //this function is to move the tokens down
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==564)
   {
    movedownR(playerno,Player1);
}   
    //this check is to move the variables down
    else if (Player1[playerno][0]==971 && Player1[playerno][1]<564 && Player1[playerno][1]>430 )
   { 
    movedownR(playerno,Player1); 
}
   //this check is to move the tokens left
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
    //this check is to move the tokens left
    else if (Player1[playerno][0]<971 && Player1[playerno][0]>636 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens from corner to down
   else if (Player1[playerno][0]==636 && Player1[playerno][1]==430)
   {
     cornerdownR(playerno,Player1);
}
    //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]<=363 && Player1[playerno][1]>28)
   
   { 
    movedownR(playerno,Player1);
}
   //this check is to move the tokens to left
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==28)
   {
   
    moveleftR(playerno,Player1);
   }

   else if (Player1[playerno][0]==502 && Player1[playerno][1]>=28 && Player1[playerno][1]<430)
   {moveupR(playerno,Player1);}
  }

  redscore+=random;
}
//________________________________________________________________________________________
void redtoken3()
{
 int Player1[4][2]={130,130,268,130,130,268,268,268};
 
 int playerno=2;
 int random=randomno();

 if(random==6 && Player1[playerno][0]==130 && Player1[playerno][1]==268)
 {NewtokenR(playerno,Player1);}

  

  
  for(int i=0;i<random;i++)
  {
    //this check is to move tokens up
   if(Player1[playerno][0]==435 && Player1[playerno][1]<363 && Player1[playerno][1]>=28)
   {
     moveupR(playerno,Player1);
       
  }
   //this variable is to move the tokens from corner to left
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==363)
   {
     cornerleftR(playerno,Player1);
    
 }
   //this check is to move the tokens left
   else if (Player1[playerno][0]<=368 && Player1[playerno][0]>33 && Player1[playerno][1]==430)
 {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]==33 && Player1[playerno][1]==430)
   { 
    moveupR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]>=33 && Player1[playerno][1]>430 && Player1[playerno][1]<564)
   { 
     moveupR(playerno,Player1);
   }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==33  && Player1[playerno][1]==564)
   {
     moverightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]<368 && Player1[playerno][0]>33 && Player1[playerno][1]==564)
   { 
    moverightR(playerno,Player1);
}
   //this check is to move the tokens from corner to up
   else if (Player1[playerno][0]==368 && Player1[playerno][1]==564)
   {
     cornerupR(playerno,Player1);
}
   //this check is to move the tokens to upward 
   else if (Player1[playerno][0]==435 && Player1[playerno][1]>=631 && Player1[playerno][1]<966 )
   {
    moveupR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
    }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>435 && Player1[playerno][0]<569 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
}   
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==966)
   {
     movedownR(playerno,Player1);
}
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]>631 && Player1[playerno][1]<966 )
   {
     
    movedownR(playerno,Player1);
}  
   //this check is used to move the tokens from corner to right
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==631)
   {
     cornerrightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>=636 && Player1[playerno][0]<971 && Player1[playerno][1]==564)
   {
    moverightR(playerno,Player1);
}
   //this function is to move the tokens down
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==564)
   {
    movedownR(playerno,Player1);
}   
    //this check is to move the variables down
    else if (Player1[playerno][0]==971 && Player1[playerno][1]<564 && Player1[playerno][1]>430 )
   { 
    movedownR(playerno,Player1); 
}
   //this check is to move the tokens left
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
    //this check is to move the tokens left
    else if (Player1[playerno][0]<971 && Player1[playerno][0]>636 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens from corner to down
   else if (Player1[playerno][0]==636 && Player1[playerno][1]==430)
   {
     cornerdownR(playerno,Player1);
}
    //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]<=363 && Player1[playerno][1]>28)
   
   { 
    movedownR(playerno,Player1);
}
   //this check is to move the tokens to left
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==28)
   {
   
    moveleftR(playerno,Player1);
   }

   else if (Player1[playerno][0]==502 && Player1[playerno][1]>=28 && Player1[playerno][1]<430)
   {moveupR(playerno,Player1);}
  }

 redscore+=random;
}
//________________________________________________________________________________________
void redtoken4()
{
 int Player1[4][2]={130,130,268,130,130,268,268,268};
 
 int playerno=3;
  int random=randomno();
 
 if(random==6 && Player1[playerno][0]==268 && Player1[playerno][1]==268)
 {NewtokenR(playerno,Player1);}

   
  
  for(int i=0;i<random;i++)
  {
    //this check is to move tokens up
   if(Player1[playerno][0]==435 && Player1[playerno][1]<363 && Player1[playerno][1]>=28)
   {
     moveupR(playerno,Player1);
       
  }
   //this variable is to move the tokens from corner to left
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==363)
   {
     cornerleftR(playerno,Player1);
    
 }
   //this check is to move the tokens left
   else if (Player1[playerno][0]<=368 && Player1[playerno][0]>33 && Player1[playerno][1]==430)
 {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]==33 && Player1[playerno][1]==430)
   { 
    moveupR(playerno,Player1);
}
   //this check is to move the tokens up
   else if (Player1[playerno][0]>=33 && Player1[playerno][1]>430 && Player1[playerno][1]<564)
   { 
     moveupR(playerno,Player1);
   }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==33  && Player1[playerno][1]==564)
   {
     moverightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]<368 && Player1[playerno][0]>33 && Player1[playerno][1]==564)
   { 
    moverightR(playerno,Player1);
}
   //this check is to move the tokens from corner to up
   else if (Player1[playerno][0]==368 && Player1[playerno][1]==564)
   {
     cornerupR(playerno,Player1);
}
   //this check is to move the tokens to upward 
   else if (Player1[playerno][0]==435 && Player1[playerno][1]>=631 && Player1[playerno][1]<966 )
   {
    moveupR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]==435 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
    }
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>435 && Player1[playerno][0]<569 && Player1[playerno][1]==966)
   {
    moverightR(playerno,Player1);
}   
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==966)
   {
     movedownR(playerno,Player1);
}
   //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]>631 && Player1[playerno][1]<966 )
   {
     
    movedownR(playerno,Player1);
}  
   //this check is used to move the tokens from corner to right
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==631)
   {
     cornerrightR(playerno,Player1);
}
   //this check is to move the tokens to right
   else if (Player1[playerno][0]>=636 && Player1[playerno][0]<971 && Player1[playerno][1]==564)
   {
    moverightR(playerno,Player1);
}
   //this function is to move the tokens down
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==564)
   {
    movedownR(playerno,Player1);
}   
    //this check is to move the variables down
    else if (Player1[playerno][0]==971 && Player1[playerno][1]<564 && Player1[playerno][1]>430 )
   { 
    movedownR(playerno,Player1); 
}
   //this check is to move the tokens left
   else if (Player1[playerno][0]==971 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
    //this check is to move the tokens left
    else if (Player1[playerno][0]<971 && Player1[playerno][0]>636 && Player1[playerno][1]==430)
   {
    moveleftR(playerno,Player1);
}
   //this check is to move the tokens from corner to down
   else if (Player1[playerno][0]==636 && Player1[playerno][1]==430)
   {
     cornerdownR(playerno,Player1);
}
    //this check is to move the tokens down
   else if (Player1[playerno][0]==569 && Player1[playerno][1]<=363 && Player1[playerno][1]>28)
   
   { 
    movedownR(playerno,Player1);
}
   //this check is to move the tokens to left
   else if (Player1[playerno][0]==569 && Player1[playerno][1]==28)
   {
   
    moveleftR(playerno,Player1);
   }

   else if (Player1[playerno][0]==502 && Player1[playerno][1]>=28 && Player1[playerno][1]<430)
   {moveupR(playerno,Player1);}
  }

  redscore+=random;
}
//________________________________________________________________________________________________
void greentoken1()
{
 int Player4[4][2]={730,130,868,130,730,268,868,268};
 int playerno=0;
 
  int random=randomno();
   
   if(random==6 && Player4[playerno][0]==730 && Player4[playerno][1]==130)
 {NewtokenG(playerno,Player4);}
 
 
  
  for(int i=0;i<random;i++)
  {
   //this check is to move the token up
   if(Player4[playerno][0]==435 && Player4[playerno][1]<363 && Player4[playerno][1]>=28)
   {cout<<"i am dancing"<<endl;
    moveupG(playerno,Player4);}

   //this check is to move the token 
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==363)
   {cornerleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]<=368 && Player4[playerno][0]>33 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token up
   else if (Player4[playerno][0]==33 && Player4[playerno][1]==430)
   {moveupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]>=33 && Player4[playerno][1]>430 && Player4[playerno][1]<564)
   {moveupG(playerno,Player4);}
   
   //this check is to move the token right
   else if (Player4[playerno][0]==33  && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token right
   else if (Player4[playerno][0]<368 && Player4[playerno][0]>33 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token from corner to up
   else if (Player4[playerno][0]==368 && Player4[playerno][1]==564)
   {cornerupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]==435 && Player4[playerno][1]>=631 && Player4[playerno][1]<966 )
   {moveupG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
  
   //this check is to move the token right
   else if (Player4[playerno][0]>435 && Player4[playerno][0]<569 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==966)
   {movedownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]>631 && Player4[playerno][1]<966 )
   {movedownG(playerno,Player4);}
   
   //this check is to move the token corner to right
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==631)
   {cornerrightG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]>=636 && Player4[playerno][0]<971 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==971 && Player4[playerno][1]==564)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]<=971 && Player4[playerno][1]==497 && Player4[playerno][0]>569 )
   {moveleftG(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]==971 && Player4[playerno][1]<564 && Player4[playerno][1]>430 )
   {moveleftB(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]<971 && Player4[playerno][0]>636 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token corner to down
   else if (Player4[playerno][0]==636 && Player4[playerno][1]==430)
   {cornerdownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]<=363 && Player4[playerno][1]>28)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==28)
   {moveleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]==502 && Player4[playerno][1]==28 )
   {moveleftG(playerno,Player4);}
  }

 greenscore+=random;
}
//_______________________________________________________________________________________________________________

 void greentoken2()
{
 int Player4[4][2]={730,130,868,130,730,268,868,268};
 int playerno=1;
 
 
   int random=randomno();
  if(random==6 && Player4[playerno][0]==868 && Player4[playerno][1]==130)
 {NewtokenG(playerno,Player4);}

   
 
  for(int i=0;i<random;i++)
  {
   //this check is to move the token up
   if(Player4[playerno][0]==435 && Player4[playerno][1]<363 && Player4[playerno][1]>=28)
   {moveupG(playerno,Player4);}

   //this check is to move the token 
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==363)
   {cornerleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]<=368 && Player4[playerno][0]>33 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token up
   else if (Player4[playerno][0]==33 && Player4[playerno][1]==430)
   {moveupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]>=33 && Player4[playerno][1]>430 && Player4[playerno][1]<564)
   {moveupG(playerno,Player4);}
   
   //this check is to move the token right
   else if (Player4[playerno][0]==33  && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token right
   else if (Player4[playerno][0]<368 && Player4[playerno][0]>33 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token from corner to up
   else if (Player4[playerno][0]==368 && Player4[playerno][1]==564)
   {cornerupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]==435 && Player4[playerno][1]>=631 && Player4[playerno][1]<966 )
   {moveupG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
  
   //this check is to move the token right
   else if (Player4[playerno][0]>435 && Player4[playerno][0]<569 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==966)
   {movedownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]>631 && Player4[playerno][1]<966 )
   {movedownG(playerno,Player4);}
   
   //this check is to move the token corner to right
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==631)
   {cornerrightG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]>=636 && Player4[playerno][0]<971 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==971 && Player4[playerno][1]==564)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]<=971 && Player4[playerno][1]==497 && Player4[playerno][0]>569 )
   {moveleftG(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]==971 && Player4[playerno][1]<564 && Player4[playerno][1]>430 )
   {moveleftB(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]<971 && Player4[playerno][0]>636 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token corner to down
   else if (Player4[playerno][0]==636 && Player4[playerno][1]==430)
   {cornerdownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]<=363 && Player4[playerno][1]>28)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==28)
   {moveleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]==502 && Player4[playerno][1]==28 )
   {moveleftG(playerno,Player4);}
  
}
 greenscore+=random;
}
//_______________________________________________________________________________________________________________
void greentoken3()
{
 int Player4[4][2]={730,130,868,130,730,268,868,268};
 int playerno=2;
  
  int random=randomno();
 
   if(random==6 && Player4[playerno][0]==730 && Player4[playerno][1]==268)
 {NewtokenG(playerno,Player4);}

   

  for(int i=0;i<random;i++)
  {
   //this check is to move the token up
   if(Player4[playerno][0]==435 && Player4[playerno][1]<363 && Player4[playerno][1]>=28)
   {moveupG(playerno,Player4);}

   //this check is to move the token 
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==363)
   {cornerleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]<=368 && Player4[playerno][0]>33 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token up
   else if (Player4[playerno][0]==33 && Player4[playerno][1]==430)
   {moveupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]>=33 && Player4[playerno][1]>430 && Player4[playerno][1]<564)
   {moveupG(playerno,Player4);}
   
   //this check is to move the token right
   else if (Player4[playerno][0]==33  && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token right
   else if (Player4[playerno][0]<368 && Player4[playerno][0]>33 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token from corner to up
   else if (Player4[playerno][0]==368 && Player4[playerno][1]==564)
   {cornerupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]==435 && Player4[playerno][1]>=631 && Player4[playerno][1]<966 )
   {moveupG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
  
   //this check is to move the token right
   else if (Player4[playerno][0]>435 && Player4[playerno][0]<569 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==966)
   {movedownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]>631 && Player4[playerno][1]<966 )
   {movedownG(playerno,Player4);}
   
   //this check is to move the token corner to right
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==631)
   {cornerrightG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]>=636 && Player4[playerno][0]<971 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==971 && Player4[playerno][1]==564)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]<=971 && Player4[playerno][1]==497 && Player4[playerno][0]>569 )
   {moveleftG(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]==971 && Player4[playerno][1]<564 && Player4[playerno][1]>430 )
   {moveleftB(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]<971 && Player4[playerno][0]>636 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token corner to down
   else if (Player4[playerno][0]==636 && Player4[playerno][1]==430)
   {cornerdownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]<=363 && Player4[playerno][1]>28)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==28)
   {moveleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]==502 && Player4[playerno][1]==28 )
   {moveleftG(playerno,Player4);}
 
}
 greenscore+=random;
}
//_______________________________________________________________________________________________________________
void greentoken4()
{
 int Player4[4][2]={730,130,868,130,730,268,868,268};
 int playerno=3;
 
 int random=randomno();
   if(random==6 && Player4[playerno][0]==868 && Player4[playerno][1]==268)
 {NewtokenG(playerno,Player4);}


  
  
  for(int i=0;i<random;i++)
  {
   //this check is to move the token up
   if(Player4[playerno][0]==435 && Player4[playerno][1]<363 && Player4[playerno][1]>=28)
   {moveupG(playerno,Player4);}

   //this check is to move the token 
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==363)
   {cornerleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]<=368 && Player4[playerno][0]>33 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token up
   else if (Player4[playerno][0]==33 && Player4[playerno][1]==430)
   {moveupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]>=33 && Player4[playerno][1]>430 && Player4[playerno][1]<564)
   {moveupG(playerno,Player4);}
   
   //this check is to move the token right
   else if (Player4[playerno][0]==33  && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token right
   else if (Player4[playerno][0]<368 && Player4[playerno][0]>33 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token from corner to up
   else if (Player4[playerno][0]==368 && Player4[playerno][1]==564)
   {cornerupG(playerno,Player4);}
  
   //this check is to move the token up
   else if (Player4[playerno][0]==435 && Player4[playerno][1]>=631 && Player4[playerno][1]<966 )
   {moveupG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]==435 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
  
   //this check is to move the token right
   else if (Player4[playerno][0]>435 && Player4[playerno][0]<569 && Player4[playerno][1]==966)
   {moverightG(playerno,Player4);}
   
   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==966)
   {movedownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]>631 && Player4[playerno][1]<966 )
   {movedownG(playerno,Player4);}
   
   //this check is to move the token corner to right
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==631)
   {cornerrightG(playerno,Player4);}
 
   //this check is to move the token right
   else if (Player4[playerno][0]>=636 && Player4[playerno][0]<971 && Player4[playerno][1]==564)
   {moverightG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==971 && Player4[playerno][1]==564)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]<=971 && Player4[playerno][1]==497 && Player4[playerno][0]>569 )
   {moveleftG(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]==971 && Player4[playerno][1]<564 && Player4[playerno][1]>430 )
   {moveleftB(playerno,Player4);}

    //this check is to move the token left
    else if (Player4[playerno][0]<971 && Player4[playerno][0]>636 && Player4[playerno][1]==430)
   {moveleftG(playerno,Player4);}

   //this check is to move the token corner to down
   else if (Player4[playerno][0]==636 && Player4[playerno][1]==430)
   {cornerdownG(playerno,Player4);}

   //this check is to move the token down
   else if (Player4[playerno][0]==569 && Player4[playerno][1]<=363 && Player4[playerno][1]>28)
   {movedownG(playerno,Player4);}
  
   //this check is to move the token left
   else if (Player4[playerno][0]==569 && Player4[playerno][1]==28)
   {moveleftG(playerno,Player4);}

   //this check is to move the token left
   else if (Player4[playerno][0]==502 && Player4[playerno][1]==28 )
   {moveleftG(playerno,Player4);}
  }

 greenscore+=random;
}
//_______________________________________________________________________________________________________________


void DICE(int x)
{ 
  if (x==1)
  {DrawSquare( 1150 , 700,80,colors[BLACK]);
  DrawString( 1190 , 740,"1",colors[WHITE]);}
  else if (x==2)
  {DrawSquare( 1150 , 700,80,colors[BLACK]);
  DrawString( 1190 , 740,"2",colors[WHITE]);}
  else if (x==3)
  {DrawSquare( 1200 , 700,80,colors[BLACK]);
  DrawString( 1240 , 740,"3",colors[WHITE]);}
  else if (x==4)
  {DrawSquare( 1200 , 700,80,colors[BLACK]);
  DrawString( 1240 , 740,"4",colors[WHITE]);}
  else if (x==5)
  {DrawSquare( 1200 , 700,80,colors[BLACK]);
  DrawString( 1240 , 740,"5",colors[WHITE]);}
  else if (x==6)
  {DrawSquare( 1200 , 700,80,colors[BLACK]);
  DrawString( 1240 , 740,"6",colors[WHITE]);}
}
  
void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
		
	== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key,int x,int y) {
 
    if (key=='m')
    {menue();}
    else if (key=='h')
    {highscore();}
    else if (key=='g')
    {gameboard();}
    else if (key=='2')
    {gameboard();}
    else if (key=='3')
    {gameboard();}
    else if (key=='4')
    {gameboard();}
    
    else if (key=='a')
    {redtoken1();}
    
    else if (key=='b')
    {redtoken2();}

    else if (key=='c')
    {redtoken3();}

     else if (key=='d')
    {redtoken4();}

    else if (key=='w')
    {bluetoken1();}

    else if (key=='x')
    {bluetoken1();}

    else if (key=='y')
    {bluetoken1();}

    else if (key=='z')
    {bluetoken1();}

    else if (key=='5')
    {orangetoken1();}

    else if (key=='6')
    {orangetoken1();}

    else if (key=='7')
    {orangetoken1();}

    else if (key=='8')
    {orangetoken1();}

   
    else if (key=='k')
    {greentoken1();}

    else if (key=='l')
    {greentoken1();}

    else if (key=='os')
    {greentoken1();}

    else if (key=='n')
    {greentoken1();}
	glutSwapBuffers();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {
 
	glutSwapBuffers();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 1400, height = 1000; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("PF Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
