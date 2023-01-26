// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include <QDesktopServices>
#include <QFileDialog>
#include <QMessageBox>
#include <QUrl>
#include "citra_qt/configuration/configuration_shared.h"
#include "citra_qt/configuration/configure_achievement.h"
#include "citra_qt/uisettings.h"
#include "common/file_util.h"
#include "common/settings.h"
#include "ui_configure_achievement.h"

ConfigureAchievement::ConfigureAchievement(QWidget* parent)
    : QWidget(parent), ui(std::make_unique<Ui::ConfigureAchievement>()) {
    ui->setupUi(this);
    SetConfiguration();
}

ConfigureAchievement::~ConfigureAchievement() = default;

void ConfigureAchievement::SetConfiguration() {

}

void ConfigureAchievement::ApplyConfiguration() {

}

void ConfigureAchievement::RetranslateUI() {
    ui->retranslateUi(this);
}
