#ifndef STATMON_PANE_MANAGER_HPP
#define STATMON_PANE_MANAGER_HPP

// Qt
#include <QHBoxLayout>
#include <QString>
#include <QWidget>

// StatMon
#include "gui/pane_types.hpp"
#include "gui/pane_widget.hpp"

// STL
#include <unordered_map>

class PaneManager : public QWidget
{
	Q_OBJECT

  public:
	explicit PaneManager(QWidget *parent = nullptr);

	void addNewPane(PaneType pane_type);
	void disablePane(PaneType pane_type);
	void enablePane(PaneType pane_type);

  private:
	QHBoxLayout *layout_;
	std::unordered_map<PaneType, PaneWidget *> panes_;
};

#endif // STATMON_PANE_MANAGER_HPP
