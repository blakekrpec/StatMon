#pragma once

// Qt
#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT

  public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow() override = default;
};
