int __thiscall sub_10148110(int this, char a2)
{
  int v3; // edi
  __int16 v5; // [esp-4h] [ebp-Ch]

  v3 = *(unsigned __int16 *)(this + 808);
  v5 = *(_WORD *)(this + 808);
  *(_DWORD *)this = &CFuncAreaPortalBase::`vftable';
  sub_10399E70(v5);
  *(_WORD *)(dword_10625150 + 8 * v3 + 6) = word_10625160;
  word_10625160 = v3;
  sub_100DF1D0((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    sub_100D6360(this);
  return this;
}
