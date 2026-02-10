// Qt
#include <QDialog>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>

// StatMon
#include "gui/settings_dialog.hpp"

SettingsDialog::SettingsDialog(QWidget *parent)
	: QDialog(parent)
	, tab_widget_(new QTabWidget(this))
	, button_box_(new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel))
{
	setWindowTitle("Settings");
	resize(500, 400);

	tab_widget_->addTab(new QWidget(), "View");
	tab_widget_->addTab(new QWidget(), "Test");

	QVBoxLayout *layout = new QVBoxLayout(this);
	layout->addWidget(tab_widget_);
	layout->addWidget(button_box_);

	connect(button_box_, &QDialogButtonBox::accepted, this, &QDialog::accept);
	connect(button_box_, &QDialogButtonBox::rejected, this, &QDialog::reject);
}
