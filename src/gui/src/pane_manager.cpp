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

void PaneManager::addNewPane(PaneType pane_type)
{
	if (panes_.contains(pane_type))
	{
		return;
	}

	PaneWidget *new_pane_wgt = new PaneWidget(pane_type, this);
	new_pane_wgt->setStyleSheet("background-color: yellow;");
	layout_->addWidget(new_pane_wgt);

	panes_.emplace(pane_type, new_pane_wgt);
}

void PaneManager::disablePane(PaneType pane_type)
{
	if (panes_.contains(pane_type))
	{
		panes_.at(pane_type)->setEnabled(false);
	}
}

void PaneManager::enablePane(PaneType pane_type)
{
	if (panes_.contains(pane_type))
	{
		panes_.at(pane_type)->setEnabled(true);
	}
}
