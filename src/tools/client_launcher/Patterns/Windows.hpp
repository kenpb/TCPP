/*
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ClientLauncherPatternsWindows_h__
#define ClientLauncherPatternsWindows_h__

#include "Define.h"
#include <vector>

namespace ClientLauncher
{
    namespace Patterns
    {
        namespace Windows
        {
            struct x86
            {
                static std::vector<uint8> BNet() { return { 0x8B, 0x55, 0x08, 0x89, 0x48, 0x08 }; }
                static std::vector<uint8> Password() { return { 0x74, 0x89, 0x8B, 0x16, 0x8B, 0x42, 0x04 }; }
                static std::vector<uint8> Signature() { return { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x84, 0xC0, 0x0F, 0x085, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x85, 0xF0, 0xBD, 0xFF, 0xFF }; }
            };

            struct x64
            {
                static std::vector<uint8> BNet() { return { 0x8B, 0x02, 0x89, 0x41, 0x0C, 0x48, 0x8B, 0xC1, 0xC3, 0xCC, 0xCC, 0xCC }; }
                static std::vector<uint8> Password() { return { 0x74, 0x84, 0x48, 0x8B, 0x03 }; }
                static std::vector<uint8> Signature() { return { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x84, 0xC0, 0x0F, 0x85, 0x00, 0x00, 0x00, 0x00, 0x45, 0x33, 0xC0 }; }
            };
        };
    }
}

#endif // ClientLauncherPatternsWindows_h__
