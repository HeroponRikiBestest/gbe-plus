// GB Enhanced+ Copyright Daniel Baxter 2014
// Licensed under the GPLv2
// See LICENSE.txt for full license text

// File : cgfx.h
// Date : August 12, 2015
// Description : GBE+ Global Custom Graphics
//
// Emulator-wide custom graphics assets

#ifndef GBE_CGFX
#define GBE_CGFX

#include <string>

#include "common.h"

namespace cgfx
{ 
	extern u8 gbc_bg_color_pal;
	extern u8 gbc_bg_vram_bank;

	extern bool load_cgfx;
	extern bool auto_dump_obj;
	extern bool auto_dump_bg;

	extern u32 transparency_color;

	extern std::string manifest_file;
}

#endif // GBE_CGFX 
