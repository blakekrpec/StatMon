#ifndef STATMON_DATA_WIDGET_HPP
#define STATMON_DATA_WIDGET_HPP

// Qt
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>

// StatMon
#include "gui/data_types.hpp"

class DataWidget : public QWidget
{
	Q_OBJECT

  public:
	explicit DataWidget(DataType data_type, QWidget *parent = nullptr);

  private:
	QVBoxLayout *layout_;
	QLabel *title_;

	void updateTitle(const QString &title);
};

#endif // STATMON_DATA_WIDGET_HPP
