#ifndef STATMON_SETTINGS_DIALOG_HPP
#define STATMON_SETTINGS_DIALOG_HPP

// Qt
#include <QDialog>
#include <QDialogButtonBox>
#include <QTabWidget>

class SettingsDialog : public QDialog
{
	Q_OBJECT

  public:
	explicit SettingsDialog(QWidget *parent = nullptr);

  private:
	QTabWidget *tab_widget_;
	QDialogButtonBox *button_box_;
};
#endif // STATMON_SETTINGS_DIALOG_HPP
