// Qt
#include <QLabel>
#include <QSizePolicy>
#include <QVBoxLayout>

// StatMon
#include "gui/data_types.hpp"
#include "gui/data_widget.hpp"
#include "gui/pane_types.hpp"
#include "gui/pane_widget.hpp"

PaneWidget::PaneWidget(PaneType pane_type, QWidget *parent)
	: QWidget(parent)
	, layout_(new QVBoxLayout(this))
	, title_(new QLabel(paneTypeToQString(pane_type)))

{
	layout_->addWidget(title_);

	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	addDataWidget(DataType::TEMP);
	addDataWidget(DataType::UTIL);
}

void PaneWidget::addDataWidget(DataType data_type)
{
	if (data_panes_.contains(data_type))
	{
		return;
	}

	DataWidget *data_widget = new DataWidget(data_type, this);
	layout_->addWidget(data_widget);

	data_panes_.emplace(data_type, data_widget);
}
