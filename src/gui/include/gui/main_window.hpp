#ifndef STATMON_MAIN_WINDOW_HPP
#define STATMON_MAIN_WINDOW_HPP

// Qt
#include <QDialog>
#include <QMainWindow>
#include <QPushButton>

// StatMon
#include "gui/pane_manager.hpp"

class MainWindow : public QMainWindow
{
	Q_OBJECT

  public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override = default;

  private:
	PaneManager *pane_manager_ = nullptr;
	QWidget *central_widget_ = nullptr;
	QDialog *settings_dialog_ = nullptr;
	QPushButton *settings_button_ = nullptr;
};

#endif // STATMON_MAIN_WINDOW_HPP
