// Qt
#include <QDialog>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include <qpushbutton.h>

// StatMon
#include "gui/settings_dialog.hpp"

SettingsDialog::SettingsDialog(QWidget *parent)
	: QDialog(parent)
	, tab_widget_(new QTabWidget(this))
	, button_box_(new QDialogButtonBox(QDialogButtonBox::Save | QDialogButtonBox::Reset | QDialogButtonBox::Cancel))
{
	setWindowTitle("Settings");
	resize(500, 400);

	QVBoxLayout *layout = new QVBoxLayout(this);
	layout->addWidget(tab_widget_);
	layout->addWidget(button_box_);

	tab_widget_->addTab(new QWidget(), "View");
	tab_widget_->addTab(new QWidget(), "Test");

	QPushButton *save_button = button_box_->button(QDialogButtonBox::Save);
	QPushButton *reset_button = button_box_->button(QDialogButtonBox::Reset);

	connect(save_button, &QPushButton::clicked, this, &SettingsDialog::onSave);
	connect(reset_button, &QPushButton::clicked, this, &SettingsDialog::onReset);
	connect(button_box_, &QDialogButtonBox::rejected, this, &QDialog::reject);
}

void SettingsDialog::onSave()
{
	// TODO: Save logic.
	accept();
}

void SettingsDialog::onReset()
{
	// TODO: Reset logic.
	accept();
}
