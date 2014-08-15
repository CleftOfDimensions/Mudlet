#ifndef MUDLET_DLGOPTIONSAREATRIGGERS_H
#define MUDLET_DLGOPTIONSAREATRIGGERS_H

/***************************************************************************
 *   Copyright (C) 2008-2009 by Heiko Koehn - KoehnHeiko@googlemail.com    *
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


#include "ui_options_area_triggers.h"
#include <QWidget>
#include "TTrigger.h"

//#include <Qsci/qsciscintilla.h>
//#include <Qsci/qscilexerlua.h>

class dlgOptionsAreaTriggers : public QWidget , public Ui::options_area_triggers
{
    Q_OBJECT
        
public:
        
        dlgOptionsAreaTriggers(QWidget *);
    
signals:
    
    
public slots:
    
    
};

#endif // MUDLET_DLGOPTIONSAREATRIGGERS_H
