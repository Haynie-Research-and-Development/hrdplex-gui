/*
#**********************************************************
#* CATEGORY    APPLICATIONS
#* GROUP       HRDPLEX-GUI
#* AUTHOR      LANCE HAYNIE <LHAYNIE@HAYNIEMAIL.COM>
#* DATE        2017-10-17
#**********************************************************
#* MODIFICATIONS
#* 2017-10-17 - LHAYNIE - INITIAL VERSION
#**********************************************************

#HRDPLEX-GUI - A GUI Front End to the Hercules Mainframe Emulator
#Copyright (C) 2017  Haynie Research & Development

#This program is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2 of the License, or
#(at your option) any later version.

#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License along
#with this program; if not, write to the Free Software Foundation, Inc.,
#51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef DEVICESRENAME_H
#define DEVICESRENAME_H

#include "Configuration.h"

#include <QDialog>
#include "ui_DevicesRename.h"

class DevicesRename : public QDialog
{
    Q_OBJECT

public:
    DevicesRename(int value, int newValue, QWidget *parent = 0);
    virtual ~DevicesRename();

public slots:
    void ok();
    void notok();

signals:
    void accepted(QString oldValue, QString newValue);
    void rejected();

private:
    Ui::DevicesRenameClass ui;
    int mInitialDevNum;

    Configuration::HexSpinBox* mSpinBox;
};

#endif // DEVICESRENAME_H
