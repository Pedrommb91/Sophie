#include "pch.h"
#include "MainWindow.h"
/*!**********************************************************************
\name			MainWindowTests
\author			Pedro Barreiro
\date			20/03/2020
\version		1.0
*********************************************************************/




/*!**********************************************************************
******************************** TESTS **********************************
*************************************************************************/

TEST(Glfw, ShowWindow) {
	sophie::MainWindow* mainWindow = new sophie::MainWindow;
	ASSERT_NE(mainWindow, nullptr);
	ASSERT_TRUE(mainWindow->Show());
}

TEST(Glfw, getWidth) {

}

