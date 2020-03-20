/*!**********************************************************************
\name			MainWindow
\author			Pedro Barreiro
\date			19/03/2020
\version		1.0
*********************************************************************/
#include "MainWindow.h"

namespace sophie {

	/*!**********************************************************************
	\name			MainWindow
	\author			Pedro Barreiro
	\date			19/03/2020
	\version		1.0
	*********************************************************************/
	MainWindow::MainWindow()
	{
		this->width = 640;
		this->height = 480;
		this->title = "Main Window";
		window = nullptr;
	}

	/*!**********************************************************************
	\name			show
	\author			Pedro Barreiro
	\date			19/03/2020
	\version		1.0
	\param[out]		Return true if suceed, false if it fails
	*********************************************************************/
	bool MainWindow::show()
	{
		glfwInit();
		auto* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
		return window == nullptr ? false : true;
	}

	/*!**********************************************************************
	\name			~MainWindow
	\author			Pedro Barreiro
	\date			19/03/2020
	\version		1.0
	*********************************************************************/
	MainWindow::~MainWindow()
	{
	}
}