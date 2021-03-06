//
// "$Id: Fl_Multi_Browser.H 4288 2005-04-16 00:13:17Z mike $"
//
// Multi browser header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2005 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

#ifndef Fl_Multi_Browser_H
#define Fl_Multi_Browser_H

#include "Fl_Browser.H"

class Fl_Multi_Browser : public Fl_Browser {
public:
    Fl_Multi_Browser(int X,int Y,int W,int H,const char *L=0)
	: Fl_Browser(X,Y,W,H,L) {type(FL_MULTI_BROWSER);}
};

#endif

//
// End of "$Id: Fl_Multi_Browser.H 4288 2005-04-16 00:13:17Z mike $".
//
