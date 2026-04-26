#pragma once

#include "minecraft/auth/AuthStep.h"
#include <QNetworkReply>

class ElyByStep : public AuthStep {
    Q_OBJECT
   public:
    explicit ElyByStep(AuthFlow* parent) : AuthStep(parent) {}

    QString name() const override { return "Ely.by Authentication"; }
    void executeStep() override;

   private slots:
    void on_finished();

   private:
    QNetworkReply* m_reply = nullptr;
};
