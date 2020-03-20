#pragma once
/*!**********************************************************************
\name			MainWindow
\author			Pedro Barreiro
\date			19/03/2020
\version		1.0
*********************************************************************/
#include "GLFW/glfw3.h"

namespace sophie {

	/*!**********************************************************************
	\class			MainWindow
	\author			Pedro Barreiro
	\date			19/03/2020
	\version		1.0
	*********************************************************************/
	class MainWindow
	{
	private:
		int width;
		int height;
		const char* title;

		GLFWwindow* window;
	public:

		/*!**********************************************************************
		\name			MainWindow
		\author			Pedro Barreiro
		\date			19/03/2020
		\version		1.0
		*********************************************************************/
		MainWindow();

		/*!**********************************************************************
		\name			show
		\author			Pedro Barreiro
		\date			19/03/2020
		\version		1.0
		\param[out]		Return true if suceed, false if it fails
		*********************************************************************/
		bool show();

		/*!**********************************************************************
		\name			~MainWindow
		\author			Pedro Barreiro
		\date			19/03/2020
		\version		1.0
		*********************************************************************/
		~MainWindow();

	private:

	};
}