#ifndef MUDLET_DLGCOMPOSER_H
#define MUDLET_DLGCOMPOSER_H

/***************************************************************************
 *   Copyright (C) 2008-2010 by Heiko Koehn - KoehnHeiko@googlemail.com    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


class Host;

#include "ui_composer.h"
#include <QMainWindow>


class dlgComposer : public QMainWindow , public Ui::composer
{
Q_OBJECT

public:

        dlgComposer( Host * );

        void init( QString title, QString txt );
        Host * mpHost;

public slots:
        void save();
        void cancel();
};

#endif // MUDLET_DLGCOMPOSER_H
