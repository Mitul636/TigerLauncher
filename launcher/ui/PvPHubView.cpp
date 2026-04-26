#include "PvPHubView.h"
#include "ui_PvPHubView.h"
#include "Application.h"
#include "settings/SettingsObject.h"
#include "dialogs/CustomMessageBox.h"

PvPHubView::PvPHubView(QWidget* parent) : QWidget(parent), ui(new Ui::PvPHubView) {
    ui->setupUi(this);

    // Load current settings
    QString profile = APPLICATION->settings()->get("OptimizationProfile").toString();
    if (profile == "Potato") ui->potatoRadio->setChecked(true);
    else if (profile == "Low") ui->lowRadio->setChecked(true);
    else if (profile == "Medium") ui->mediumRadio->setChecked(true);
    else if (profile == "High") ui->highRadio->setChecked(true);
    else ui->lowRadio->setChecked(true);

    connect(ui->applyPerfBtn, &QPushButton::clicked, this, &PvPHubView::on_applyPerfBtn_clicked);
}

void PvPHubView::on_applyPerfBtn_clicked() {
    QString profile = "Low";
    if (ui->potatoRadio->isChecked()) profile = "Potato";
    else if (ui->lowRadio->isChecked()) profile = "Low";
    else if (ui->mediumRadio->isChecked()) profile = "Medium";
    else if (ui->highRadio->isChecked()) profile = "High";

    APPLICATION->settings()->set("AutoOptimize", true);
    APPLICATION->settings()->set("OptimizationProfile", profile);

    CustomMessageBox::selectable(this, tr("Success"), tr("Global optimization settings applied! All instances will now use optimized JVM flags and RAM allocation."), QMessageBox::Information)->show();
}

PvPHubView::~PvPHubView() {
    delete ui;
}

