#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "myapp.h"
#include "kSharedConfig"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	auto app = MyAppSettings::self();
    auto tag = app->isAutoSaveImmutable();
    app->setWindowWidth(555);
    app->setWindowHeight(800);
    app->setAutoSave(false);
    auto bflag = app->save();
    int a{ 0 };
}

MainWindow::~MainWindow()
{
    delete ui;
}
