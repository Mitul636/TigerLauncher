#pragma once

#include <QWidget>

namespace Ui {
class ModBrowserView;
}

class ModBrowserView : public QWidget {
    Q_OBJECT

   public:
    explicit ModBrowserView(QWidget* parent = nullptr);
    ~ModBrowserView();

   private:
    Ui::ModBrowserView* ui;
};
