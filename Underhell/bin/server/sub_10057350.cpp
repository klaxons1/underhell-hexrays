float *__thiscall sub_10057350(float *this, float *a2)
{
  int v3; // edx
  _DWORD *v4; // eax

  this[1] = 0.0;
  this[3] = 0.0;
  *(_DWORD *)this = &CAI_FollowBehavior::`vftable';
  if ( dword_10603BAC != dword_10694898 )
  {
    sub_10055AD0();
    byte_10603BA8 = 1;
    dword_10603BAC = dword_10694898;
  }
  this[5] = NAN;
  this[23] = 0.0;
  this[24] = 0.0;
  this[25] = 0.0;
  this[26] = -1.0;
  this[36] = -1.0;
  *((_BYTE *)this + 148) = 0;
  this[38] = 0.0;
  this[39] = 0.0;
  this[40] = -1.0;
  this[43] = 0.0;
  this[44] = 0.0;
  this[42] = -1.0;
  this[46] = 0.0;
  this[45] = -1.0;
  this[49] = 0.0;
  this[50] = 0.0;
  this[48] = -1.0;
  this[52] = 0.0;
  this[53] = 0.0;
  this[51] = -1.0;
  this[56] = 0.0;
  *((_BYTE *)this + 228) = 0;
  this[58] = NAN;
  memset(this + 6, 0, 0x38u);
  this[38] = 1.0;
  this[39] = 3.0;
  this[54] = 0.0;
  this[55] = 0.0;
  this[43] = 0.5;
  this[44] = 1.5;
  this[42] = -1.0;
  this[45] = -1.0;
  this[46] = 1.0;
  this[47] = 0.0;
  this[49] = 2.0;
  this[50] = 4.0;
  this[48] = -1.0;
  this[52] = 3.0;
  this[53] = 12.0;
  this[51] = -1.0;
  this[56] = *a2;
  v3 = *((_DWORD *)a2 + 1);
  this[29] = 3.4028235e38;
  v4 = (_DWORD *)*((_DWORD *)this + 1);
  *((_DWORD *)this + 57) = v3;
  this[28] = 0.0;
  if ( v4 && *(_DWORD *)(dword_10692124 + 48) )
    sub_10029660(v4, (int)"Follow: NoteSuccessfulFollow()\n");
  return this;
}
