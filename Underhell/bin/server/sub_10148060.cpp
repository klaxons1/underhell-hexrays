int __thiscall sub_10148060(int this)
{
  int v2; // edi
  __int16 v4; // [esp-4h] [ebp-Ch]

  v2 = *(unsigned __int16 *)(this + 808);
  v4 = *(_WORD *)(this + 808);
  *(_DWORD *)this = &CFuncAreaPortalBase::`vftable';
  sub_10399E70(v4);
  *(_WORD *)(dword_10625150 + 8 * v2 + 6) = word_10625160;
  word_10625160 = v2;
  return sub_100DF1D0((_DWORD *)this);
}
