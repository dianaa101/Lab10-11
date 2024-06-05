#ifndef QTLAB_H_
#define QT_LAB_H

#include <QMainWindow.h>
#include <QTableWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QMessageBox>
#include <QLabel>
#include <QDebug>
#include <QRadioButton>
#include <QHeaderView>
#include <QSplitter>
#include <QIcon>
#include <QGraphicsDropShadowEffect>

#include "service.h"

class AppGUI : public QWidget {

public:
	AppGUI(Service& srv) : srv{ srv } {
		initGUI();
		notificareGUI();
		connectSignals();
	}

private:
	Service& srv;
	QWidget* notificare = new QWidget;
	QTableWidget* table = new QTableWidget;
	QListWidget* list = new QListWidget;
	QListWidget* lista_notificari = new QListWidget;
	QVBoxLayout* lista_layout = new QVBoxLayout;

	// butoane
	vector<QPushButton*> vector_btn;
	QPushButton* btn_add = new QPushButton{ "Add" };
	QPushButton* btn_delete = new QPushButton{ "Delete" };
	QPushButton* btn_update = new QPushButton{ "Update" };
	QPushButton* btn_find = new QPushButton{ "Find" };
	QPushButton* btn_undo = new QPushButton{ "Undo" };
	QPushButton* btn_notificare = new QPushButton{ "Notificare" };
	QPushButton* sort_name = new QPushButton{ "Sort by name" };
	QPushButton* sort_surface = new QPushButton{ "Sort by surface" };
	QPushButton* sort_type_surface = new QPushButton{ "Sort by type and surface" };
	QPushButton* filter_number = new QPushButton{ "Filter by number" };
	QPushButton* filter_type = new QPushButton{ "Filter by name" };
	QLineEdit* txtfilter = new QLineEdit;
	QPushButton* exit = new QPushButton{ "Exit" };
	QPushButton* load = new QPushButton{ "Load" };

	// butoane lista notificari
	QPushButton* btn_add_notificare = new QPushButton{ "Add to the notifications list" };
	QPushButton* btn_delete_notificare = new QPushButton{ "Delete notifications list" };
	QPushButton* btn_generate_notificari = new QPushButton{ "Generate notifications" };
	QPushButton* btn_export_notificari = new QPushButton{ "Export notifications" };
	QPushButton* btn_exit_notificari = new QPushButton{ "Exit" };

	// layout
	QLineEdit* txtNumber = new QLineEdit;
	QLineEdit* txtName = new QLineEdit;
	QLineEdit* txtSurface = new QLineEdit;
	QLineEdit* txtType = new QLineEdit;

	// notificari
	QLineEdit* txtNotificareNumar = new QLineEdit;
	QLineEdit* txtNotificareFile = new QLineEdit;
	QLineEdit* txtNotificareNumber = new QLineEdit;
	QLineEdit* txtNotificareName = new QLineEdit;


	void load_list(const vector<Tentant>& tentants);
	void load_table(const vector<Tentant>& tentants);
	void load_list_from_table(const vector<Tentant>& tentants);
	void notificareGUI();
	void connectSignals();

	void initGUI();

	void clearTextBox();
	void clearNotificareTextBox();
	void uiAdd();
	void uiDelete();
	void uiUpdate();
	void uiFind();
	// void uiNotificareAdd();
	void uiFilterNumber();
	void uiFilterType();
	void sortName();
	void sortSurface();
	void sortTypeSurface();


};


#endif // !QTLAB_H_