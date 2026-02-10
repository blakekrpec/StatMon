#ifndef STATMON_PANE_WIDGET_HPP
#define STATMON_PANE_WIDGET_HPP

// Qt
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>

// StatMon
#include "gui/data_widget.hpp"

class PaneWidget : public QWidget
{
	Q_OBJECT

  public:
	explicit PaneWidget(const QString &id, QWidget *parent = nullptr);

  private:
	QVBoxLayout *layout_;
	QString id_;
	QLabel *title_;

	std::unordered_map<QString, DataWidget *> data_panes_;
};

#endif // STATMON_PANE_WIDGET_HPP
