#pragma once
/*!**********************************************************************
\name			MainWindow
\author			Pedro Barreiro
\date			19/03/2020
\version		1.0
*********************************************************************/
#include "stdafx.h"

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
		bool Show();

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