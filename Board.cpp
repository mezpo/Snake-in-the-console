#include "Board.h"
#include<vector>
/////////////////////////////////////////////////////////////////////////////////   constructor
Board::Board(int w, int h) {

	width = w;
	hight = h;
}
//////////////////////////////////////////////////////////////////////////////////
void Board::set_board()
{

	/////// tutaj dodaj if w zale¿oœci od poziomu
	const int X_width = 150;
	const int Y_hight = 38;
	
	//char X_Y_constantly_drawing_elements[X_width][Y_hight];

	/// <summary>
	/// Zobacz poradnik do dynamicznych tablic
	/// dwuwymiarowych i spróbuj zrozumieæ co w tym linijkach zapisa³e
	/// bo chodzi o to ¿e musisz z wróciæ t¹ tablice bo bêdzie ona potrzebna 
	/// </summary>
	char** X_Y_constantly_drawing_elements = new char * [X_width];

	for (int i = 0; i < X_width; i++)
		X_Y_constantly_drawing_elements[i] = new char[Y_hight];

	char helpful_variable;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	//------drawing settings----------//
	for (int h = 0; h < hight; h++)
	{
		
		for (int w = 0; w < width; w++)
		{
			//------drawing edge settings----------//
			if (h == 0 || h == (hight - 1))// EDGE
			{
				helpful_variable = '-';
			}
			else if (w == 0 || w == (width - 1))// EDGE
			{
				helpful_variable = '|';
			}
			else if (w == 75 && h == 19)// EDGE
			{
				helpful_variable = 'O';
			}
			else
			{
				helpful_variable = ' ';
			}

			std::cout << helpful_variable;

			X_Y_constantly_drawing_elements[w][h] = helpful_variable;  // w = X, h = Y
			//----------------------------//
		}

		std::cout << std::endl;
		
	}
	
	

}

/*void Board::draw_ALL()
{

	for (int h = 0; h < hight; h++)
	{

		for (int w = 0; w < width; w++)
		{

			std::cout << X_Y_constantly_drawing_elements[w][h]
		}

		std::cout << std::endl;
	}
}*/
