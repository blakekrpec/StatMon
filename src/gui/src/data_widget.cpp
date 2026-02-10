// Qt
#include <QLabel>
#include <QSizePolicy>
#include <QVBoxLayout>

// StatMon
#include "gui/data_widget.hpp"

DataWidget::DataWidget(const QString &id, QWidget *parent)
	: QWidget(parent)
	, layout_(new QVBoxLayout(this))
	, id_(id)
{
	QLabel *label = new QLabel(id, this);
	label->setStyleSheet("font-size: 18px;");
	layout_->addWidget(label);

	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}
