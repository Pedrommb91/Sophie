/*!**********************************************************************
\name			EntryPoint
\author			Pedro Barreiro
\date			19/03/2020
\version		1.0
*********************************************************************/
#include "EntryPoint.h"
#include "MainWindow.h"
#include <iostream>

/*!**********************************************************************
\name			main
\author			Pedro Barreiro
\date			19/03/2020
\version		1.0
\param[in]		int argc
\param[in]		char* argv[]
*********************************************************************/
int main(int argc, char* argv[])
{
	std::cout << "Sophie" << std::endl;

	sophie::MainWindow* mainWindow = new sophie::MainWindow;
	mainWindow->show();
	
	std::cin.get();
}