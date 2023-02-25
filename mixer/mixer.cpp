// This file is a part of  DaVinci
// Copyright (C) 2022  akshay bansod <aksh.bansod@yahoo.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.



#include "mixer.hpp"

mixer::mixer()
{
}

long mixer::seek(unsigned int stream, long ms)
{
    return 0;
}

void mixer::record(int stream)
{
}

void mixer::stopRec()
{
}

bool mixer::toggle(int stream, bool force)
{
    return false;
}

void mixer::play()
{
}

void mixer::pause()
{
}

void mixer::clear(int stream)
{
}

mixer::~mixer()
{
}