/*
    CmdOptions.h

    Copyright 2021, Will Godfrey.

    This file is part of yoshimi, which is free software: you can
    redistribute it and/or modify it under the terms of the GNU General
    Public License as published by the Free Software Foundation, either
    version 2 of the License, or (at your option) any later version.

    yoshimi is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with yoshimi.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CMDOPTIONS_H
#define CMDOPTIONS_H

#include <csignal>
#include <cstring>
#include <string>
#include <deque>
#include <list>

#include "globals.h"

using std::string;

class CmdOptions
{
    public:
        CmdOptions(int argc, char **argv, std::list<string> &allArgs, bool &retn, int &guin, int &cmdn);
        std::list<string> settings;
        bool ret;
        int gui;
        int cmd;

    private:
        void loadCmdArgs(int argc, char **argv);

};

#endif /*CMDOPTIONS_H*/

