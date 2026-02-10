// Qt
#include <QHBoxLayout>
#include <QString>
#include <QWidget>
#include <qwidget.h>

// StatMon
#include "gui/pane_manager.hpp"
#include "gui/pane_widget.hpp"

PaneManager::PaneManager(QWidget *parent)
	: QWidget(parent)
	, layout_(new QHBoxLayout(this))
{
	layout_->setContentsMargins(0, 0, 0, 0);
	layout_->setSpacing(5);

	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

bool PaneManager::addNewPane(const QString &id)
{
	if (panes_.contains(id))
	{
		return false;
	}

	PaneWidget *new_pane_wgt = new PaneWidget(id, this);
	new_pane_wgt->setStyleSheet("background-color: yellow;");
	layout_->addWidget(new_pane_wgt);
	panes_.emplace(id, new_pane_wgt);

	return true;
}

bool PaneManager::disablePane(const QString &id)
{
	if (panes_.contains(id))
	{
		panes_.at(id)->setEnabled(false);
		return true;
	}
	else
	{
		return false;
	}
}

bool PaneManager::enablePane(const QString &id)
{
	if (panes_.contains(id))
	{
		panes_.at(id)->setEnabled(true);
		return true;
	}
	else
	{
		return false;
	}
}
