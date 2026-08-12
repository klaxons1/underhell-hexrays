unsigned __int16 *__thiscall sub_100B0DD0(unsigned __int16 *this, char a2)
{
  int v3; // edi

  v3 = this[78];
  *(_DWORD *)this = &CGlowOverlay::`vftable';
  if ( (_WORD)v3 != 0xFFFF )
  {
    sub_1003A300(&dword_1042F804, v3);
    *(_WORD *)(dword_1042F804 + 8 * v3 + 6) = dword_1042F814;
    LOWORD(dword_1042F814) = v3;
  }
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
