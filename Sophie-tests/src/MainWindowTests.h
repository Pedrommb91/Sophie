#pragma once
/*!**********************************************************************
\name			MainWindowTests
\author			Pedro Barreiro
\date			20/03/2020
\version		1.0
*********************************************************************/
#include "pch.h"
#include "MainWindow.h"

namespace sophie {

	/*!**********************************************************************
	\class			MainWindow
	\author			Pedro Barreiro
	\date			19/03/2020
	\version		1.0
	*********************************************************************/
	class MainWindowMock : public MainWindow
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
		MainWindowMock();

		/*!**********************************************************************
		\name			show
		\author			Pedro Barreiro
		\date			19/03/2020
		\version		1.0
		\param[out]		Return true if suceed, false if it fails
		*********************************************************************/
		bool InvokeShow();

		/*!**********************************************************************
		\name			~MainWindow
		\author			Pedro Barreiro
		\date			19/03/2020
		\version		1.0
		*********************************************************************/
		~MainWindowMock();

	};

}

