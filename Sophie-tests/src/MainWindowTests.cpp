#include "pch.h"
#include "MainWindow.h"

TEST(Glfw, ShowWindow) {
	sophie::MainWindow* mainWindow = new sophie::MainWindow;
	ASSERT_NE(mainWindow, nullptr);
	ASSERT_TRUE(mainWindow->show());
}