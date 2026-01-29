// StatMon
#include "gui/main_window.hpp"

// Qt
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setApplicationName("StatMon");

	MainWindow window;
	window.show();

	return app.exec();
}
