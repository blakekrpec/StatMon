#ifndef STATMON_DATA_WIDGET_HPP
#define STATMON_DATA_WIDGET_HPP

// Qt
#include <QLabel>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>

class DataWidget : public QWidget
{
	Q_OBJECT

  public:
	explicit DataWidget(const QString &id, QWidget *parent = nullptr);

  private:
	QVBoxLayout *layout_;
	QString id_;
	QLabel *title_;
};

#endif // STATMON_DATA_WIDGET_HPP
