#include "ModBrowserView.h"
#include "ui_ModBrowserView.h"

ModBrowserView::ModBrowserView(QWidget* parent) : QWidget(parent), ui(new Ui::ModBrowserView) {
    ui->setupUi(this);
}

ModBrowserView::~ModBrowserView() {
    delete ui;
}
