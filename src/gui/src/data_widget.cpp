// Qt
#include <QLabel>
#include <QSizePolicy>
#include <QVBoxLayout>

// StatMon
#include "gui/data_types.hpp"
#include "gui/data_widget.hpp"

DataWidget::DataWidget(DataType data_type, QWidget *parent)
	: QWidget(parent)
	, layout_(new QVBoxLayout(this))
	, title_(new QLabel(dataTypeToQString(data_type), this))
{
	title_->setStyleSheet("font-size: 18px;");
	layout_->addWidget(title_);

	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void DataWidget::updateTitle(const QString &title)
{
	title_->setText(title);
}
