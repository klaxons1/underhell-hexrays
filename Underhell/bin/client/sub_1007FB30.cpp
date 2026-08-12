_DWORD *__thiscall sub_1007FB30(_DWORD *this)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax

  this[1] = &IGameSystemPerFrame::`vftable';
  this[2] = &ISpatialLeafEnumerator::`vftable';
  *this = &CClientLeafSystem::`vftable';
  this[1] = &CClientLeafSystem::`vftable';
  this[2] = &CClientLeafSystem::`vftable';
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[15] = -1;
  v2 = this[8];
  this[11] = 0xFFFF;
  this[12] = 0xFFFF;
  this[13] = 0xFFFF;
  this[14] = 0;
  this[16] = v2;
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  this[24] = -1;
  v3 = this[17];
  this[20] = 0xFFFF;
  this[21] = 0xFFFF;
  this[22] = 0xFFFF;
  this[23] = 0;
  this[25] = v3;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  this[33] = -1;
  v4 = this[26];
  this[29] = 0xFFFF;
  this[30] = 0xFFFF;
  this[31] = 0xFFFF;
  this[32] = 0;
  this[34] = v4;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[42] = -1;
  v5 = this[35];
  this[38] = 0xFFFF;
  this[39] = 0xFFFF;
  this[40] = 0xFFFF;
  this[41] = 0;
  this[43] = v5;
  this[44] = 0;
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  this[48] = 0;
  this[53] = -1;
  v6 = this[46];
  this[49] = 0xFFFF;
  this[50] = 0xFFFF;
  this[51] = 0xFFFF;
  this[52] = 0;
  this[54] = v6;
  this[55] = 0;
  this[56] = 0;
  this[57] = 0;
  this[62] = -1;
  v7 = this[55];
  this[58] = 0xFFFF;
  this[59] = 0xFFFF;
  this[60] = 0xFFFF;
  this[61] = 0;
  this[63] = v7;
  this[64] = 0;
  this[65] = 0;
  this[66] = 0;
  this[67] = 0;
  this[68] = 0;
  this[73] = -1;
  v8 = this[66];
  this[69] = 0xFFFF;
  this[70] = 0xFFFF;
  this[71] = 0xFFFF;
  this[72] = 0;
  this[74] = v8;
  this[75] = 0;
  this[76] = 0;
  this[77] = 0;
  this[82] = -1;
  this[78] = 0xFFFF;
  this[79] = 0xFFFF;
  this[80] = 0xFFFF;
  v9 = this[75];
  this[81] = 0;
  this[83] = v9;
  this[84] = 0;
  this[85] = 0;
  this[86] = 0;
  this[87] = 0;
  this[88] = 0;
  this[89] = 0;
  this[90] = 0;
  this[91] = 0;
  this[92] = 0;
  this[93] = 0;
  this[94] = 0;
  this[95] = 0;
  *((_WORD *)this + 192) = 257;
  if ( (((_BYTE)this - 120) & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  this[98] = 0;
  this[99] = 0;
  this[44] = sub_1007D570;
  this[45] = sub_1007D550;
  this[64] = sub_1007D5B0;
  this[65] = sub_1007D590;
  this[84] = sub_1007D5F0;
  this[85] = sub_1007D5D0;
  return this;
}
