// Qt
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <qpushbutton.h>

// StatMon
#include "gui/main_window.hpp"
#include "gui/pane_manager.hpp"
#include "gui/settings_dialog.hpp"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	setWindowTitle("StatMon");
	resize(800, 600);

	central_widget_ = new QWidget(this);
	setCentralWidget(central_widget_);

	QVBoxLayout *main_layout = new QVBoxLayout(central_widget_);
	main_layout->setContentsMargins(0, 14, 0, 0);

	pane_manager_ = new PaneManager(central_widget_);
	main_layout->addWidget(pane_manager_);
	pane_manager_->addNewPane(PaneType::CPU);
	pane_manager_->addNewPane(PaneType::GPU);

	settings_dialog_ = new SettingsDialog(central_widget_);
	main_layout->addWidget(settings_dialog_);

	settings_button_ = new QPushButton("Settings", this);
	QPushButton::connect(settings_button_, &QPushButton::clicked, [&]() { settings_dialog_->open(); });
}
