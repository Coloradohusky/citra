// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include <QWidget>

namespace Ui {
class ConfigureAchievement;
}

class ConfigureAchievement : public QWidget {
    Q_OBJECT

public:
    explicit ConfigureAchievement(QWidget* parent = nullptr);
    ~ConfigureAchievement() override;

    void ApplyConfiguration();
    void RetranslateUI();
    void SetConfiguration();

    std::unique_ptr<Ui::ConfigureAchievement> ui;
};
