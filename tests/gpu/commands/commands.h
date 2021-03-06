enum GECommand {
	GE_CMD_NOP = 0x00,
	GE_CMD_VADDR = 0x01,
	GE_CMD_IADDR = 0x02,
	GE_CMD_UNK_03 = 0x03,
	GE_CMD_PRIM = 0x04,
	GE_CMD_BEZIER = 0x05,
	GE_CMD_SPLINE = 0x06,
	GE_CMD_BOUNDINGBOX = 0x07,
	GE_CMD_JUMP = 0x08,
	GE_CMD_BJUMP = 0x09,
	GE_CMD_CALL = 0x0A,
	GE_CMD_RET = 0x0B,
	GE_CMD_END = 0x0C,
	GE_CMD_UNK_0D = 0x0D,
	GE_CMD_SIGNAL = 0x0E,
	GE_CMD_FINISH = 0x0F,
	GE_CMD_BASE = 0x10,
	GE_CMD_UNK_11 = 0x11,
	GE_CMD_VERTEXTYPE = 0x12,
	GE_CMD_OFFSETADDR = 0x13,
	GE_CMD_ORIGIN = 0x14,
	GE_CMD_REGION1 = 0x15,
	GE_CMD_REGION2 = 0x16,
	GE_CMD_LIGHTINGENABLE = 0x17,
	GE_CMD_LIGHTENABLE0 = 0x18,
	GE_CMD_LIGHTENABLE1 = 0x19,
	GE_CMD_LIGHTENABLE2 = 0x1A,
	GE_CMD_LIGHTENABLE3 = 0x1B,
	GE_CMD_CLIPENABLE = 0x1C,
	GE_CMD_CULLFACEENABLE,
	GE_CMD_TEXTUREMAPENABLE,
	GE_CMD_FOGENABLE,
	GE_CMD_DITHERENABLE,
	GE_CMD_ALPHABLENDENABLE = 0x21,
	GE_CMD_ALPHATESTENABLE = 0x22,
	GE_CMD_ZTESTENABLE = 0x23,
	GE_CMD_STENCILTESTENABLE = 0x24,
	GE_CMD_ANTIALIASENABLE = 0x25,
	GE_CMD_PATCHCULLENABLE = 0x26,
	GE_CMD_COLORTESTENABLE = 0x27,
	GE_CMD_LOGICOPENABLE = 0x28,
	GE_CMD_UNK_29 = 0x29,
	GE_CMD_BONEMATRIXNUMBER = 0x2A,
	GE_CMD_BONEMATRIXDATA = 0x2B,
	GE_CMD_MORPHWEIGHT0 = 0x2C,
	GE_CMD_MORPHWEIGHT1 = 0x2D,
	GE_CMD_MORPHWEIGHT2 = 0x2E,
	GE_CMD_MORPHWEIGHT3 = 0x2F,
	GE_CMD_MORPHWEIGHT4 = 0x30,
	GE_CMD_MORPHWEIGHT5 = 0x31,
	GE_CMD_MORPHWEIGHT6 = 0x32,
	GE_CMD_MORPHWEIGHT7 = 0x33,
	GE_CMD_UNK_34 = 0x34,
	GE_CMD_UNK_35 = 0x35,
	GE_CMD_PATCHDIVISION = 0x36,
	GE_CMD_PATCHPRIMITIVE = 0x37,
	GE_CMD_PATCHFACING = 0x38,
	GE_CMD_UNK_39 = 0x39,
	GE_CMD_WORLDMATRIXNUMBER = 0x3A,
	GE_CMD_WORLDMATRIXDATA,
	GE_CMD_VIEWMATRIXNUMBER,
	GE_CMD_VIEWMATRIXDATA,
	GE_CMD_PROJMATRIXNUMBER,
	GE_CMD_PROJMATRIXDATA,
	GE_CMD_TGENMATRIXNUMBER = 0x40,
	GE_CMD_TGENMATRIXDATA = 0x41,
	GE_CMD_VIEWPORTX1,
	GE_CMD_VIEWPORTY1,
	GE_CMD_VIEWPORTZ1,
	GE_CMD_VIEWPORTX2,
	GE_CMD_VIEWPORTY2,
	GE_CMD_VIEWPORTZ2,
	GE_CMD_TEXSCALEU = 0x48,
	GE_CMD_TEXSCALEV = 0x49,
	GE_CMD_TEXOFFSETU = 0x4A,
	GE_CMD_TEXOFFSETV = 0x4B,
	GE_CMD_OFFSETX = 0x4C,
	GE_CMD_OFFSETY = 0x4D,
	GE_CMD_UNK_4E = 0x4E,
	GE_CMD_UNK_4F = 0x4F,
	GE_CMD_SHADEMODE = 0x50,
	GE_CMD_REVERSENORMAL = 0x51,
	GE_CMD_UNK_52 = 0x52,
	GE_CMD_MATERIALUPDATE = 0x53,
	GE_CMD_MATERIALEMISSIVE,
	GE_CMD_MATERIALAMBIENT,
	GE_CMD_MATERIALDIFFUSE = 0x56,
	GE_CMD_MATERIALSPECULAR = 0x57,
	GE_CMD_MATERIALALPHA = 0x58,
	GE_CMD_UNK_59 = 0x59,
	GE_CMD_UNK_5A = 0x5A,
	GE_CMD_MATERIALSPECULARCOEF = 0x5B,
	GE_CMD_AMBIENTCOLOR,
	GE_CMD_AMBIENTALPHA,
	GE_CMD_LIGHTMODE = 0x5E,
	GE_CMD_LIGHTTYPE0 = 0x5F,
	GE_CMD_LIGHTTYPE1 = 0x60,
	GE_CMD_LIGHTTYPE2 = 0x61,
	GE_CMD_LIGHTTYPE3 = 0x62,
	GE_CMD_LX0 = 0x63,
	GE_CMD_LY0,
	GE_CMD_LZ0,
	GE_CMD_LX1,
	GE_CMD_LY1,
	GE_CMD_LZ1,
	GE_CMD_LX2,
	GE_CMD_LY2,
	GE_CMD_LZ2,
	GE_CMD_LX3,
	GE_CMD_LY3,
	GE_CMD_LZ3,
	GE_CMD_LDX0 = 0x6F,
	GE_CMD_LDY0,
	GE_CMD_LDZ0,
	GE_CMD_LDX1,
	GE_CMD_LDY1,
	GE_CMD_LDZ1,
	GE_CMD_LDX2,
	GE_CMD_LDY2,
	GE_CMD_LDZ2,
	GE_CMD_LDX3,
	GE_CMD_LDY3,
	GE_CMD_LDZ3,
	GE_CMD_LKA0 = 0x7B,
	GE_CMD_LKB0,
	GE_CMD_LKC0,
	GE_CMD_LKA1,
	GE_CMD_LKB1,
	GE_CMD_LKC1,
	GE_CMD_LKA2,
	GE_CMD_LKB2,
	GE_CMD_LKC2,
	GE_CMD_LKA3,
	GE_CMD_LKB3,
	GE_CMD_LKC3,
	GE_CMD_LKS0 = 0x87,
	GE_CMD_LKS1,
	GE_CMD_LKS2,
	GE_CMD_LKS3,
	GE_CMD_LKO0 = 0x8b,
	GE_CMD_LKO1,
	GE_CMD_LKO2,
	GE_CMD_LKO3,
	GE_CMD_LAC0 = 0x8F,
	GE_CMD_LDC0,
	GE_CMD_LSC0,
	GE_CMD_LAC1,
	GE_CMD_LDC1,
	GE_CMD_LSC1,
	GE_CMD_LAC2,
	GE_CMD_LDC2,
	GE_CMD_LSC2,
	GE_CMD_LAC3,
	GE_CMD_LDC3,
	GE_CMD_LSC3,
	GE_CMD_CULL = 0x9B,
	GE_CMD_FRAMEBUFPTR = 0x9C,
	GE_CMD_FRAMEBUFWIDTH = 0x9D,
	GE_CMD_ZBUFPTR = 0x9E,
	GE_CMD_ZBUFWIDTH = 0x9F,
	GE_CMD_TEXADDR0 = 0xA0,
	GE_CMD_TEXADDR1,
	GE_CMD_TEXADDR2,
	GE_CMD_TEXADDR3,
	GE_CMD_TEXADDR4,
	GE_CMD_TEXADDR5,
	GE_CMD_TEXADDR6,
	GE_CMD_TEXADDR7,
	GE_CMD_TEXBUFWIDTH0 = 0xA8,
	GE_CMD_TEXBUFWIDTH1,
	GE_CMD_TEXBUFWIDTH2,
	GE_CMD_TEXBUFWIDTH3,
	GE_CMD_TEXBUFWIDTH4,
	GE_CMD_TEXBUFWIDTH5,
	GE_CMD_TEXBUFWIDTH6,
	GE_CMD_TEXBUFWIDTH7,
	GE_CMD_CLUTADDR = 0xB0,
	GE_CMD_CLUTADDRUPPER,
	GE_CMD_TRANSFERSRC,
	GE_CMD_TRANSFERSRCW,
	GE_CMD_TRANSFERDST,
	GE_CMD_TRANSFERDSTW,
	GE_CMD_UNK_B6 = 0xB6,
	GE_CMD_UNK_B7 = 0xB7,
	GE_CMD_TEXSIZE0 = 0xB8,
	GE_CMD_TEXSIZE1,
	GE_CMD_TEXSIZE2,
	GE_CMD_TEXSIZE3,
	GE_CMD_TEXSIZE4,
	GE_CMD_TEXSIZE5,
	GE_CMD_TEXSIZE6,
	GE_CMD_TEXSIZE7,
	GE_CMD_TEXMAPMODE = 0xC0,
	GE_CMD_TEXSHADELS = 0xC1,
	GE_CMD_TEXMODE = 0xC2,
	GE_CMD_TEXFORMAT = 0xC3,
	GE_CMD_LOADCLUT = 0xC4,
	GE_CMD_CLUTFORMAT = 0xC5,
	GE_CMD_TEXFILTER = 0xC6,
	GE_CMD_TEXWRAP = 0xC7,
	GE_CMD_TEXLEVEL = 0xC8,
	GE_CMD_TEXFUNC = 0xC9,
	GE_CMD_TEXENVCOLOR = 0xCA,
	GE_CMD_TEXFLUSH = 0xCB,
	GE_CMD_TEXSYNC = 0xCC,
	GE_CMD_FOG1 = 0xCD,
	GE_CMD_FOG2 = 0xCE,
	GE_CMD_FOGCOLOR = 0xCF,
	GE_CMD_TEXLODSLOPE = 0xD0,
	GE_CMD_UNK_D1 = 0xD1,
	GE_CMD_FRAMEBUFPIXFORMAT = 0xD2,
	GE_CMD_CLEARMODE = 0xD3,
	GE_CMD_SCISSOR1 = 0xD4,
	GE_CMD_SCISSOR2 = 0xD5,
	GE_CMD_MINZ = 0xD6,
	GE_CMD_MAXZ = 0xD7,
	GE_CMD_COLORTEST = 0xD8,
	GE_CMD_COLORREF = 0xD9,
	GE_CMD_COLORTESTMASK = 0xDA,
	GE_CMD_ALPHATEST = 0xDB,
	GE_CMD_STENCILTEST = 0xDC,
	GE_CMD_STENCILOP = 0xDD,
	GE_CMD_ZTEST = 0xDE,
	GE_CMD_BLENDMODE = 0xDF,
	GE_CMD_BLENDFIXEDA = 0xE0,
	GE_CMD_BLENDFIXEDB = 0xE1,
	GE_CMD_DITH0 = 0xE2,
	GE_CMD_DITH1,
	GE_CMD_DITH2,
	GE_CMD_DITH3,
	GE_CMD_LOGICOP = 0xE6,
	GE_CMD_ZWRITEDISABLE = 0xE7,
	GE_CMD_MASKRGB = 0xE8,
	GE_CMD_MASKALPHA = 0xE9,
	GE_CMD_TRANSFERSTART = 0xEA,
	GE_CMD_TRANSFERSRCPOS = 0xEB,
	GE_CMD_TRANSFERDSTPOS = 0xEC,
	GE_CMD_UNK_ED = 0xED,
	GE_CMD_TRANSFERSIZE = 0xEE,
	GE_CMD_UNK_EF = 0xEF,
	GE_CMD_UNK_F0 = 0xF0,
	GE_CMD_UNK_F1 = 0xF1,
	GE_CMD_UNK_F2 = 0xF2,
	GE_CMD_UNK_F3 = 0xF3,
	GE_CMD_UNK_F4 = 0xF4,
	GE_CMD_UNK_F5 = 0xF5,
	GE_CMD_UNK_F6 = 0xF6,
	GE_CMD_UNK_F7 = 0xF7,
	GE_CMD_UNK_F8 = 0xF8,
	GE_CMD_UNK_F9 = 0xF9,
	GE_CMD_UNK_FA = 0xFA,
	GE_CMD_UNK_FB = 0xFB,
	GE_CMD_UNK_FC = 0xFC,
	GE_CMD_UNK_FD = 0xFD,
	GE_CMD_UNK_FE = 0xFE,
	GE_CMD_UNK_FF = 0xFF,
};

enum SignalBehavior
{
	PSP_GE_SIGNAL_NONE             = 0x00,
	PSP_GE_SIGNAL_HANDLER_SUSPEND  = 0x01,
	PSP_GE_SIGNAL_HANDLER_CONTINUE = 0x02,
	PSP_GE_SIGNAL_HANDLER_PAUSE    = 0x03,
	PSP_GE_SIGNAL_SYNC             = 0x08,
	PSP_GE_SIGNAL_JUMP             = 0x10,
	PSP_GE_SIGNAL_CALL             = 0x11,
	PSP_GE_SIGNAL_RET              = 0x12,
	PSP_GE_SIGNAL_RJUMP            = 0x13,
	PSP_GE_SIGNAL_RCALL            = 0x14,
	PSP_GE_SIGNAL_OJUMP            = 0x15,
	PSP_GE_SIGNAL_OCALL            = 0x16,

	PSP_GE_SIGNAL_RTBP0            = 0x20,
	PSP_GE_SIGNAL_RTBP1            = 0x21,
	PSP_GE_SIGNAL_RTBP2            = 0x22,
	PSP_GE_SIGNAL_RTBP3            = 0x23,
	PSP_GE_SIGNAL_RTBP4            = 0x24,
	PSP_GE_SIGNAL_RTBP5            = 0x25,
	PSP_GE_SIGNAL_RTBP6            = 0x26,
	PSP_GE_SIGNAL_RTBP7            = 0x27,
	PSP_GE_SIGNAL_OTBP0            = 0x28,
	PSP_GE_SIGNAL_OTBP1            = 0x29,
	PSP_GE_SIGNAL_OTBP2            = 0x2A,
	PSP_GE_SIGNAL_OTBP3            = 0x2B,
	PSP_GE_SIGNAL_OTBP4            = 0x2C,
	PSP_GE_SIGNAL_OTBP5            = 0x2D,
	PSP_GE_SIGNAL_OTBP6            = 0x2E,
	PSP_GE_SIGNAL_OTBP7            = 0x2F,
	PSP_GE_SIGNAL_RCBP             = 0x30,
	PSP_GE_SIGNAL_OCBP             = 0x38,
	PSP_GE_SIGNAL_BREAK1           = 0xF0,
	PSP_GE_SIGNAL_BREAK2           = 0xFF,
};
