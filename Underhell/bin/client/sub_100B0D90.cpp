int __thiscall sub_100B0D90(unsigned __int16 *this)
{
  int v1; // esi
  int result; // eax

  v1 = this[78];
  result = 0xFFFF;
  *(_DWORD *)this = &CGlowOverlay::`vftable';
  if ( (_WORD)v1 != 0xFFFF )
  {
    sub_1003A300(&dword_1042F804, v1);
    result = dword_1042F804;
    *(_WORD *)(dword_1042F804 + 8 * v1 + 6) = dword_1042F814;
    LOWORD(dword_1042F814) = v1;
  }
  return result;
}
