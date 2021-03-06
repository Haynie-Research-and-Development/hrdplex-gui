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

#ifndef CARDREADERPROPERTIES_H
#define CARDREADERPROPERTIES_H

#include "GenericDeviceProperties.h"
#include "Extended_Ui_CardReaderProperties.h"

#include <QStandardItemModel>

class NewReaderFile;
class CardReaderProperties : public GenericDeviceProperties
{
    Q_OBJECT

public:
    CardReaderProperties(ConfigLine& line, QWidget *parent = 0);
    virtual ~CardReaderProperties();

    // Item previously dragged, was relocated, and the original should be deleted
    void shouldBeDeleted();

private:
    Extended_Ui_CardReaderProperties ui;
    QStandardItemModel * mModel;
    NewReaderFile * mNewReaderFile;
    int mDragCandidate, mDragCount;

    std::vector<std::string> mFileList;

    void setSockdev(bool checked);
    void initialize(const ConfigLine & line);


private slots:
    void ok();
    void cancel();
    void itemPressed (const QModelIndex &);
    void addPressed();
    void deletePressed();
    void addFile(QString& str);
    void newFileFinished(QObject * obj);
    void sockdevChanged();
};

#endif // CARDREADERPROPERTIES_H
