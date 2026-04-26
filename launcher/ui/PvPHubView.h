#pragma once

#include <QWidget>

namespace Ui {
class PvPHubView;
}

class PvPHubView : public QWidget {
    Q_OBJECT

   public:
    explicit PvPHubView(QWidget* parent = nullptr);
    ~PvPHubView();

   private slots:
    void on_applyPerfBtn_clicked();

   private:
    Ui::PvPHubView* ui;
};
