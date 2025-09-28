#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "myapp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	auto app = MyAppSettings::self();
    auto tag = app->isAutoSaveImmutable();
    app->setProperty("AutoSave", true);
    app->setWindowWidth(555);

    int a{ 0 };
}

MainWindow::~MainWindow()
{
    delete ui;
}
