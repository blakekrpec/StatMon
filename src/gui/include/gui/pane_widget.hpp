#ifndef STATMON_PANE_WIDGET_HPP
#define STATMON_PANE_WIDGET_HPP

// Qt
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>

// StatMon
#include "gui/data_types.hpp"
#include "gui/data_widget.hpp"
#include "gui/pane_types.hpp"

class PaneWidget : public QWidget
{
	Q_OBJECT

  public:
	explicit PaneWidget(PaneType pane_type, QWidget *parent = nullptr);

  private:
	QVBoxLayout *layout_;
	QLabel *title_;

	std::unordered_map<DataType, DataWidget *> data_panes_;

	void addDataWidget(DataType data_type);
};

#endif // STATMON_PANE_WIDGET_HPP
