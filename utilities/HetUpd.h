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

#ifndef HETUPD_H
#define HETUPD_H

#include "GenericUtility.h"

#include <QDialog>
#include "ui_HetUpd.h"

class HetUpd : public GenericUtility
{
    Q_OBJECT

public:
    HetUpd(QWidget *parent = 0);
    ~HetUpd();

private:
    Ui::HetUpdClass ui;

    virtual void finishedSlot();

private slots:
    void exitClicked();
    void runClicked();
    void browseInFileClicked();
	void browseOutDirClicked();
	void browseOutFileClicked();
};

#endif // HETUPD_H
