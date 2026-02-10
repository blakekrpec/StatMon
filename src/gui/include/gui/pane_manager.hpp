#ifndef STATMON_PANE_MANAGER_HPP
#define STATMON_PANE_MANAGER_HPP

// Qt
#include <QHBoxLayout>
#include <QString>
#include <QWidget>

// StatMon
#include "gui/pane_widget.hpp"

// STL
#include <unordered_map>

class PaneManager : public QWidget
{
	Q_OBJECT

  public:
	explicit PaneManager(QWidget *parent = nullptr);

	bool addNewPane(const QString &id);
	bool disablePane(const QString &id);
	bool enablePane(const QString &id);

  private:
	QHBoxLayout *layout_;
	std::unordered_map<QString, PaneWidget *> panes_;
};

#endif // STATMON_PANE_MANAGER_HPP
