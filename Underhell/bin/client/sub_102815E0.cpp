_DWORD *__thiscall sub_102815E0(_DWORD *this, int a2, int a3)
{
  int *v4; // edi
  _DWORD *v5; // ebp
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // ecx

  *this = &vgui::BuildGroup::`vftable';
  this[19] = 0;
  this[20] = 0;
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  this[26] = -1;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  v4 = this + 29;
  v5 = this + 26;
  this[39] = 0;
  this[40] = 0;
  this[41] = 0;
  this[42] = 0;
  this[43] = 0;
  this[49] = 0;
  this[50] = 0;
  this[51] = 0;
  this[52] = 0;
  this[53] = 0;
  v6 = sub_102810B0(&dword_10481988);
  this[1] = v6;
  if ( v6 != -1 )
  {
    v7 = v6 & 0xFFFFF;
    if ( (v6 & 0xFFFFF) < dword_10481998 )
    {
      v8 = *(_DWORD *)(dword_1048198C + 8 * v7) ^ (v6 >> 20) & 0x7FF;
      v9 = (int *)(dword_1048198C + 8 * v7);
      if ( (v8 & 0x7FFFFFFF) == 0 )
      {
        if ( *v9 < 0 )
        {
          ++dword_10481988;
          *v9 &= ~0x80000000;
        }
        v9[1] = (int)this;
      }
    }
  }
  *((_BYTE *)this + 8) = 0;
  this[3] = 1;
  this[4] = 1;
  this[5] = 8;
  this[6] = 9;
  this[7] = 10;
  this[8] = 11;
  this[9] = 12;
  this[18] = 0;
  *((_BYTE *)this + 40) = 0;
  this[24] = 0;
  this[25] = 0;
  sub_102393F0(v5, 0);
  this[28] = a2;
  this[44] = 0;
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  this[27] = a3;
  v4[3] = 0;
  sub_10280380(v4, 0, 0, 0);
  this[37] = 0;
  *((_BYTE *)this + 192) = 0;
  return this;
}
