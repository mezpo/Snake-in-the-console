#pragma once
#include<iostream>
#include <vector>

class Board
{
protected:
	// Board size
	int width;    
	int hight;

	// To navigate snake
	int x, y;


public:
	Board(int width = 150, int hight = 38);		// constructor //
	void set_board();							// setting basic variables

	void draw_ALL();

};

